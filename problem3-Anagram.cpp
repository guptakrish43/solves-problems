//problem -3

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
  vector<vector<int>>v;
    unordered_map<string,vector<int>>map;
    int n=A.size();
    int i;
    for(i=0;i<n;i++){
    string str=A[i] ;
    sort(str.begin(),str.end()) ;
    map[str].push_back(i+1) ;
   }
   for(auto x:map){
    v.push_back(x.second);
  }
   return v ;
}
