#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

int main(void)
{
int r = 0, c = 0;
time_t t;

srand((unsigned int) time(&t));

char keygen[2773];  // Increased size to accommodate the final character and null terminator
int index = 0;

while (c < 2772)
{
r = rand() % 128;
if ((c + r) > 2772)
break;
c = c + r;
keygen[index] = (char) r;
index++;
}
keygen[index] = (char) (2772 - c);
keygen[index + 1] = '\0';  // Add null terminator at the end of the string

printf("%s\n", keygen);

return (0);
}
