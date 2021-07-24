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

          struct node* new_node = (struct node*) malloc(sizeof(struct node));
          new_node->data = data1;
          new_node->next = *(head_ref);
          *(head_ref) = new_node;
        }

        void palindrome_check_using_recr(struct node *head_ref)
           {
                struct node *t=head_ref;
                

               




           }

           void palindrome_check_using_stack(struct node *head_ref)
             {



             }


           void palindrome_check_by_reversing(struct node *head_ref)
              {



              }

        int main()

                {

                    int i;
                    struct node* head =NULL;
                    start(&head,4);
                    start(&head,2);
                    start(&head,3);
                    start(&head,3);
                    start(&head,2);
                    start(&head,4);
                    

                   
                    
                }