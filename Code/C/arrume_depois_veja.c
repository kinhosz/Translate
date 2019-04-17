#include <stdio.h>
#include <stdlib.h>

int main(){

    system("../Exec/./arrume < ../../Text/in > ../../Text/out");
    system("../Exec/./veja < ../../Text/out > ../../Text/in");
    return 0;
}
