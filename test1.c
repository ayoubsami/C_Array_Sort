#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	int N,i, x=0,Z=7;
	int T[7]={42, -24, 24, 4, 0, -234, 2};
	bool Sorted=false;

	while(!Sorted){
		x=0;
		for(i=0;i<Z-1;i++){
			if(T[i]>T[i+1]){

				N=T[i+1];T[i+1]=T[i];T[i]=N;
				x++;
			}
		}
		if(x==0){Sorted=true;}
	}

	for(i=0;i<Z;i++){
		printf("T[%d]: %d\n", i+1,T[i]);
	}
}
