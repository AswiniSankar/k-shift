/*
5
1
0
1
1
1
2
1 0 1 1 0 1 
*/
#include<stdio.h>
int main()
{
   int a[30],l,n,j,i,c=0,k,b[60],p=0,t;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   scanf("%d",&k);

  for(i=0;i<n;i++)
  {
     for(j=i+1;j<k+i && j<n;j++)
     {
        if((a[i]==a[j]))
          c++;
        
     }
    if(c==k-1)
     {
    for(l=0;l<k;l++)
      b[p++]=1;
      b[p++]=0;
      i++;
     }
     else
             b[p++]=a[i];
   c=0;
  }
 for(i=0;i<p;i++)
  {
    printf("%d ",b[i]);
  }
  printf("\n");
}
