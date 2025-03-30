#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){int N,i,MIN, x=0,y,Z=9,T[9]={3, -43, 42, -24, 24, 4, 0, -234, 2};bool Sorted=false;

	MIN=T[0];




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

        for(i=0;i<Z;i++){
                printf("T[%d]= %d\n", i+1,T[i]);
        }
}
