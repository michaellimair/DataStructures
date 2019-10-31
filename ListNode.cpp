#pragma once
#include "ListNode.h"

ListNode::ListNode(int data, ListNode *next = NULL) {
    this->data = data;
    this->next = next;
};

ListNode* ListNode::get_Next() {
    return next;
};

int ListNode::getData() {
    return data;
}

void ListNode::set(int data) {
    this->data = data;
}

void ListNode::set_Next(ListNode* newNode) {
    this->next = newNode;
}
