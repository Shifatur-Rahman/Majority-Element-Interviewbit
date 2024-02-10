#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

 //int arr[] = {2,3,2,2,3,2,3};
 vector<int>arr = {2,3,2,2,7,2,3,2,3};
 int n = arr.size();
 int count = 0;
 unordered_map<int, int> u_map;

 for(auto item: arr){
        u_map[item] += 1;
        if(u_map[item] > n/2){
            cout<<item<<"";
            return 0;
        }
 }



}
