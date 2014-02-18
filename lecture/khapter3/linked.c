#include <stdio.h>
#include <stdlib.h>


typedef struct node {
   int data;
   struct node *next;
} Node, *NodePtr;


unsigned int ll_length(NodePtr);
void ll_append(int, NodePtr);
void ll_insert(int, unsigned int, NodePtr);


int main() {
   NodePtr head = NULL;

   printf("There are %d items in the linked list.\n",
          ll_length(head));

   return 0;
}


unsigned int ll_length(NodePtr head) {
   unsigned int count = 0;
   NodePtr curr = head;

   while(curr != NULL) {
      count++;
      curr = curr -> next;
   }

   return count;
}


void ll_append(int data, NodePtr head) {
   NodePtr curr = head;
   NodePtr new = (NodePtr)malloc(sizeof(Node));

   new -> data = data;
   new -> next = NULL;

   if(curr == NULL)
      head = new;
   else {
      while(curr -> next != NULL)
         curr = curr -> next;
      curr -> next = new;
   }
}


// This function is incomplete!!
void ll_insert(int data, unsigned int index, NodePtr head) {
   NodePtr curr = head;
   unsigned int count = 0;
   NodePtr new = (NodePtr)malloc(sizeof(Node));

   new -> data = data;
   new -> next = NULL;

   while(count < index) {
      curr = curr -> next;
      count++;
   }
   if(index == count) {
      new -> next = curr;
      curr = new;
   }
}
