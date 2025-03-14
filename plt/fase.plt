set terminal png size 1000, 1000
set output 'fase.png'

set xlabel "Romeu"
set ylabel "Julieta"

#set xrange [-10:10]
#set yrange [-10:10]

set key top left 


plot "../dat/ld.dat" using 2:3 with lines lw 2 title "amor"

unset output