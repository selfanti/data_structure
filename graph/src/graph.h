//图的邻接表实现

#include<iostream>
#include<string>
#define MAXVEXNUM 100
class Node
{
    public:
    int node_id;
    Node* next;
};
template<class T>
class VexNode
{
    public:
    T data;
    Node* head;
};
template<class T>
class Graph
{
    private:
    VexNode<T> graph[MAXVEXNUM];
    int edges,nodes;
    public:
    Graph();
    int  adjacent(int,int); //判断两个顶点是否相邻
    void neighbors(int);    //返回顶点i的邻接点
    void insert_vex(int);      //插入顶点
    void delete_vex(int);      //删除顶点
    void add_edge(int,int);        //插入边
    void remove_edge(int,int);     //删除边
    void first_neighbor(int);  ///返回第一个邻接点
    void next_neighbor(int);   //返回下一个邻接点
    void DFS_Traverse(int);     //深度优先遍历
    void BFS_raverse(int);     //广度优先遍历
};
