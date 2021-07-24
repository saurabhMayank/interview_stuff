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
              
              cout << t->data << endl;
              t = t->next;
            }
          }

          void remove_duplicates(struct node **head_ref)
            {
                    struct node *p=*(head_ref);
                    struct node *q = NULL;

                    while(q!=NULL && p!=NULL)
                     {
                        q=p;
                        p=p->next;

                        if(p->data == q->data)
                          {

                              struct node *temp=*(head_ref);
                             
                             while(temp!=p)
                              {
                                  temp=temp->next;
                              }


                              q->next=p->next;
                              p=p->next;
                              free(temp);
                          }


                     }
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
           
        //    printList(head);

           remove_duplicates(&head);

          //  removeDuplicates(head);

           printList(head);

           return 0;

        }