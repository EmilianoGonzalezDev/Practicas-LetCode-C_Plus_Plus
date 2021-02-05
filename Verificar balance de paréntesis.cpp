//Verificar balance de paréntesis
//Check for balanced parenthesis.

bool areParanthesisBalanced(string expr)
{   stack<char> s;
    char x;
    for (int i = 0; i < (int)expr.size(); i++)
    {   if (expr[i] == '(' || expr[i] == '[' 
                           || expr[i] == '{')  
        {s.push(expr[i]);}
        else
        { if (s.empty()) { return false; }

          x = s.top();
          s.pop(); 
          switch (expr[i])
          { 
            case ')':  
                if (x != '(') return false;
            case '}': 
                if (x != '{') return false;
            case ']':  
                if (x != '[') return false;
          } 
        }
    } 
    return (s.empty());
}