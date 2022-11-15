#include<stdio.h>
#include<string.h>

int checkRoman(char r)
{
	if(r == 'I' || r ==  'i'){
		return 1;
	}
	
	if(r == 'V' || r == 'v'){
		return 5;
	}
	
	if(r == 'L' || r == 'l'){
		return 50;
	}
	
	if(r == 'C' || r == 'c'){
		return 100;
	}
	
	if(r == 'D' || r == 'd'){
		return 500;
	}
	
	if(r == 'M' || r == 'm'){
		return 1000;
	}
}
void main(){
	
	char roman[20];
	printf("Enter Roman number : ");
	gets(roman);
		
	int currentValue;
	int nextValue;
	int value = 0;
	int i;
	for(i = 0; i< strlen(roman); i++)
	{
		currentValue = checkRoman(roman[i]);
		nextValue = checkRoman(roman[i+1]);
		
		if(currentValue >= nextValue)
		{
			value += currentValue;
		}
		else
		value -= currentValue;
	}	
	
	printf("Integer value = %d", value);
}
