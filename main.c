#include <stdio.h>

void main()
{
int vetEd_7085[7];
int D;

for(D=0; D<7; D++)
printf("Endereço do veter é %d: %d \n", D+1, &vetEd_7085[D]);

    return 0;
}
