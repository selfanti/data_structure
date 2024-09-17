#include<iostream>
#include<string>
#define MAXVEXNUM 100
class Node
{
    public:
    int Neid;
    int weight;
    Node* weight;
};
class VexNode
{
    public:
    std::string VexInfo;
    Node* head;
};
class graph
{
    private:
    VexNode graph[MAXVEXNUM];
    int edges,nodes;
    public:
    int LocateVex();
    void GetVex();
    void PutVex();
    void FirstAdjVex();
    void NextAdjVex();
    void InsertVex();
    void DeleteVex();
    void InsertArc();
    void DFSTraverse();
    void BFSTraverse();
};
