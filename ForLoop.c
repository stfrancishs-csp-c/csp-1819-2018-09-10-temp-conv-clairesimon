#include <stdio.h>
// print Fahrenheit-Celsius table //

int main (void)
{
    int fahr = 0;

 //for (fahr = -50; fahr <= 120; fahr = fahr +5) //
    //while (fahr == -50); //init//

    while (fahr <= 300) //end cond//
    {

        printf ("f - %3d c -%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
       fahr += 20; //increment
    }

       // printf ("%3d", fahr);
}