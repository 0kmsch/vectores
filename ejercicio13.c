#include <stdio.h>

int main(){
	int a[5];

	if(a[0] < a[1] < a[2] < a[3] < a[4]){
		
		puts("Vector con sucesiones monotonas crecientes");
		
	}
	
	else if(a[4] < a[3] < a[2] < a[1] < a[0]){
		
		puts("Vector con sucesiones monotonas decrecientes");
		
	}
	
	
	else{
		
		puts("Vector sin sucesiones monotonas");
		
	}

    return 0;
}