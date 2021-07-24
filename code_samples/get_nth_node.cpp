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


        void get_nth_node(struct node *head_ref,int n)
          {
                
                struct node *t =head_ref;
                int i=0;

                while(i!=n-1)
                {
                    t=t->next;
                    i++;
                }
                cout << t->data << endl;             
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
           cout << "Please enter the node number: ";
           cin >> i;
           get_nth_node(head,i);
               
            return 0;
       }