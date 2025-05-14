class Solution {
public:
    int calPoints(vector<string>& ops) {
        int total=0;
        stack<int> res;

        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+") 
            {
                  int first=res.top();
                  res.pop();
                  int second=res.top();
                  res.push(first);
                  total+=first+second;
                  res.push(first+second);
            }
            else if(ops[i]=="D")
            {
                int temp=res.top()*2;
                res.push(temp);
                total+=temp;
            }
            else if(ops[i]=="C")
            {
                int temp=res.top();
                res.pop();
                total-=temp;
            }
            else
            {
                int temp=stoi(ops[i]);
                res.push(temp);
                total+=temp;
            }
        }
        return total;
    }
};