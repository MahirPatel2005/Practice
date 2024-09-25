#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int len= sizeof(arr)/sizeof(arr[0]);
	int evennum=0;
	int odd=0;
	int i;
	for( i=0;i<len;i++){
		if(arr[i]%2==0){
			evennum++;
			
		}else{
			odd++;
		}
	}
	printf("even: %d",evennum);
	printf(",odd: %d",odd);
	return 0;
}