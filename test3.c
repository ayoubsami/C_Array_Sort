#include <stdio.h>
int main(){int i,j,x,n,Z=9,T[9]={43, -43, -432, -24, 24, 4, 0, -234, 2};



		for(i=1;i<Z;i++){
			for(j=0;j<i;j++){
                		if(T[i]<T[j]){

					x=T[i];

					break;
				}

        		}

			for(n=i;n>j;n--){T[n]=T[n-1];}




			T[j]=x;

        	}

	printf("\n");
        for(n=0;n<Z;n++){printf("  T[%d]> %d", n+1,T[n]);}
}
/* with 1.000.000 test:

real	22m36.610s
user	22m32.650s
sys	0m0.453s
*/
