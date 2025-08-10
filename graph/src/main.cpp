#include <iostream>
#include "graph.h"
#include <string>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    cout << "图数据结构测试!" << endl;
    Graph<std::string> g;
    
    // 插入顶点
    g.insert_vex("A");
    g.insert_vex("B");
    g.insert_vex("C");
    g.insert_vex("D");
    
    // 添加边
    g.add_edge(0, 1);  // A-B
    g.add_edge(1, 2);  // B-C
    g.add_edge(2, 3);  // C-D
    g.add_edge(0, 3);  // A-D
    
    // 测试邻接关系
    cout << "顶点0和顶点1是否相邻: " << (g.adjacent(0, 1) ? "是" : "否") << endl;
    cout << "顶点0和顶点2是否相邻: " << (g.adjacent(0, 2) ? "是" : "否") << endl;
    
    // 测试邻接点
    vector<int> neighbors = g.neighbors(0);
    cout << "顶点0的邻接点: ";
    for (int n : neighbors) {
        cout << n << " ";
    }
    cout << endl;
    
    // 测试第一个邻接点
    int first = g.first_neighbor(0);
    cout << "顶点0的第一个邻接点索引: " << first << endl;
    
    // 测试下一个邻接点
    int next = g.next_neighbor(0, first);
    cout << "顶点0中相对于" << first << "的下一个邻接点索引: " << next << endl;
    //去掉A-D边
    g.remove_edge(0,3);
    neighbors = g.neighbors(0);
    cout << "顶点0的邻接点: ";
    for (int n : neighbors) {
        cout << n << " ";
    }
    cout << endl;
    cout << "测试完成!" << endl;
    return 0;
}