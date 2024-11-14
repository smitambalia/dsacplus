# Linked List
## Reverse the linked-list
    - will require 3 pointer logic -> previous , current , forward
    - current points to head of the linked-list
    - previous points to null
    - forward points to next of current of the node
    - solve one case , rest will be taken care by recursion

## Find the middle node of a linked-list
    - slow and fast variable approch 
    - slow increases one step and fast variable increases two steps

## Find the palindrom from a linked-list
    - find the middle of a linked list
    - break the linked list into two parts 
    - reverse the 2nd part of a linked list
    - return true when both parth matches otherwise false