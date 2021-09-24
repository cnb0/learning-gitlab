#!/bin/sh
export APP_VERSION="$(head /dev/urandom | tr -dc A-Za-z0-9 | head -c 13 ; echo '')"
export HELM_EXPERIMENTAL_OCI=1

#if build is done wihtout integration repo

if [ -z "$GIT_TAG_VERSION" ]
then
    export CHART_VERSION="1.0"
else
    export CHART_VERSION="$GIT_TAG_VERSION"
fi


# global values
templater ./integration-chart/values.yml >> ./integration-chart/Values.yaml
templater ./integration-chart/chart.yml >> ./integration-chart/Chart.yaml
cat ./integration-chart/Values.yaml

# php
templater ./integration-chart/charts/php/chart.yml >> ./integration-chart/charts/php/Chart.yaml
# python
templater ./integration-chart/charts/python/chart.yml >> ./integration-chart/charts/python/Chart.yaml
#node
templater ./integration-chart/charts/node/chart.yml >> ./integration-chart/charts/node/Chart.yaml

# helm registry login harbor.linnovate.net -u 'robot$test' -p eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpYXQiOjE2MDAzMzY5ODEsImlzcyI6ImhhcmJvci10b2tlbi1kZWZhdWx0SXNzdWVyIiwiaWQiOjEsInBpZCI6MSwiYWNjZXNzIjpbeyJSZXNvdXJjZSI6Ii9wcm9qZWN0LzEvcmVwb3NpdG9yeSIsIkFjdGlvbiI6InB1c2giLCJFZmZlY3QiOiIifV19.Re2QVOnXrUg25J4QBGhWt7MVmNf616T63mlAAaMmU7xd5gIpefGAkAN6-8AWPoeg6SIWSWWwdsKjAtjlOxTsdPhNEpV7m6PsG718iXkZERjc2kZu5FPdbfrF9MA0sgbY_5I3huivU4keQM_d3uT38PO-nS-aLMDypV36QbndRDTJZoaHRmT4i_g45ScJy17epwaM9v-4XFMLN0EcrYrz2MqVHIe0k0tTWRibXQGJjY7-knUvbT0TK5G9yc__ULJ1Rx6x7UWMNb-rR16j6RvCTXbkHg-lQnbSC1Wqn_mEIZ9ko7mJd9zl-8Yhv2THkRvJY8aWMzuEnTWeYSnl8KzOPrNRUJ4NcihOiKURY1BV4gDC_ZNNPd6h176pe6duld8z5PkHce7K_JNtKII1Y9aBxuANFIOSfElrwi7shsqQbJZ9R0vnyCcgw-D3LsBxfjfqc5ufT-miREFL93adBs1RbcMuamZN6MhTCSl82hac4uhxsOgt9Qlc0iYLXhPyR4fzjlrAmmt4r7OpTnVPcaK61z2JRgvbJMWH6ci3-IvbFhWZpYGQ6fFsE9f2FRoPX1RoYd6IUjVE1hP3kgPPHuDmJi_xd0DP0vvRf7pbyZlup6R-MexrKBfPLQnx80NA4NwEXvNKAoT_dopSRsxE0kxPhV1E4mw0BdHldsK4VD06Fo0 --insecure
# helm chart save ./integration-chart harbor.linnovate.net/library/test-deploy-bla:latest
# helm chart push --debug harbor.linnovate.net/library/test-deploy-bla:latest
echo "helm upgrade -i naren -f ./integration-chart/Values.yaml -n $NAMESPACE ./integration-chart"

helm upgrade -i naren-"$ENV" -f ./integration-chart/Values.yaml -n $NAMESPACE ./integration-chart --dry-run 
helm upgrade -i naren-"$ENV" -f ./integration-chart/Values.yaml -n $NAMESPACE ./integration-chart

