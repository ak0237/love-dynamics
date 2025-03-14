set terminal png size 1000, 1000
set output 'plot.png'

set xlabel "Tempo"
set ylabel "Amor"

set key top left 

plot "../dat/ld.dat" using 1:2 with lines lw 2 title "R", \
"../dat/ld.dat" using 1:3 with lines lw 2 title "J",

unset output