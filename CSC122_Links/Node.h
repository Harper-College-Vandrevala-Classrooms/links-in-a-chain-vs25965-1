#pragma once
#include "ChainLink.h"
#include <iostream>
using namespace std;

class Node
{
private:
	
	Node* next;
public:
	string color;
	Node(ChainLink chainlink);
	void Append(ChainLink _NewchainLink);
	Node getNodeAt(int index);
};

