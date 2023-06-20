#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
unsigned long int i;
unsigned long int prv = 1;
unsigned long int aft = 2;
unsigned long int l = 1000000000;
unsigned long int prv1;
unsigned long int prv2;
unsigned long int aft1;
unsigned long int aft2;
printf("%lu", prv);
for (i = 1; i < 91; i++)
{
printf(", %lu", aft);
aft += prv;
prv = aft - prv;
}
prv1 = (prv / l);
prv = (prv % l);
aft1 = (aft / l);
aft2 = (aft % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
aft1 = aft1 + prv1;
prv1 = aft1 - prv1;
aft2 = aft2 + prv2;
prv2 = aft2 - prv2;
}
printf("\n");
return (0);
}
