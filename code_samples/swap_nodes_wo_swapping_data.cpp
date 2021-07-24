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



        int swap_nodes(struct node **head_ref,int x ,int y)

         {
               // searching for the two nodes begin

               struct node *p= *head_ref;
               struct node *prev= NULL;

               while(p!=NULL &&  p->data!=x)
                 {

                     prev=p;
                     p=p->next;
                 }
                
                struct node *px= p;
                struct node *prevX= prev;


                p=*head_ref;
                prev=NULL;

                 while(p!=NULL &&  p->data!=y)
                 {

                     prev=p;
                     p=p->next;
                 }

                struct node *py= p;
                struct node *prevY= prev;


                struct node *temp=py->next;

                py->next=px->next;
                px->next=temp;

                // checking the condition if one of the nodes is head or not in that case we have to make the other one head

                //suppose px is pointing to head

                if(prevX==NULL) //px head
                  {

                      py=*head_ref;
                      prevY->next=px;
                  }
                  else  if(prevY==NULL) //py head
                  {

                      px=*head_ref;
                      prevX->next=py;
                  }

                  else if (prevX!=NULL && prevY!=NULL)  // none of them are head,they both could be the internal node or one can be the last node
                       {
                            prevX->next=py;
                            prevY->next=px;

                       }

              return 0;
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

                    int i,j;
                    struct node* head =NULL;
                    start(&head,4);
                    start(&head,6);
                    start(&head,3);
                    start(&head,1);
                    start(&head,2);
                    start(&head,5);
                      cout << "Please enter the data of the nodes to swap: ";
                      cin >> i,j;
                     
                      printList(head);

                    swap_nodes(&head,i,j);

                    cout << "swappped list below" << endl;

                    printList(head);

                    return 0;       
                    
                }