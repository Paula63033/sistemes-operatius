#!/bin/bash

check_proc(){


if [ $1 ]; then
        echo "[$1] $(date)"
        
else
        echo "[$$] $(date)"
fi

}

check_proc

check_proc "1"
