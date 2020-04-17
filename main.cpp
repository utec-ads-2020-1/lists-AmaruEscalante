#include <iostream>
//#include "test/tester.h"
#include "stack.h"
using namespace std;

int main(int argc, char *argv[]) {

    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;

    stack<int> stack;
    stack.push(10);
    stack.push(5);
    cout << stack.pop() << endl;
    stack.push(2000);
    cout << stack.peek() << endl;
    cout << stack.size() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
  //  Tester::execute();
    return EXIT_SUCCESS;
}
