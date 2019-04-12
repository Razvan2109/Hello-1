#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char *nume;
nume = malloc(sizeof(char));
fgets(nume, 256, stdin);
if ((strlen(nume) > 0) && (nume[strlen (nume) - 1] == '\n'))
        nume[strlen (nume) - 1] = '\0';
printf("Buna, %s!\n",nume);
}
