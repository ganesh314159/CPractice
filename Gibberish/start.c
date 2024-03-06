#include<stdio.h>
#include<math.h>
#define h 6.626E-34
#define c 3E+8

main()
{ float energy, wavelength;
printf("Enter the value of energy in joules\n");
scanf("%f",&energy);
wavelength=((h*c)/energy);
printf("Wavelength corresponding to energy entered is %f",wavelength);

return 0;
}