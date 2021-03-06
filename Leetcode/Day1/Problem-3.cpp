// Problem - 1: https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/


//==================SOLUTION==================//
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        short int doing_h = 0;
        for(int i=0;i<size(startTime);i++){
            if(startTime[i]<=queryTime && endTime[i]>=queryTime){
                doing_h++;
            }
        }
        return doing_h;
    }
};