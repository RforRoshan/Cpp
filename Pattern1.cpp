/*Print a pattern of numbers from 1 to N as shown below. Each of the numbers is separated by a single space.


____________________________________________________
Sample Input 1
5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

_____________________________________________________
Sample Input 2
7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 


_____________________________________________________

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int n,i,j,k,l;
    int t=0;
    int temp=-1;
    printf("Enter a one digit number = ");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int i=1;i<=n;i++)
    {
        for(j=0;j<i-1;j++){
            printf("%d ",n-j);
        }
        for(k=0;k<2*n-1-2*j;k++){
            printf("%d ",n-j);
        }
        for(l=0;l<i-1;l++){
            printf("%d ",n-j+1+l);
        }
        printf("\n");
    }
    for(int i=0;i<n-1;i++)
    {
        for(j=0;j<n-2-i;j++){
            printf("%d ",n-j);
        }
        for(k=0;k<2*n-2*j-1;k++){
            printf("%d ",i+2);
        }
        for(l=0;l<n-2-i;l++){
            printf("%d ",i+3+l);
        }
        printf("\n");
    }
    
    return 0;
}
