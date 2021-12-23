#!/bin/bash
#hem intentat fer-lo en bash. NO awk...
if [ -e "mem_lliure.lst" ]; then
    cat /proc/meminfo > "mem_lliure.lst"  
    if [ "$#" -eq "1" ]; then
        #si li hem passat 1 parametre...
         sleep $1
         echo "" > "mem_lliure.lst"
    else
    sleep 60
    echo "" > "mem_lliure.lst"
    fi 
else
     touch "mem_lliure.lst"
     cat /proc/meminfo > "mem_lliure.lst"   
    if [ "$#" -eq "1" ]; then
        #si li hem passat 1 parametre...
         sleep $1
         echo "" > "mem_lliure.lst"
    else
    sleep 60
    echo "" > "mem_lliure.lst"
    fi
fi
