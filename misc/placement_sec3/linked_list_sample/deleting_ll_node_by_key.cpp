#include<stdlib.h>
#include<bits/stdc++.h>
#include<iostream>
#include "insert_in_ll.cpp"
using namespace std;

int main()
   {
        struct node* head = NULL;
          insert_at_start(&head,8);
          insert_at_start(&head,7);
          insert_at_start(&head,4);
          insert_at_start(&head,3);
          insert_at_start(&head,2);
          insert_at_start(&head,1);
          insert_at_end(&head,9);
          insert_after_a_given_node(&head,6,3);
          print_ll(head);
          return 0;
   }