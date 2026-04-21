#!/bin/bash

contador=0
errores=0
nombre_codigo=$1
gcc $nombre_codigo -o out
mkdir -p outputs

for input in inputs/*.txt
do
 contador=$((contador + 1))
 ./out < $input > outputs/$contador.txt
 diff outputs/${contador}.txt expected/expected${contador}cod1.txt
 if [ $? -ne 0 ]; then
  errores=$((errores+1))
 fi
done

caso_exitoso=$((contador - errores))
echo "$caso_exitoso casos exitosos de $contador"
