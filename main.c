/* There are 7 floors in BH3 and only 2 lifts. Initially Lift A is at the ground floor and Lift B at the top floor. Whenever someone calls the lift from N th floor, the lift closest to that floor comes to pick him up. If both the lifts are at equidistant from the N th floor, them the lift from the lower floor comes up.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=0,B=7,t,f,adiff,bdiff;
    printf("enter test cases : ");
    scanf("%d",&t);
    while(t--)
    {
      printf("\nenter floor : ");
      scanf("%d",&f);
       adiff = A-f;
       bdiff = B-f;
       if(adiff<0)
        adiff=abs(adiff);  //abs() func.n is used to get +ve integer from a negative interger !!
       if(bdiff<0)
        bdiff=abs(bdiff);
       if(adiff<bdiff)
        {
        printf("A");
        A=f;
        }
        else
            if(bdiff<adiff){
            printf("B");
        B=f;
        }
        else
        {
            if(A<B)
            {printf("A");
             A=f;
            }
            else
            {
                printf("B");
                B=f;
            }
        }
    }
    return 0;
}
