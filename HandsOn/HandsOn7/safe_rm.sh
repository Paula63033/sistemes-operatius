#!/bin/bash
if [ -e $1 ]; then
     mkdir -p $HOME/safe_rm_recycle
     cp $1 ~/safe_rm_recycle
     rm $1
else
     echo "error"
fi
