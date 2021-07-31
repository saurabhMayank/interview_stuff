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
   
   void start(struct node **head_ref,int data1){

          struct node* new_node = (struct node*)malloc (sizeof(struct node));
          new_node->data = data1;
          new_node->next = *(head_ref);
          (*head_ref)=new_node;
  }

  void ends(struct node **head_ref,int data1){
          struct node* new_node = (struct node*)malloc (sizeof(struct node));
          struct node* t;
            t=*(head_ref);

            new_node->data=data1;
            
            while(t->next!=NULL)
              {
                 t=t->next;
              }

              t->next = new_node;
              new_node->next=NULL;

        }

        void insert_after(struct node **head_ref,int data1,int pos)
          {

             struct node* new_node = (struct node*)malloc (sizeof(struct node));
             struct node* t;
             
             t=*(head_ref);

            new_node->data=data1;
            new_node->next=NULL;

            for(int i=0;i<pos-1;i++)
              {
                t= t->next;
              }

              new_node->next = t->next;
              t->next=new_node;

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
           ends(&head,5);
           start(&head,4);
           start(&head,2);
           start(&head,3);
           start(&head,6);
           insert_after(&head,9,6);
           printList(head);

           return 0;

        }