#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	
	int n;
	int bates = 2;
	int count1,count2;
    scanf("%d",&n);
	getchar();
	char inpt[n+1];
	
	for (int k=0;k<1;k++)
	{
		for(int i = 0; i < 1;i++)
	{
	scanf("%[^\n]",inpt);
        getchar();
    
	for(int i = 0; i < strlen(inpt); i++) {  
        count1 = 1;  
        for(int j = i+1; j < strlen(inpt); j++) {  
            if(inpt[i] == inpt[j] && inpt[i] != ' ') {  
                count1++;    
                inpt[j] = '0';  
            }  
        }      
    } 	
	}   
	for(int i = 0; i < 1;i++)
	{
	scanf("%[^\n]",inpt);
        getchar();
    
	for(int i = 0; i < strlen(inpt); i++) {  
        count2 = 1;  
        for(int j = i+1; j < strlen(inpt); j++) {  
            if(inpt[i] == inpt[j] && inpt[i] != ' ') {  
                count2++;    
                inpt[j] = '0';  
            }  
        }      
    } 	
	}
	
    
      
    if(count1 > count2)  
            printf("%d\n", count1); 
    else if(count2 > count1);
    printf("%d\n",count2);
	}
	
		
    return 0;  
} 
