
#include <stdio.h>
int main(void) 
{
 int a[5][5],i,j,n,sum=0,sum1=0;
 scanf("%d\n",&n);
 for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     scanf("%d\t",&a[i][j]);
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
      if(i==j)
      sum+=a[i][j];
      if(j==(n-i+1))
       sum1+=a[i][j];
   }
 }
   printf("%d %d %d\n",sum,sum1,sum*sum1);    
	return 0;
}
