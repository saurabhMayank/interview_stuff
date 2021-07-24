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


        int detect_loop(struct node *head_ref)
            {
                   struct node *p=head_ref;
                   struct node *q=head_ref;

                   while(q!=NULL && p!=NULL && p->next!=NULL)
                     {

                         p=p->next->next;
                         q=q->next;

                         if(p==q)
                           {

                              cout << "loop found" << endl;
                              return 1;
                           } 
                        
                     }

                 return 0;

            }


        int main()

                {

                    int i;
                    struct node* head =NULL;
                    start(&head,4);
                    start(&head,2);
                    start(&head,3);
                    start(&head,6);
                   
                    head->next->next->next->next = head->next;


                  

                    detect_loop(head);
                    
                    return 0;
                }