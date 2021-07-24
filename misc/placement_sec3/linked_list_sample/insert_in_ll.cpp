// #include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
#include "insert_in_ll.h"
using namespace std;

struct node
       {
          int data;
          struct node* next;
       };

void insert_at_start(struct node **head_ref,int new_data)
      {
          struct node* new_node = (struct node*)malloc (sizeof(struct node));
          new_node-> data = new_data;
          new_node -> next = (*head_ref);
          (*head_ref)=new_node;
      }  
void insert_at_end(struct node **head_ref,int new_data)
      {   
          struct node* new_node = (struct node*)malloc (sizeof(struct node));
          struct node* t = (*head_ref);        
          while( t->next != NULL)
           {
               t = t->next;
           }
           t->next =  new_node;
           new_node -> data = new_data;
           new_node ->next = NULL;
      } 
void insert_after_a_given_node(struct node **head_ref,int new_data,int pos)
     {    
          struct node* new_node = (struct node*)malloc (sizeof(struct node));
          struct node* t = (*head_ref);

        //   while (t!= NULL && t->data!= des_data)
        //       {
        //           t = t->next;
        //       }
        for(int i=0;i<pos-1;i++)
              {
                t= t->next;
              }

         new_node -> data = new_data;      
         new_node->next = t->next;
         t->next=new_node;
     }  

void print_ll(struct node *t)
      {    
          while(t != NULL)
           {
            cout << t->data << endl;
              t = t->next;
           }
      }              

//  int main()
//       {    
//           struct node* head = NULL;
//           insert_at_start(&head,8);
//           insert_at_start(&head,7);
//           insert_at_start(&head,4);
//           insert_at_start(&head,3);
//           insert_at_start(&head,2);
//           insert_at_start(&head,1);
//           insert_at_end(&head,9);
//           insert_after_a_given_node(&head,6,3);
//           print_ll(head);
//           return 0;
//       }          