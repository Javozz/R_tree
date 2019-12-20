#include <iostream>
#include "RTree.h"

using namespace std;

int main(){
	


	RTree tree;
	tree.insert(make_tuple(2,4),make_tuple(2,4));
	tree.insert(make_tuple(4,2),make_tuple(4,2));
	tree.insert(make_tuple(6,6),make_tuple(6,6));
	tree.insert(make_tuple(8,6),make_tuple(8,6));
	tree.insert(make_tuple(10,10),make_tuple(10,10));
	tree.insert(make_tuple(10,2),make_tuple(10,2));
	tree.insert(make_tuple(14,6),make_tuple(14,6));
	
	float x, y, d;
    int n;
    while(true){
        
        cin >> x >> y >> d;
        Point po = make_tuple(x, y);
        
        vector<RTree::Region *> v = tree.searchRange(po, d);
        for(int i = 0; i < v.size(); i++)
            cout << get<0>(v[i]->limites[TOP]) << ", " << get<1>(v[i]->limites[TOP]) << endl;
    }

}