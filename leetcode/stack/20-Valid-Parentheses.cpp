bool isValid(char* s) {
    char stack[10000];
    int top = -1;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1)
                return false;
            char back = stack[top];
            if (s[i] == ')' && back == '(' || s[i] == '}' && back == '{' ||
                s[i] == ']' && back == '[') {
                top--;
            } else {
                return false;
            }
        }
        
    }
    return top == -1;
}
