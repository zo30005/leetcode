#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isValid(string s) {
        if(s.length() % 2 != 0) {
            return false;
        }
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if(st.empty()) {
                    continue;
                }

                if(st.top() == '(') {
                    if(s[i] == ')') {
                        st.pop();
                    }
                } else if(st.top() == '{') {
                    if(s[i] == '}') {
                        st.pop();
                    }
                } else if(st.top() == '[') {
                    if(s[i] == ']') {
                        st.pop();
                    }
                }
            }
        }
        return st.empty();
    }
};