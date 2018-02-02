#include <stdio.h>
int main(void) 
{
 int a[5][5],i,j,n,pro=1,pro1=1;
 scanf("%d\n",&n);
 for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     scanf("%d\t",&a[i][j]);
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
      if(i==j)
      pro*=a[i][j];
      if(j==(n-i+1))
       pro1*=a[i][j];
   }
 }
   printf(" %d\n",pro+pro1);    
	return 0;
}
