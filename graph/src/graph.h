//图的邻接表实现

#include<iostream>
#include<string>
#include<vector>
#define MAXVEXNUM 100
class ArcNode
{
    public:
    int adj_vertex;
    ArcNode* next;
    ArcNode(int a)
    {
        adj_vertex=a;
        next=NULL;
    }
};
template<class T>
class VexNode
{
    public:
    T data;
    ArcNode* head;
    VexNode(T x)
    {
        data=x;
        head=NULL;
    }
    VexNode()
    {
        head=NULL;
    }
};
template<class T>
class Graph
{
    private:
    VexNode<T> graph[MAXVEXNUM];
    int edges,nodes;
    public:
    Graph();
    bool  adjacent(int,int); //判断两个顶点是否相邻
    std::vector<int> neighbors(int);    //返回顶点i的邻接点
    void insert_vex(T);      //插入顶点
    void delete_vex(int);      //删除顶点
    void add_edge(int,int);        //插入边
    void remove_edge(int,int);     //删除边
    int first_neighbor(int);  ///返回第一个邻接点
    int next_neighbor(int,int);   //返回下一个邻接点
    // void DFS_Traverse(int);     //深度优先遍历
    // void BFS_raverse(int);     //广度优先遍历
};

template <class T>
Graph<T>::Graph(){
    edges=0;
    nodes=0;
}

template <class T>
bool Graph<T>::adjacent(int i,int j){
    if (i >= nodes || j >= nodes) return false;
    ArcNode *p = graph[i].head;
    while(p!=NULL)
    {
        if(p->adj_vertex==j)
        {
            return true;
        }
        p=p->next;
    }
    return false;
}

template <class T>
std::vector<int> Graph<T>::neighbors(int i)
{
    std::vector<int> arcs_neighbor;
    if (i >= nodes) return arcs_neighbor;
    ArcNode *p = graph[i].head;
    while(p!=NULL)
    {
        arcs_neighbor.push_back(p->adj_vertex);
        p=p->next;
    }
    return arcs_neighbor;
}

template <class T>
void Graph<T>::insert_vex(T x)
{
    if (nodes < MAXVEXNUM) {
        graph[nodes++] = VexNode<T>(x);
    }
}

template <class T>
void Graph<T>::delete_vex(int i)
{
    if (i >= nodes) return;
    // 删除相关的边
    for (int j = 0; j < nodes; j++) {
        if (j != i) {
            remove_edge(i, j);
        }
    }
    
    // 删除顶点本身
    ArcNode* p = graph[i].head;
    while (p != nullptr) {
        ArcNode* temp = p;
        p = p->next;
        delete temp;
    }
    
    // 移动后续顶点
    for (int j = i; j < nodes - 1; j++) {
        graph[j] = graph[j+1];
    }
    nodes--;
}

template <class T>
void Graph<T>::add_edge(int i,int j)
{
    if (i >= nodes || j >= nodes) return;
    // 添加从i到j的边
    ArcNode *p1 = new ArcNode(j);
    p1->next = graph[i].head;
    graph[i].head = p1;
    
    // 添加从j到i的边（无向图）
    ArcNode *p2 = new ArcNode(i);
    p2->next = graph[j].head;
    graph[j].head = p2;
    
    edges++;
}

template <class T>
void Graph<T>::remove_edge(int i,int j)
{
    if (i >= nodes || j >= nodes) return;
    
    // 删除从i到j的边
    ArcNode *p = graph[i].head;
    if (p != nullptr) {
        // 如果是第一个节点
        if (p->adj_vertex == j) {
            graph[i].head = p->next;
            delete p;
        } else {
            // 查找并删除节点
            while (p->next != nullptr) {
                if (p->next->adj_vertex == j) {
                    ArcNode* temp = p->next;
                    p->next = temp->next;
                    delete temp;
                    break;
                }
                p = p->next;
            }
        }
    }
    
    // 删除从j到i的边
    ArcNode *q = graph[j].head;
    if (q != nullptr) {
        // 如果是第一个节点
        if (q->adj_vertex == i) {
            graph[j].head = q->next;
            delete q;
        } else {
            // 查找并删除节点
            while (q->next != nullptr) {
                if (q->next->adj_vertex == i) {
                    ArcNode* temp = q->next;
                    q->next = temp->next;
                    delete temp;
                    break;
                }
                q = q->next;
            }
        }
    }
    
    edges--;
}

template <class T>
int Graph<T>::first_neighbor(int i)
{
    if(i >= nodes) return -1;
    if(graph[i].head == NULL) return -1;
    return graph[i].head->adj_vertex;
}

template <class T>
int Graph<T>::next_neighbor(int i,int j)
{
    if (i >= nodes) return -1;
    ArcNode *p = graph[i].head;
    while (p != NULL && p->adj_vertex != j) {
        p = p->next;
    }
    if (p != NULL && p->next != NULL) {
        return p->next->adj_vertex;
    }
    return -1;
}