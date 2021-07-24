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

        bool search_iter(struct node *head_ref,int x)
          {

               struct node *t = head_ref;

               while(t!=NULL)
                 {
                    if (t->data==x)
                         return true;

                     t=t->next;
                 }

                return false;

          }

          bool search_recr(struct node *head_ref,int x)
            {

                 struct node *t =head_ref;

                 if(t==NULL)
                   return false;

                 else if (t->data ==x)
                     return true;
                  else 
                  {
                      t=t->next;
                    search_recr(t, x); 

                  }  

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
           cout << "Please enter an integer value to search: ";
           cin >> i;
           search_iter(head,i);
           if(search_iter(head,i))
            cout <<  "found"<<endl;

            else 
              cout<< "not found" << endl;

              if(search_recr(head,i))
            cout <<  "found"<<endl;

            else 
              cout<< "not found" << endl;
          
           
      return 0;
      }
