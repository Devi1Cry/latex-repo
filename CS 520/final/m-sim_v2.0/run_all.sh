#!/bin/bash

BENCHMARKS="bzip2 equake gcc gzip mcf swim"

for bench in $BENCHMARKS
do
	./sim-outorder -fastfwd 10000000 -max:inst 10000000 $bench.arg >&$bench.out
done

echo "Simulations complete!"
