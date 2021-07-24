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
          new_node->next=*(head_ref);
          *(head_ref)=new_node;
        }

        int len_iterative(struct node *head_ref)
           {
               int c=0;

               struct node* t=head_ref;

                 while(t!=NULL)
                  {

                      c++;
                      t=t->next;
                  }
        
              cout<< c << endl;
           }

           int len_recursive(struct node* head_ref)
             {
                 
                 
                  
                  if(head_ref==NULL)
                   return 0;

                   else
                    return  1+len_recursive(head_ref->next);
                 
             }

       int main()
     {
         
       struct node* head =NULL;
           start(&head,4);
           start(&head,2);
           start(&head,3);
           start(&head,6);
           start(&head,4);
           start(&head,1);
           start(&head,9);
           len_iterative(head);
           len_recursive(head);
           cout << len_recursive(head)  <<endl;
           
      return 0;
     }