filename=$1
outputname=$2
N=$(wc -l < "$filename")
awk -v N=$N -F, '???' $filename > $outputname