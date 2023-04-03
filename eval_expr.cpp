/**
 * Implementation of the functions to evaluate arithmetic expressions
 * The implementation should use the Stack data structure
 */
//You must complete the TODO parts and then complete LinkedList.cpp. Delete "TODO" after you are done.
//You should always comments to each function to describe its PURPOSE and PARAMETERS
#include "stack.h"
#include "eval_expr.h"

/**
 * @brief Evaluate a postfix expression
 * @param postfix_expr The input expression in the postfix format.
 * @param result gets the evaluated value of the expression (by reference).
 * @return true if expression is a valid postfix expression and evaluation is done without error, otherwise false.
 */
bool evalPostfixExpr(string postfix_expr, float& result) {
    /*
    Stack<char> signs;
    Stack<float> nums;
    Stack<int> paren;
    for(int i = 0; i < postfix_expr.size();i++)
    {
        nums.displayAll();
        int c = postfix_expr[i];
        if((postfix_expr[i] == '+')||(postfix_expr[i] == '*')||(postfix_expr[i] == '/')||(postfix_expr[i] == '-'))
        {
            if(nums.size() < 2)
            {
                cout << "ERROR\n";
                return false;
            }
            float n1;
            float n2;
            nums.pop(n1);
            nums.pop(n2);
            if(postfix_expr[i]=='+')
            {
                nums.push(n1+n2);
            }
            else if(postfix_expr[i]=='-')
            {
                nums.push(n1-n2);
            }
            else if(postfix_expr[i]=='*')
            {
                nums.push(n1*n2);
            }
            else if(postfix_expr[i]=='/')
            {
                nums.push(n1/n2);
            }
        }
        else if(postfix_expr[i]=='(')
        {
            paren.push('(');
        }
        else if ((48<=c)&&(c<=57))
        {
            float number;
            switch(c)
            {
                case 48:
                    number = 0;
                case 49:
                    number = 1;
                case 50:
                    number = 2;
                case 51:
                    number = 3;
                case 52:
                    number = 4;
                case 53:
                    number = 5;
                case 54:
                    number = 6;
                case 55:
                    number = 7;
                case 56:
                    number = 8;
                case 57:
                    number = 9;
                default:
                    cout << "";
            }
            nums.push(number);
        }
    }*/
    return false;
}

/**
 * @brief Convert an infix expression to an equivalent postfix expression
 * @param infix_expr The input expression in the infix format.
 * @return the converted postfix expression. If the input infix expression is invalid, return an empty string "";
 */
string convertInfixToPostfix(string infix_expr) {
    Stack<char> paren;
    Stack<char> signs;
    Stack<int> nums;
    for(int i = infix_expr.size()-1; i < 0;i--)
    {
        if(infix_expr[i] == '('||infix_expr[i] == ')')
        {
            paren.push(infix_expr[i]);
        }
        else if(infix_expr[i]=='+'||infix_expr[i]=='-'||infix_expr[i]=='/'||infix_expr[i]=='*')
        {
            nums.push(infix_expr[i]);

        }
        else if(infix_expr[i]=='0'||infix_expr[i]=='1'||infix_expr[i]=='2'||infix_expr[i]=='3'||infix_expr[i]=='4'||infix_expr[i]=='5'||infix_expr[i]=='6'||infix_expr[i]=='7'||infix_expr[i]=='8'||infix_expr[i]=='9')
        {
            signs.push(infix_expr[i]);
        }
        else
        {
            continue;
        }
    }
    string r = "";
    int end = 1;
    while(nums.size()>0)
    {
        int val;
        nums.pop(val);
        r += (char)(val);
        end++;
    }
    while(signs.size()>0)
    {
        char v;
        signs.pop(v);
        r.insert(r.begin()+end,v);
    }
    return r;
}

/**
 * @brief Evaluate an infix expression. It's converted to a postfix expression first and then evaluated
 * @param infix_expr The input expression in the infix format.
 * @param result gets the evaluated value of the expression (by reference).
 * @return true if expression is valid and evaluation is done without error, otherwise false.
 */
bool evalInfixExpr(string infix_expr, float& result) {
    // TODO: Add your code here
    return true;
}