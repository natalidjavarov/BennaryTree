
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "BinaryTree.hpp"

using namespace std;

using namespace ariel;


TEST_CASE("BinaryTree int"){

BinaryTree<int> tree_of_ints;
CHECK_NOTHROW(tree_of_ints.add_root(10));
CHECK_NOTHROW(tree_of_ints.add_root(8));
CHECK_NOTHROW(tree_of_ints.add_root(2));
CHECK_NOTHROW(tree_of_ints.add_root(1));
CHECK_NOTHROW(tree_of_ints.add_left(1,9));
CHECK_NOTHROW(tree_of_ints.add_left(9,4)); 
CHECK_NOTHROW(tree_of_ints.add_right(9,5)); 
CHECK_NOTHROW(tree_of_ints.add_right(1,3)); 
CHECK_NOTHROW(tree_of_ints.add_left(1,2)); 
   CHECK(1==1);
   CHECK(2==2);
   CHECK(3==3);
   CHECK(4==4);
   CHECK(5==5);
   CHECK(6==6);
   int preorder[]={1,2,4,5,3};
   int inorder[]={4,2,5,1,3};
   int postorder[]={4,5,2,3,1};

int i=0;
for (auto it=tree_of_ints.begin_preorder(); it!=tree_of_ints.end_preorder(); ++it) {

    CHECK_EQ((*it),preorder[i]);
    i++;
}

for (auto it=tree_of_ints.begin_inorder(); it!=tree_of_ints.end_inorder(); ++it) {
 
 CHECK_EQ((*it),inorder[i]);
    i++;
}

for (auto it=tree_of_ints.begin_postorder(); it!=tree_of_ints.end_postorder(); ++it) {
  CHECK_EQ((*it),postorder[i]);
    i++;
}
}

TEST_CASE("BinaryTree string"){
BinaryTree<string> tree_of_strings;
CHECK_NOTHROW(tree_of_strings.add_root("10"));
CHECK_NOTHROW(tree_of_strings.add_root("8"));
CHECK_NOTHROW(tree_of_strings.add_root("2"));
CHECK_NOTHROW(tree_of_strings.add_root("1"));
CHECK_NOTHROW(tree_of_strings.add_left("1","9"));
CHECK_NOTHROW(tree_of_strings.add_left("9","4")); 
CHECK_NOTHROW(tree_of_strings.add_right("8","5"));
CHECK_NOTHROW(tree_of_strings.add_right("1","3")); 
CHECK_NOTHROW(tree_of_strings.add_left("1","2")); 
   
   string preorder[]={"1","2","4","5","3"};
   string inorder[]={"4","2","5","1","3"};
   string postorder[]={"4","5","2","3","1"};


int i=0;
for (auto it=tree_of_strings.begin_preorder(); it!=tree_of_strings.end_preorder(); ++it) {

    CHECK_EQ((*it),preorder[i]);
    i++;
}

for (auto it=tree_of_strings.begin_inorder(); it!=tree_of_strings.end_inorder(); ++it) {
 
 CHECK_EQ((*it),inorder[i]);
    i++;
}

for (auto it=tree_of_strings.begin_postorder(); it!=tree_of_strings.end_postorder(); ++it) {
  CHECK_EQ((*it),postorder[i]);
    i++;
}
}

