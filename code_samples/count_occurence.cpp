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


        void count_occurence(struct node *head_ref,int x)
         {
              struct node *t = head_ref;
              int c=0;

              while(t!=NULL)
                {
                    if(t->data==x)
                       c++;

                       t=t->next;
                }
            
                cout<<c<<endl;
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
                    start(&head,1);
                    start(&head,2);
                    start(&head,2);
                    start(&head,2);
                    

                    cout << "Please enter the number to count its occurence: ";
                    cin >> i;

                    count_occurence(head,i);
                    
                        
                        return 0;
                }