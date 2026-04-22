#!/bin/bash

nombre_codigo=$1
contador=0

gcc $nombre_codigo -o out
mkdir -p outputs

for input in inputs/*
do
 contador=$((contador+1))
 ./out < inputs/caso${contador} > outputs/out${contador}.txt
done

cat outputs/*.txt
