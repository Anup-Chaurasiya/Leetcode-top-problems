class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;

        for(auto st:tokens){
            if(st=="+" || st=="-" || st=="*" || st=="/"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                if(st=="+") s.push(a+b);
                if(st=="-") s.push(b-a);
                if(st=="*") s.push(a*b);
                if(st=="/") s.push(b/a); 
            }
            else{
                s.push(stoi(st));
            }
        }
        return s.top();

    }
};