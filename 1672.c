#include <stdio.h>
int main(){
	int i,n,m,j,sum,M[50][50],x;
	printf("donner le taille du tableau T: " ) ;
	scanf("%d" , &n ) ;
	printf("donner le taille du tableau M: " ) ;
	scanf("%d" , &m ) ;
	
	
	for (i=0;i<n ;i++){
		
        for (j=0;j<m ;j++){
		printf ("donner la case de M %d  :",M[i][j]);
		scanf ("%d",&M[i][j]);
	      }
	}
	
	for (i=0;i<n;i++)
    {
		printf("\t");
		for (j=0;j<m;j++){
	     printf("%d ",M[i][j]);
	 }}
	sum=0;
	for (i=0;i<n;i++)
    {
		x=0;
		for (j=0;j<m;j++){
	        x=x+M[i][j];}
	       if (x>sum)
	        sum=x;
	}
	
	printf("\n LA SOMME EST : %d \n", sum);
	
return 0;
	}
