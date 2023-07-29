#include<stdio.h>
#include<stdlib.h>
//Declaration and Initialization of binarytree
struct bt{
  int data;
  struct bt *lt;
  struct bt *rt;
};
//Implimentation -Insert
struct bt * insert(struct bt*q,int val,char dir){
  struct bt *tmp;
  tmp=(struct bt*)malloc(sizeof(struct bt));
  tmp->data=val;
  tmp->lt=tmp->rt=NULL;
  if (dir=='l')
    q->lt=tmp;
  else
  q->rt=tmp;
}
int main(){
  struct bt *root=(struct bt *)malloc(sizeof(struct bt));
  root->data=-1;
  insert(root,3,'l');
  insert(root,4,'r');
  insert(root->lt,6,'l');
  insert(root->rt,7,'l');
  printf("Printing elements in inorder \n");
  inorder(root);
  printf("\n");
  printf("Printing elements in postorder\n");
  postorder(root);
  printf("\n");
  printf("Printing elements in preorder\n");
  preorder(root);
  printf("\n");
  return 0;
}
void preorder(struct bt *q){
  if(q!=NULL){
    printf("%d ",q->data);
    preorder(q->lt);
    preorder(q->rt);
  }
  
}
void postorder(struct bt *q){
  if(q!=NULL){
    postorder(q->lt);
    postorder(q->rt);
    printf("%d ",q->data);
  }
  
  
}
int inorder(struct bt*q){
  if(q!=NULL){
    inorder(q->lt);
    printf("%d ",q->data);
    inorder(q->rt);
  }
  else
  return;
}