### how to setup new env
# global
1) change "description" and "name" in "integration-chart/chart.yml" instead "naren"

2) change "deploy.sh"
- add needed microservices services
- change name for helm

3) change .gitlab-ci.yml
- modiry URLs (like "PHP_HOST")

4) add "develop" "stage" "production" in Gitlab. DONT CHANGE NAMES! (Operations-> Environments)

5) copy / check Environment variables in Gitlab (Settings->CI/CD->Variables)



# steps on k8s

            1) create namespace. Example below:
            #dev
            kubectl create ns naren-dev
            #stage
            kubectl create ns naren-stage
            #prod
            kubectl create ns naren-prod


2) upload "basic-auth" for dev and stage. Example for "stage" below:

         #stage
         kubectl get secret basic-auth -o yaml -n tikkuninaction-stage | grep -v namesp| kubectl apply -f - -n naren-stage
         #prod skip this step


3) add auth for Azure container registry. Example below:

        #stage
        kubectl get secrets azure.regcreds -o yaml  | grep -v namespace | kubectl apply -f - -n naren-stage
        #prod
        kubectl get secrets azure.regcreds -o yaml  | grep -v namespace | kubectl apply -f - -n naren-prod


4) for php - apply PVC and Secret

        #dev
        kubectl apply -f integration-chart/charts/php/static/pvc.yml -n naren-dev
        kubectl apply -f integration-chart/charts/php/static/secret.yml -n naren-dev
        #stage
        kubectl apply -f integration-chart/charts/php/static/pvc.yml -n naren-stage
        kubectl apply -f integration-chart/charts/php/static/secret.yml -n naren-stage
        #prod
        kubectl apply -f integration-chart/charts/php/static/pvc.yml -n naren-prod
        kubectl apply -f integration-chart/charts/php/static/secret.yml -n naren-prod


