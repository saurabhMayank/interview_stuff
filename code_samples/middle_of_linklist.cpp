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

        void middle(struct node *head_ref)
          {

               int c=0;
               int i=1;
               int mid=0;

               struct node* t=head_ref;
               struct node* p=head_ref;

                 while(t!=NULL)
                  {

                      c++;
                      t=t->next;
                  }

                  if(c%2==0)
                     mid=c/2;
                  else
                      mid=(c+1)/2;
               
               while(i!=mid)
               {
                   p=p->next;
                   i++;
               }
                 
             cout << p->data <<  endl;


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
           middle(head);
          
               
            return 0;
       }