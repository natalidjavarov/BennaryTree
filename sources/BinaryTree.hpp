
#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
namespace ariel{

template<typename T>
class BinaryTree{
    struct Node{

        T data;
        Node* left=nullptr;
        Node* right=nullptr;

        Node(T& d): data(d),left(nullptr),right(nullptr){}

    };
    Node* root;

    class iterator {
        Node* pointer_to_current_node;
        
        public:
        iterator(Node* ptr = nullptr): pointer_to_current_node(ptr) {}

        T& operator*() const {
			//return *pointer_to_current_node;
			return pointer_to_current_node->data;
		}
        T* operator->() const {
			return &(pointer_to_current_node->data);
}
       //++i
        iterator& operator++(){
			//++pointer_to_current_node;
			
			return *this;
		}
        //i++
        const iterator operator++(int) {
			iterator tmp= *this;
			
			return tmp;
		}
bool operator==(const iterator& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}
        bool operator!=(const iterator& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
        }
};// END OF CLASS ITERATOR
public:
BinaryTree<T> (){
  root= nullptr;
}
BinaryTree<T> add_root(const T& data){
    return *this;
}
BinaryTree<T> add_left(const T& data,const T& left){
    return *this;
}
BinaryTree<T> add_right(const T& data,const T& right){
    return *this;
}
iterator begin_preorder(){
return iterator {root};
}
iterator end_preorder(){
    return iterator{root};
}
iterator begin_inorder(){
    return iterator{root};
}
iterator end_inorder(){
    return iterator{root};
}
iterator begin_postorder(){
    return iterator{root};
}
iterator end_postorder(){
    return iterator{root};
}
iterator begin() {
 return iterator{root};
}
	
iterator end() {
 return iterator{root};
}
//operator out;
friend std::ostream& operator<<(std::ostream &out, const ariel::BinaryTree<T>& binaryTree){
            // for(auto it : binaryTree){
            //     out << it << " ";
            // }
            return out;
        }

};// END OF CLASS BenaryTree
}