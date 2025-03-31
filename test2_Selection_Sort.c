#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
	int N,i,MIN, x=0,y;
	int Z=10,T[10]={3, -34, 43, 0, 83, -64, 4556, 99999 ,644, 99};

	MIN=T[0];

	bool Sorted=false;


        while(!Sorted){
		y=x;
		for(x;x<Z;x++){
			if(T[x]<=MIN){
				MIN=T[x];
				N=x;
			}
		}
		x=y;

		T[N]=T[x]; T[x]=MIN; MIN=T[x+1];


		x++;

		if(x>Z-1)Sorted=true;
        }
        printf("Done.\n");
}
