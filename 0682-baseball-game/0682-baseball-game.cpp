class Solution {
public:
    int calPoints(vector<string>& operations) {
        int x ;
        vector<int>ans;
     for(string op : operations){
        if(op == "+"){
          int x = ans[ans.size()-1] + ans[ans.size()-2];
          ans.push_back(x);
        }
        else if(op == "D"){
            ans.push_back(2*ans.back());
        }
        else if(op == "C"){
            ans.pop_back();
        } else{
            ans.push_back(stoi(op));
        }
     }   
     int sum = 0;
     for(int score : ans){
        sum+=score;
     }
     return sum;
    }
};