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

          struct node* new_node = (struct node*)malloc (sizeof(struct node));
          new_node->data = data1;
          new_node->next = *(head_ref);
          *(head_ref)=new_node;
      }

       void printList(struct node* t)
          {
            while (t != NULL)
            {
              
              cout << t->data << "";
              t = t->next;
            }
            cout << endl;
          }

          int main()
        {

           struct node* head= NULL;

           start(&head,1);
           start(&head,2);
           start(&head,2);
           start(&head,3);
           start(&head,4);
           start(&head,5);
           start(&head,5);
           printList(head);



           return 0;

        }