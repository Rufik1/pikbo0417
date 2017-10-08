#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
float temp,Kelvin,Faringeit,Celsiy;
char znac;
printf("tconvert & ");
scanf("%f%c",&temp,&znac);
if (znac=='C')
{
if ((temp>=-273.15)&&(temp<=5526.85))
{
Kelvin= temp+273.15;
Faringeit=temp*1.8+32;
printf("%6.2f K \n", Kelvin);
printf("%6.2f F \n", Faringeit);
}
else
{
printf("there is no such temperature");
return 0;
}
}
else
if (znac=='K')
{
if ((temp>=0)&&(temp<=5800))
{
Celsiy=temp-273.15;
Faringeit=9*(temp-273.15)/5+32;
printf("%6.2f C \n", Celsiy);
printf("%6.2f F \n", Faringeit);
}
else
{
printf("there is no such temperature");
return 0;
}
}
else
if (znac=='F')
{
if ((temp>=-459.67)&&(temp<=9980.33))
{
Kelvin=5*(temp - 32)/9 + 273.15;
Celsiy=5*(temp - 32)/9;
printf("%6.2f K \n", Kelvin);
printf("%6.2f C \n", Celsiy);
}
else
{
printf("there is no such temperature");
return 0;
}
}
else
{
if ((temp>=-273.15)&&(temp<=5526.85))
{
Kelvin= temp+273.15;
Faringeit=temp*1.8+32;
printf("%6.2f C\n",temp);
printf("%6.2f K \n", Kelvin);
printf("%6.2f F \n\n", Faringeit);
}
else
printf("there is no such temperature\n");
if ((temp>=0)&&(temp<=5800))
{
Celsiy=temp-273.15;
Faringeit=9*(temp-273.15)/5+32;
printf("%6.2f K \n",temp);
printf("%6.2f C \n", Celsiy);
printf("%6.2f F \n\n", Faringeit);
}
else
printf("there is no such temperature\n");
if ((temp>=-459.67)&&(temp<=9980.33))
{
Kelvin=5*(temp - 32)/9 + 273.15;
Celsiy=5*(temp - 32)/9;
printf("%6.2f F \n",temp);
printf("%6.2f K \n", Kelvin);
printf("%6.2f C \n", Celsiy);
}
else
printf("there is no such temperature\n");
}
return 0;
}
