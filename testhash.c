#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int hashfunct(int key);
void insert(int key, int value);
node* search(int key);
void kdelete(int key);
void freetb();

int main(){
	int i, key, dkey;
	for(i=0;i<=tbSize-1;i++){ T[i]=NULL; }


	insert(1, 4217652);
	insert(11, 9752);
	insert(21, 546);
	insert(3, 42);
	insert(4, 63);
	insert(5, 17652);
	insert(7, 652);
	insert(6, 2);
	insert(8, 62);
	insert(10, 001);
	insert(9, 47652);
	insert(2, 6352);
	insert(12, 427552);
	insert(13, 42174);

	printf("\nEnter the wanted to delete key: ");scanf("%d", &dkey);

	kdelete(dkey);

	printf("\nEnter your key: ");scanf("%d", &key);

	node* foundp = search(key);


	if (foundp != NULL) {printf("\nYour value is: %d\n", foundp->value);}
	else {printf("\nThere is no value with that key.\n");}
	freetb();
}


typedef struct node{
	int key;
	int value;
	struct node* next;
}node;

#define tbSize 10

node* T[tbSize];


int hashfunct(int key){
	return key % tbSize;
}
void insert(int key, int value){
	node* ml=malloc(sizeof(node));
	int index = hashfunct(key);
	ml -> key = key;
	ml -> value = value;
	ml -> next = T[index];
	T[index] = ml;
}



node* search(int key){
	int index = hashfunct(key);
	node * p = T[index];

	while(p!=NULL){
		if (p ->key == key){ return p; }
		else{ p = p -> next;}
	}return NULL;
}



void kdelete(int key){
	int index = hashfunct(key);
        node* p = T[index]; node* p1 = T[index];
	while(p!=NULL){
		if (p->key==key) {
		  if ( T[index]->next==NULL ){ T[index]=NULL; free(p); printf("\nDone."); break; }
  		  if ( T[index]==p ){ T[index]=p->next; free(p); printf("\nDone."); break; }
		  if ( p->next==NULL ){ p1->next=NULL; free(p); printf("\nDone."); break; }
		  else{ p1->next=p->next; free(p); printf("\nDone."); break; }
		}
		else { p1=p; p=p->next; }
	}printf("\nSory, but there is no node with that key.");
}



void freetb(){node* p;node* p1;int i;
	for(i=0;i<tbSize;i++){
		p = T[i];
		while(p!=NULL){
			p1 = p -> next;
			free(p);
			p = p1;
		}
		T[i]=NULL;
	}
}



