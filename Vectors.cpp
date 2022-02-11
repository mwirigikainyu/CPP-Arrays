#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    vector <int> ::iterator iter;
    for(iter = vector1.begin(); iter != vector1.end(); iter++){
        cout<< *iter <<endl;
    }

    vector2.push_back(100);
    vector2.push_back(200);
    int size = vector2.size();
    cout<<vector2.at(0) <<" " <<vector2.at(size-1) <<endl;

    //2D Vector
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    

    return 0;
}