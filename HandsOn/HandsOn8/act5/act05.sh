#!/bin/bash

filename=$1

outputname=$2

N=$(wc -l < "$filename")

awk -v N=$N -F, '\

BEGIN{

    line = 0

}\

{

if (line == 0) { 

    for(i=1;i<=NF;i++){
        headers[i] = $i
    }

  } else {
      for(i=1;i<=NF;i++){
        printf("%s:%s\n",headers[i],$i)
    }
  }

  line++

}' $filename > $outputname
#headers[0]="#"
#if ($3=="Dragon" || $4=="Dragon") {