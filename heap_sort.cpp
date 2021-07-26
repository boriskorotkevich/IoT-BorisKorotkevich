#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    int arr[] = {10, 40, 52, 33, 96, 55, 50, 89, 11, 22};

    int tam = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < tam; ++i){
        pq.push(-1 * arr[i]);
    }

    do{
        cout << -1 * pq.top() << " ";
        pq.pop();
    }while(!pq.empty());
}
