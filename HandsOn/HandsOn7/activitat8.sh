#!/bin/bash
declare -a array1
N=$1

complete=0

fail=0

echo "Hi, I am the factory [$$]..."


for ((i=0;i<N;i++))

do

        # Donar a p.sh permissos d'execució abans d'executar.

        ( ./p.sh ) &

        sleep 1

        array1[i]+="$!"

done

echo ${array1[*]}

x=${#array1[@]}

for ((i=0;i<x;i++))

do
        echo "test"
        if wait $p; then

        (( complete++ ))

        else

        (( fail++ ))

        fi

done

echo "$complete processes completed successfully."

echo "$fail processes failed to completed."

echo "Done."