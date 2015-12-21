#include<stdio.h>
#include<iostream>
 
using namespace std  ;
void reverse(char *str ) { 
 char *end = str; 
 char tmp; 
 if (str) { 
  while(*end ) { 
  		++end ; 
  	}
  	--end ; 
  	while(str<end) {
  	 tmp = *str  ; 
  	 *str++ = *end; 
  	 *end-- = tmp ; 
  	 }
  
  }
  
}

int main() { 
    char str[]= "Vikas" ;
      
    
    printf("Printing the string %s" , str);
	
	reverse(str);
	
	cout<<str;
	
	
	
	return 0; 
}	
	