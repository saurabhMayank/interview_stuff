#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    struct node
      {
         int data;
         struct node *next;
      };

      void start(struct node **head_ref,int data1)
        {

          struct node* new_node = (struct node*) malloc (sizeof(struct node));
          new_node->data = data1;
          new_node->next = *(head_ref);
          *(head_ref) = new_node;
        }
        void get_nth_node_from_the_end(struct node *head_ref,int x)
          {
                struct node *t =head_ref;
                int i=0;  //nth node from the end means len-n node from the start
                struct node *p =head_ref;
                int j=0;
                while(t!=NULL)
                 {

                     t=t->next;
                     i++;
                 }
                 int index=(i+1)-x;

                 while(j!=index-1)
                 {
                     p=p->next;
                     j++;

                 }
            cout << p->data << endl;  
          }
         int main()

        {

          int i;
          struct node* head =NULL;
           start(&head,4);
           start(&head,2);
           start(&head,3);
           start(&head,6);
           start(&head,4);
           start(&head,1);
           start(&head,9);
           cout << "Please enter the node number from the end: ";
           cin >> i;
           get_nth_node_from_the_end(head,i);
               
            return 0;
       }