awk -F, ' \
{ 
    if ($3=="Dragon" || $4=="Dragon") {
        print "entro"
        n1++
    }
       
    else if ($3=="Fire" || $4=="Fire") 
        n2++
    else
        n3++
} 
END {
print "Dragon: ", n1
print "Fire: ", n2
print "Others: ", n3
}' pokedex.csv