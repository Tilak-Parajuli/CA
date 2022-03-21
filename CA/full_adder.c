#include<stdio.h>
#include<conio.h>
typedef char bit;
bit cout=0;
bit fulladd(bit A,bit B,bit Cin){
	cout=((A&B)||(Cin&&B));
	return (A^B)^Cin;	
}
int main(){
	int i,j,k,result;
	printf("A	B	Cin	|S	Cout\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
			result=fulladd(i,j,k);
			printf("%d	%d	%d	|",i,j,k);
			printf("%d	%d\n",result,cout);
			}
		}
	}
	return 0;
}
