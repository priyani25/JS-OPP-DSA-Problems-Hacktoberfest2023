#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;  
    
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

   
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

   
    int topElement = myStack.top();
    std::cout << "Top element of the stack: " << topElement << std::endl;

    
    myStack.pop();
    myStack.pop();


    int stackSize = myStack.size();
    std::cout << "Size of the stack: " << stackSize << std::endl;

    
    myStack.pop();

    
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    return 0;
}
