#!/bin/bash

x=$(pidof -x $(basename $1))
pid2

if [ $x ]; then

    echo "[ERROR]: Aquest script ja s’esta executant amb pid $x"

    pid2=$(pidof -x $(basename $1))

    echo "[INFO]: Eliminant procés amb pid $x"

    kill -9 $x
    
fi

# @TODO Substituir $name i $pid per les variables que continguin la informació.

name=$(basename $1)

echo "[INFO]: Executant el script amb nom $name amb el següent $pid2."

./$1
 

# @TODO Fer un recubriment amb el programa $name.