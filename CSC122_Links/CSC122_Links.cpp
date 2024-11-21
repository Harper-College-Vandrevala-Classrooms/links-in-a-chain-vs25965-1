#include "Node.h"
#include <iostream>
using namespace std;

int main()
{
   
    ChainLink color1 ("Pink");
    ChainLink color2 ("Black");
    ChainLink color3 ("Blue");
    ChainLink color4 ("Yellow");

    Node head(color1);
    head.Append(color2);
    head.Append(color3);
    head.Append(color4);
 
    cout << head.getNodeAt(3).color;

	return 0;
}

