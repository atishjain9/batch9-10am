# include <stdio.h>
main()
{
    int qty;
    float rate,amt,discount,finalamt;
    qty=rate=amt=discount=finalamt=0;

    printf("Welcome to Fresh Fruit Mart:");
    printf("\n--------------------------");

    printf("\nPlease Enter the Quantity you Purchased:");
    scanf("%d",&qty);

    printf("Enter Rate:");
    scanf("%f",&rate);

    amt=rate*qty;
    discount=amt*10/100;
    finalamt=amt-discount;

    printf("\nDiscount is:%.0f",discount);
    printf("\nFinal Bill Amount is:%.2f",finalamt);

    printf("\n");
}
