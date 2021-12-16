awk -F, ' \
{ 
    printf("%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s \n", $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13); \
}  \
END {\ 
}' pokedex.csv
#printf("%s%s",$i,(i==NF)?"\n":OFS)
#primer parametre es format, 2n les variables q vols imprimir, igual que C