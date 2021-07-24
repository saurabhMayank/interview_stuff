#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


   struct node
      {
         int data;
         struct node* next;
      };
      

       void start(struct node **head_ref,int data1)
      {

          struct node* new_node = (struct node*) malloc (sizeof(struct node));
          new_node ->data = data1;
          new_node ->next= *(head_ref);
          *(head_ref)=new_node ;
      }

      void del_from_start(struct node **head_ref)
       {
             struct node* t;
             t=*head_ref;
             *head_ref=t->next;
            //  head_ref=head_ref->next;
             free(t);
             t=NULL;
       }
      
      void del_from_end(struct node **head_ref)
        {
              struct node* l=*head_ref;
              // l=head_ref;
              struct node* p;
             
             while(l->next!=NULL)
               {
                   p=l;
                   l=l->next;
               }
              free(l);
              l=NULL;
               p->next = NULL;
               
        }


        void printList(struct node* t)
          {
            while (t != NULL)
            {
              cout<< t->data <<" ";
              t = t->next;
            }
            cout<<endl;
          }


        void del_from_middle(struct node *head_ref,int x)
          {

            
             struct node* k = head_ref;
            //  struct node* m = NULL;
             
            //  while(k != NULL && k->data !=x)
            //    {
            //          m=k;
            //          k=k->next;
            //    }
            //  m->next = k->next;
            //  free(k);
            //  k=NULL;
            while(k->next && k->data!=x){
              k=k->next;


            }
            struct node*temp=k->next;
            k->data=temp->data;
            k->next=temp->next;
            free(temp);
            temp=NULL;

            //  printList(head_ref);
             return;

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
           del_from_start(&head);
           del_from_end(&head);
           printList(head);
           del_from_middle(head,6);
           printList(head);


      return 0;
     }