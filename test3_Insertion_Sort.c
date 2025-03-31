#include <stdio.h>


int main(){
	int i,j,x,n, y;
	int Z=10,T[10]={-3, -34, 43, 0, 83, -64, 4556, 99999 ,644, 99};

	for(i=1;i<Z;i++){
		y=0;
		for(j=0;j<i;j++){

            	if(T[i]<T[j]){
            		y++;
					x=T[i];

					break;
				}

    	}
    	if (y!=0){

    		for(n=i;n>j;n--){T[n]=T[n-1];}
			T[j]=x;
    	}

    }
    printf("Done.\n");
}