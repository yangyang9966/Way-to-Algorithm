//二分匹配转最大流
//match2maxflow.cpp

//将二分最大匹配问题转化为最大流问题求解

//本文是算法导论中关于求解二分最大匹配的方法
//将二分图B=<X,Y,E>构造为对应的所有边的权值都为1的流网络
//该流网络的最大流正好等于原二分图B的最大匹配，则将二分匹配问题转化为了最大流问题
//
//向二分图B中添加源点beg和汇点end
//从源点beg向X集合中每个节点添加一条权值为1的边，从源点beg指向X集合中节点
//从Y集合中每个节点向汇点end添加一条权值为1的边，从Y集合中节点指向汇点end
//原图B中的无向边都改为从X集合中节点指向Y集合中节点的有向边，权值为1
//该流网络的最大流即为原二分图B的最大匹配数

//int match2maxflow(bipartite& b, int *ymatch)
