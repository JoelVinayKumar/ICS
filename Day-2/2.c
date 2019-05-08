#include <string.h> 
#include <stdio.h>

int hexToDec(char hex[]) 
{ 
	int len = strlen(hex); 
	int b = 1; 
	int dec = 0; 
	
	for (int i=len-1; i>=0; i--) 
	{ 
		if (hex[i]>='0' && hex[i]<='9') 
		{ 
			dec += (hex[i]-48)*b; 	
			b = b*16; 
		} 
		else if (hex[i]>='A' && hex[i]<='F') 
		{ 
			dec += (hex[i]-55)*b; 
			b = b*16; 
		} 
	} 
	return dec; 
} 
int main(int argc, char *argv[]) 
{ 
	char hexNum[100];
    printf("Enter the hex number: ");
    scanf("%s",&hexNum);	 
	printf("%d\n",hexToDec(hexNum));
	return 0; 
} 
