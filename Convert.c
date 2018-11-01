// miles to kilometers converter
// A-Nony-Mus
// 1/18/2012

#include <stdio.h>                            /* This allows use of printf and scanf */

int
main(void)
{
	double miles,   /*Declare the miles variable */
    kms,      /* Declare the kilometers variable */
    KMS_PER_MILE;
    char converter;
    
	printf("miles or kilometers? ");
	scanf("%c", &converter);
    
	if(converter = 1)
    {
        KMS_PER_MILE = 1.609;
    }
	else(converter = 2);
    {
        KMS_PER_MILE = 0.621371192;
    }
    
	/* Receive the users input of miles and assign it to the miles variable */
	printf("Enter the amount of miles you would like to convert: ");
	scanf("%lf", &miles);
    
	/* Calculate the kilometers based on the miles and assign it to the kms variable */
	kms =  KMS_PER_MILE * miles;
    
	/* Display the result */
	printf("that is %f kilometers.\n", kms);
    
	return(0);
}
