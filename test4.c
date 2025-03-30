#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void putinST(int size, int* ST);
void insert(int size, int* T);


int main(){
	int Z=5000000,T[5000000]={};
	int ST[Z];
	int i;
	int med = 0;

	insert(Z, T);


	putinST(Z, ST);
	printf("Done.\n");
	//for(i=0;i<Z;i++){ printf("\n%d",ST[i]); }
	return 0;
}






typedef struct node{
	int key;
	int iteration;
	struct node* parent;
	struct node* left;
	struct node* right;
}node;

node* root;

void insert(int size, int* T){
	int i, key;
	bool found = false;
	root= (node*)malloc(sizeof(node));
	root->key = T[0]; root->iteration=0; root->left=NULL; root->right=NULL; root->parent=NULL;// First node.
	node* temp= root;


	for(i=0;i<size;i++){
		key = T[i];//holds every number in T.
		found = false;
		temp= root;

		while(!found){//inserting our key in the tree.
			if(key > temp->key){
				if(temp->right!=NULL) temp = temp->right;
				else {
					node* ml= (node*)malloc(sizeof(node));
					ml->key=key; ml->iteration=1; ml->left=NULL; ml->right=NULL;ml->parent=temp;
                                        temp->right=ml;
					found=true;
				}
			}
			else if (key < temp->key){
                                if(temp->left!=NULL) temp = temp->left;
                                else {
                                        node* ml= (node*)malloc(sizeof(node));
                                	ml->key=key; ml->iteration=1; ml->left=NULL; ml->right=NULL;ml->parent=temp;
					temp->left=ml;
					found=true;
                                }
                        }
			else if(key == temp->key){temp->iteration++; found=true;}
		}
	}
}








void putinST(int size, int* ST){
	int i, key, x=0;
	bool found = false;
	node* temp2;
	node* temp;


	for(i=0;i<size;i++){
		temp = root;
		found = false;

		while(!found){

			if(temp->left!=NULL) temp=temp->left;
			else if(temp->iteration==0 && temp->right!=NULL) temp=temp->right;
			else if (temp->iteration!=0){
				ST[i]=temp->key;

				temp->iteration--;


				if(temp->left==NULL && temp->right==NULL && temp->iteration==0){ //sonless node.
        	                        temp2=temp;
	                                if (temp->parent!=NULL)temp=temp->parent;

                                	if(temp->right==temp2) temp->right=NULL;
                        	        else if(temp->left==temp2) temp->left=NULL;
        	                        free(temp2);
                	                x++;
					found = true;
	                        }
				else found=true;
			}
			if(temp->left==NULL && temp->right==NULL && temp->iteration==0){ //sonless node.
				temp2=temp;
				if (temp->parent!=NULL)temp=temp->parent;
				if(temp->right==temp2) temp->right=NULL;
				else if(temp->left==temp2) temp->left=NULL;
				free(temp2);
				x++;
				found = true;
			}
		}
	}

}

