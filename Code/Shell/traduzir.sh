#!bin/sh/
g++ ../C++/arrume.cpp -std=c++11 -Wall -w -O2 -o ../Exec/arrume
g++ ../C++/tabule.cpp -std=c++11 -Wall -w -O2 -o ../Exec/tabule
g++ ../C++/veja.cpp -std=c++11 -Wall -w -O2 -o ../Exec/veja
gcc ../C/arrume_depois_veja.c -o ../Exec/arrdepvej
gcc ../C/ler.c -o ../Exec/ler
gcc ../C/rodar_tabulacao.c -o ../Exec/runtab
gcc ../C/tabule_depois_veja.c -o ../Exec/tabdepvej
../Exec/arrdepvej
cd ../Python
python traduza.py < ../../Text/in > ../../Text/out
mv ../../Text/in ../../Text/original
mv ../../Text/out ../../Text/in
cd ../Shell
../Exec/tabdepvej
../Exec/runtab
