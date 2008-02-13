#!/bin/bash

set -e 

export AXIS2C_HOME=`pwd`/deploy
export WSFC_HOME=`pwd`/deploy

./build/copy_build_files.sh

./autogen.sh
./configure --prefix=`pwd`/deploy --enable-openssl=yes --enable-tests=yes --with-apache2=/usr/local/apache2/include --with-axis2=`pwd`/axis2c/include --enable-sandesha=yes --enable-rampart=yes --enable-savan=yes --with-xmpp
make -j 10
make install
make samples -j 10
