//#include "head.h"
//class Solution
//{
//public:
//	void push(int node) {
//		stack1.push(node);
//	}
//
//	int pop() {
//		if (stack2.empty())
//		{
//			while (!stack1.empty())
//			{
//				stack2.push(stack1.top());
//				stack1.pop();
//			}			
//		}
//		int res = 0;
//		if (!stack2.empty())
//		{
//			res = stack2.top();
//			stack2.pop();
//		}
//		return res;
//	}
//
//private:
//	stack<int> stack1;
//	stack<int> stack2;
//};