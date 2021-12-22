awk -F, '$2 ~/^[M]/ && (/Fire/ || /Fight/)\
{ print $2 " types[" $3 " , " $4 "] " }' pokedex.csv