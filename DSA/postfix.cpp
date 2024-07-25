#include <iostream>
#include <string>
using namespace std;

const int MAX = 100; 
char stack[MAX];     
int top = -1;        

bool isEmpty() {
    return top == -1;
}
bool isFull() {
    return top == MAX - 1;
}
void push(char c) {
    if (isFull()) {
        cout << "Stack overflow\n";
        return;
    }
    stack[++top] = c;
}
char pop() {
    if (isEmpty()) {
        cout << "Stack underflow\n";
        return '\0';
    }
    return stack[top--];
}
char peek() {
    if (isEmpty()) {
        return '\0';
    }
    return stack[top];
}
bool isOperator(char c) {
    return (!isalpha(c) && !isdigit(c));
}
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(string infix) {
    string postfix = "";

    for (char &ch : infix) {
        if (isalpha(ch) || isdigit(ch))
            {
            postfix += ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix += pop();
            }
            pop(); 
        }
        else {
            while (!isEmpty() && precedence(ch) <= precedence(peek())) {
                postfix += pop();
            }
            push(ch);
        }
    }

    while (!isEmpty()) {
        postfix += pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
