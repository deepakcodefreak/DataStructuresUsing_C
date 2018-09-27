#include<iostream>
#include<stack>
#include<string>

using namespace std;

int evaluate(char,int,int);

bool isNumeric(char c)
{
    if(c>='0'&&c<='9')
    return true;
    else false;
}

bool isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
    return true;

     return false;
}

int EvaluatePostfix(string exp)
{
    stack <int> S;
    for(int i=0;i<exp.length();i++)
    {
        if(isOperator(exp[i]))
        {
            int op1 = S.top();S.pop();
            int op2 = S.top();S.pop();
            int result = evaluate(exp[i],op1,op2);
            S.push(result);
        }
        else if(isNumeric(exp[i]))
        {
            S.push(int(exp[i]));

        }
    }
    return S.top();
}


int evaluate(char operation,int o1,int o2)
{
    if(operation=='+')
    return (o1+o2);
    else if(operation=='-')
    return (o2-o1);
    else if(operation=='*')
    return (o1*o2);
    else if(operation=='/')
    return (o1/o2);
    else cout<<"Error: Unexpected opearator used\n";
    return -1;
}

int main()
{
    string exp;
    cout<<"Enter postFix expression that you want to evaluate\n";
    cin>>exp;
    cout<<EvaluatePostfix(exp);
    return 0;
}

