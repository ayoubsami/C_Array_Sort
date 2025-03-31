#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
	int N,i, x=0;
	int Z=10,T[10]={3, -34, 43, 0, 83, -64, 4556, 99999 ,644, 99};

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
	printf("Done.\n");
}
