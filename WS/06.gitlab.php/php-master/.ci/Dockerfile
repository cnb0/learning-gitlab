FROM linnovate/web:16.04

RUN a2enmod rewrite ssl headers

COPY ./src /var/www/html

COPY .ci/apache2.conf /etc/apache2/apache2.conf
