#!/bin/bash

contador=0
gcc EjercicioExtra.c -o ejercicio
mkdir -p output

for input in input/*
do
 contador=$((contador + 1))
 ./ejercicio < input/${contador} > output/${contador}
 diff output/${contador} expected/${contador}
 resultado=$?
 if [ $resultado -ne 0 ]; then
    echo "Prueba ${contador} con error"
 elif [ $resultado -eq 0 ]; then
    echo "Prueba ${contador} funcionando correctamente"
 fi
done