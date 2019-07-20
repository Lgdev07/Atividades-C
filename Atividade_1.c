#include <stdio.h>
#include <string.h>
int main ()
{
    const char* ra = "19434875";
    int vetorA[strlen(ra)];
    int i;
 
for (i=0;i<strlen(ra);i++)
{
    vetorA[i] = ra[i];
}

i=0;

while (i < strlen(ra)) {
    printf("\n%c", vetorA[i]);
    i++;
}

return (0);
}