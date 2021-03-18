#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool visitedRD[40];
bool visitedRU[40];
bool visitedCol[40];
int cnt = 0, cur = 0;
int tn = 0;
void nqueen(int cur){
    if(cur == tn){
        cnt++;
        return;
    }
    for (int i = 0; i < tn; i++){
        if(visitedCol[i] || visitedRD[cur-i+tn-1] || visitedRU[i+cur])
            continue;
        visitedCol[i] = 1;
        visitedRU[i+cur] = 1;
        visitedRD[cur-i+tn-1] = 1;
        nqueen(cur+1);
        visitedCol[i] = 0;
        visitedRU[i+cur] = 0;
        visitedRD[cur-i+tn-1] = 0;
    }
}
int solution(int n) {
    tn = n;
    nqueen(0);
    return cnt;
}
