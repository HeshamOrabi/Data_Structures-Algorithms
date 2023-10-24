#!/usr/bin/python3
"""
    Representation of a singly linked list:
    - The 'Node' class defines a node in a singly linked list.
    - The 'SinglyLinkedList' class represents the singly linked list itself.
"""


class Node:
    """Class defines a node in a singly linked list"""

    def __init__(self, char_val="", next=None) -> None:
        self.char_val = char_val
        self.char_val_len = len(char_val)
        self.next = next

    def __str__(self) -> str:
        return "[{}] {}".format(self.char_val_len, self.char_val)

    @property
    def char_val(self):
        return self.__char_val

    @char_val.setter
    def char_val(self, char_val):
        if not type(char_val) is str:
            raise TypeError("[char_val] is not str")
        self.__char_val = char_val

    @property
    def char_val_len(self):
        return self.__char_val_len

    @char_val_len.setter
    def char_val_len(self, char_val_len):
        if not type(char_val_len) is int:
            raise TypeError("[char_val_len] is not int")
        self.__char_val_len = char_val_len

    @property
    def next(self):
        return self.__next

    @next.setter
    def next(self, next):
        if not type(next) is Node and next is not None:
            raise TypeError("[next] is not Node or None")
        self.__next = next


class SinglyLinkedList:
    """class represents the singly linked list itself."""

    def __init__(self, head=None) -> None:
        if not type(head) is Node and head is not None:
            raise TypeError("[head] is not Node or None")
        if head is None:
            self.__head = Node("head")
        else:
            self.__head = head

    def print_list(self):
        cur = self.__head
        while cur:
            print("[{}] {}".format(cur.char_val_len, cur.char_val))
            cur = cur.next

    def add_node(self, char_val):
        new = Node(char_val)
        if self.__head:
            new.next = self.__head
        else:
            new.next = None
        self.__head = new

    def add_node_end(self, char_val):
        new = Node(char_val)
        new.next = None
        cur = self.__head
        while cur.next:
            cur = cur.next
        cur.next = new

    def pop_list(self) -> tuple:
        cur = self.__head
        self.__head = cur.next
        t = (cur.char_val, cur.char_val_len)  # Rely garbage collector to del
        return t

    def get_node(self, idx) -> Node:
        i = 0
        cur = self.__head
        while cur:
            if i == idx:
                return cur
            cur = cur.next
            i += 1
        return None

    def insert_node(self, idx, char_val):
        cur = self.__head
        i = 0
        if idx == 0:
            self.add_node(char_val)
        while cur:
            if i == idx - 1:
                new = Node(char_val)
                new.next = cur.next
                cur.next = new
            cur = cur.next
            i += 1

    def delete_node(self, idx) -> tuple:
        cur = self.__head
        i = 0
        if idx == 0:
            return self.pop_list()
        while cur:
            next = cur.next
            if i == idx - 1:
                t = (next.char_val, next.char_val_len)
                cur.next = next.next  # Rely garbage collector to del
                return t
            cur = cur.next
            i += 1
        return (None, None)

    def reverse_list(self) -> Node:
        head = self.__head
        prv = None
        next = None
        while (head):
            next = head.next
            head.next = prv
            prv = head
            head = next
        self.__head = prv
        return prv
