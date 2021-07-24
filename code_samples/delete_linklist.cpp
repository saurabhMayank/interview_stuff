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
          new_node->next=*(head_ref);
          *(head_ref)=new_node;
      }

      void delete_list(struct node* head_ref)
        {

            struct node* t=head_ref;
            

            while(t->next!=NULL)
              {
                
                 head_ref=t->next;
                 
                 free(t);
                 t=head_ref;

              }

        }

      
      
    void printList(struct node* t)
          {
            while (t != NULL)
            {
               cout << t->data << endl;
              t = t->next;
            }
          }

      int main()
        {

           struct node* head= NULL;

           start(&head,8);
           start(&head,1);
           start(&head,4);
           start(&head,2);
           start(&head,3);
           start(&head,6);
           start(&head,7);
           delete_list(head);
           
           printList(head);

           return 0;

        }  