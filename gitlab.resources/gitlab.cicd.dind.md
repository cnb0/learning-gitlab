
Enable Docker commands in your CI/CD jobs
Use the shell executor
Use the Docker executor with the Docker image (Docker-in-Docker)
        Limitations of Docker-in-Docker
        Docker-in-Docker with TLS enabled
        Docker-in-Docker with TLS enabled in Kubernetes
        Docker-in-Docker with TLS disabled
Use Docker socket binding
    Enable registry mirror for docker:dind service
        The service in the .gitlab-ci.yml file
        The service in the GitLab Runner configuration file
        The Docker executor in the GitLab Runner configuration file
        The Kubernetes executor in the GitLab Runner configuration file

Authenticate with registry in Docker-in-Docker
    Option 1: Run docker login
    Option 2: Mount ~/.docker/config.json on each job
    Docker
    Kubernetes
    Option 3: Use DOCKER_AUTH_CONFIG

Make Docker-in-Docker builds faster with Docker layer caching
    How Docker caching works
    Docker caching example
Use the OverlayFS driver
Requirements
    Use the OverlayFS driver per project
    Use the OverlayFS driver for every project
    Use the GitLab Container Registry
Troubleshooting
    docker: Cannot connect to the Docker daemon at tcp://docker:2375. Is the docker daemon running?
    Docker no such host error