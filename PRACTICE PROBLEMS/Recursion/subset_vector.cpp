#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void display(const std::vector<T> &vec) {
    std::cout << "[ ";
    for (const auto &elem: vec)
        std::cout << elem << " ";
    std::cout <<  "]"<< std::endl;
}
void solve(vector <int> op, vector <int> ip){
    if (ip.size() == 0){
        display(op);
    }else{
    vector <vector<int>> ops {
        op,
        op,
    };
    ops.at(1).push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ops.at(0),ip);
    solve(ops.at(1),ip);
    }
    
}
int main() 
{
    vector <int> op, ip;
    // cout<<"Enter your input elements in a list : ";
    int n=0;
    cin>>n;
    for (int i=0;i<n;i++){
        int elem;
        cin>>elem;
        ip.push_back(elem);
    }
    // cin>>ip;
    solve(op,ip);
    cout<<endl;
    return 0;
}