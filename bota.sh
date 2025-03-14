#!/bin/bash
#
echo "Executando o make..."
make

./a.out

echo "Entrando plt"
cd plt

echo "Gerando grraficos"

gnuplot ld.plt
gnuplot fase.plt

echo "Fim"
