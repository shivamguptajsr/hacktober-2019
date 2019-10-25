#include <stdio.h>

int main(){
	int n,flag;
	scanf("%d", &n);              			// Reading input from STDIN
	for(int i=2;i<=n;i++)
	{
	    flag=0;
	    for(int j=2;j<=i/2;j++)
	    if(i%j==0)
	    flag=1;
    if(flag==0)
    printf("%d ",i);
	}
	      // Writing output to STDOUT
}
