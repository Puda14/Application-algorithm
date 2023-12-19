# Description

Given a undirected tree $G = (V, E)$ in which $V = \{1,…,N\}$ is the set of nodes. Each edge $(u,v) \in E$ has weight $w(u,v)$. The length of a path is defined to be the sum of weights of edges of this path. Find the longest elementary path on $G$.

Input

- Line 1: positive integer $N$ ($1 \leq N \leq 10^5$)
- Line $i + 1$ ($i = 1,…,N-1$): positive integers $u, v, w$ in which $w$ is the weight of edge $(u,v)$ (1 ≤ w ≤ 100)

Output

The weight of the longest path on the given tree

Example

Input

6 

1 3 3

1 6 2 

2 6 5 

4 5 2

4 6 1

Output

10