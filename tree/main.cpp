#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> tree;
    tree.push_back(4);
    tree.push_back(7);
    tree.push_back(9);
    cout << tree.front() << "\n"<< tree.back();
    return 0;
}
