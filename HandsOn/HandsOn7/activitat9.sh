#!/bin/bash 

x=$(pidof -x $(basename $2))

if [ $x ]; then

echo "[ERROR]: Aquest script ja s’esta executant amb pid $x"

else

        if [ $# -lt 2 ]; then
            echo "has dintroduir 2 parametres"
        else
            
         if [ $1 -gt 0 ]; then

          if [ -f $2 ]; then

              chmod +x $2

              echo "Selecciona una operación: " 

                select opt in 1 2 3 salir; 

                do 
                    case $opt in 
                        1) 
                            echo '1'

                                for ((i=0;i<$1;i++))

                                    do

                                    # Donar a p.sh permissos d'execució abans d'executar.

                                    ( ./$2 ) &

                                    sleep 3

                                    pids+=" $!"

                                    echo "Hi, the factory creates: $pids..."

                                    done

                                    for p in $pids; do

                                    if wait $p; then

                                    (( complete++ ))

                                    else

                                    (( fail++ ))

                                    fi

                                    done

                                    echo "$complete processes completed successfully."

                                    echo "$fail processes failed to completed."

                                    echo "Done."
                            
                            ;; 
                        2) 
                            echo '2'
                            rm $2
                            ;; 
                        3) 
                            echo '3'
                            chmod -x $2
                            ls -la
                            ;; 
                        salir) 
                            break 
                            ;; 
                        *) 
                            echo "$REPLY no es una operación válida" 
                            ;; 
                    esac 
                done
          fi
          
            
          else
            echo "el primer argument ha de ser mes gran q 0"
         fi
         
        fi
        

fi