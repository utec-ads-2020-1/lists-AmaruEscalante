#ifndef STACK_H
#define STACK_H

using namespace std;

#define MAX 1000

// TODO: Implement all methods
template <typename T>
class stack {
	T* data;
	int top;
	int capacity;

public:
	explicit stack(int size = MAX, int p_top = -1):
	    top(p_top),
	    capacity(size){
	    this->data = new T(size);
	};
	~stack(){
        delete[] data;
	};

	void push(T value) {
	    top++;
	    auto *temp = data+top;
	    *temp = value;
	    std::cout << *(data+top) << endl;
    }

    int pop() {
        if (top == -1){
            std::cout << "underflow" << endl;
            return top;
        } else {
            auto *temp = data+top;
            top--;
            return *temp;
        }
    }

    T peek() {
	    auto *temp = data+top;
        return *temp;
    }

    int size() {
	    auto temp = top+1;
        return temp;
    }

    bool empty() {
	    if (top == -1){
	        return true;
	    }else{
            return false;
	    }
    }
};

#endif