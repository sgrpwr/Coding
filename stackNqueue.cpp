#include <bits/stdc++.h>
using namespace std;

void showstack(stack<int>stk){
    stack<int> temp = stk;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
void showq(queue<int>q){
    queue<int> temp = q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int>stk;
    queue<int>q;
    stk.push(1);
    stk.push(5);
    stk.push(10);
    stk.push(6);
    stk.push(3);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(56);
    showstack(stk);
    stk.pop();
    showstack(stk);
    showq(q);
    q.pop();
    showq(q);
    return 0;
}
