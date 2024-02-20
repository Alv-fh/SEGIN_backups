#!/bin/sh
var=$(date "+%Y-%m-%d")
var2=$(date "+%H-%M-%S")
rutainc=/home/vagrant/backups
if [ ! -d /home /vagrant/backups ]
then
      mkdir /home/vagrant/backups
fi
tar -cvf $rutainc/copia_incremental'_'$var'_'$var2".tar.gz" -g $rutainc/inc.st --absolute-names $rutainc/inc.st /var/www/html/*
