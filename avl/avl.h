#ifndef AVL_H_
#define AVL_H_
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

template <class K,class D>
class avl;

template <class K,class D>
class Node
{
    private:
        K key;
        D data;
        Node<K,D> * p_children[2];
        int hgt;
    public:
         Node(const K & k,const D & d);
         ~Node();
    friend class avl<K,D>;
};

template <class K,class D>
class avl
{
    private:
        Node<K,D> * root;
        //ofstream os;

    public:
        avl(); //root null
        virtual ~avl();

        void destructor(Node<K,D> *n);
        bool find(K _key);
        bool insert(Node<K,D>** n,K x);
        bool insert(K k);
        void remove(Node<K,D>** n,K x);
        bool remove(K x);
        void print(Node<K,D> * n);
        void print();

        void printgraf(Node<K,D> * n);
        void printgraf();
        Node<K,D>* Min(Node<K,D> **n);
        int altura(Node<K,D> * n);
        int altura();
        int max(int a,int b);
        void print_inverse_leve();
        void print_inverse_leve(Node<K,D> *n,int level);
        void print_sinrecu(Node<K,D> *n);
        void print_sinrecu();
        void rotar(Node<K,D>** n, bool side);
        bool balance(Node<K,D> **n,bool child);
        bool Delete(Node<K,D> **n, K k);
        void printARBOL();
        void printARBOL(Node<K,D> *n, ofstream &os);
        void dibujararbol(int num);
    

    private:
        bool find(K _key,Node<K,D> **&tmp);


};
#include "avl.inl"
#endif