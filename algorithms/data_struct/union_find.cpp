#include <iostream>
#include "union_find.hpp"
using namespace std;

UnionFind::UnionFind()
	:count(0){}

void UnionFind::connect(int x, int y){
    int px = find(x);
    int py = find(y);

    if(px != py){
        --count;

        if(rk[px] < rk[py]){
            pt[px] = py;
            rk[py] += rk[px];
        }
        else{
            pt[py] = px;
            rk[px] += rk[py];
        }
    }	
}

int UnionFind::find(int a){
	// 非路径压缩
	// while(a != pt[a]) a = pt[a];
	// return a;
	
	// 路径压缩
	if(a != pt[a]) pt[a] = find(pt[a]);
	return pt[a];
}
