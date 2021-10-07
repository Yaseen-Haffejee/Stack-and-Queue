#include <iostream>
#include <vector>

using namespace std;

class Queue{
    vector<int> queue;
    public:

    //Add to the back of the queue
    void Push(int value){
        queue.push_back(value);
    }

    // Remove from the front of the queue
    void Pop(){
        queue.erase(queue.begin());
    }

    //View whats in the front of the queue
    int Peek(){

        return queue[0];
    }

    //Print the queue
    void Print(){
        vector<int> :: iterator it;

        for (it = queue.begin(); it != queue.end();it++){
            cout<<(*it)<< " ";
        }
        cout<<endl;
    }

};

int main(){

    Queue q = Queue();

    for (int i = 0; i <10;i++){
        q.Push(i);
    }
    q.Print();
    q.Pop();
    cout<<q.Peek()<<endl;

    return 0;
}
