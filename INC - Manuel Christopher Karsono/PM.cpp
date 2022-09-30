#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
		
		long long int l;
		long long int s;
		long long int g;
		scanf("%lld %lld %lld",&l,&s,&g);
		getchar();
		
		long long int sum = l * s;
		long long int kurang = (l-2) * s;
		long long int lebih = sum + kurang;
		

		if((l*s) > g){
		 printf("NO");	
		}
		else
		{
		g = g - lebih;
        if(g % 2 != 0)
		{
        long long int bagi = g/2;	
        g = g-bagi;
		long long int temp = g - bagi; 
		       	
        	if ((s-1)*(l-2) >= temp)
		    {
		    	printf("YES");
			}
			else
			{
				printf("NO");
			}
		}
	}
	else
	printf("YES");
	
		
	return 0;
}
