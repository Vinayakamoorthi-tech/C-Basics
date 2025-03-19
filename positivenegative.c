#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char c;
char w[100];
char d[1000];
scanf("%c",&c);
scanf("%s",w);
scanf("%[^\n]",&d);
printf("%c\n", c);
printf("%s\n", w);
printf("%s", d);
     return 0;
}
