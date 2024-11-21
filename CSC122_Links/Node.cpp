#include "Node.h"

Node::Node(ChainLink chainlink)
{
	this->color = chainlink.get_color();
	this->next = nullptr;
}
void Node::Append(ChainLink _NewchainLink)
{
    Node* current = this; // Start with the current node

    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new Node(_NewchainLink); // Create a new node for the new ChainLink and append it
}
Node Node::getNodeAt(int index)
{
    Node* current = this; 
    int count = 0;

    // Traverse the list until the desired index is reached
    while (current != nullptr) {
        if (count == index) {
            return *current; // Return the node at the specified index
        }
        current = current->next; // Move to the next node
        count++; // Increment the counter
    }
    
}