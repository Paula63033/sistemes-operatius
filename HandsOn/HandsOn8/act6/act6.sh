#!/bin/bash

cat series.db  | awk 'BEGIN{FS=":"}{print $1}' | sort | uniq > series.txt

while read serie; do
echo "+  "$serie
    cat series.db | grep $serie | awk 'BEGIN{FS=":"}{print $2}' | sort | uniq > personatges.txt
    while read personatges; do
    echo " -  "$personatges
        cat series.db | grep $personatges | awk 'BEGIN{FS=":"}{print $3}' | sort | uniq > dialeg.txt
        while read dialeg; do
        echo "  *  "$dialeg
        done < dialeg.txt
    done < personatges.txt
done < series.txt