#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compareTotal(const pair<string,int>&a,const pair<string,int>&b) {
    return a.second>b.second;
}
bool comparePlay(const pair<int,int>&a,const pair<int,int>&b) {
    if(a.first!=b.first) return a.first>b.first;
    return a.second<b.second;
}    
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,int> genresAdd1; //장르별 재생횟수 총합
    map<string,vector<pair<int,int>>> genresAdd2; //장르별 고유번호에 따른 재생횟수 
    
    
    for(int i=0; i<genres.size(); i++) {
        genresAdd1[genres[i]]+=plays[i];
        genresAdd2[genres[i]].push_back({plays[i],i});
    }
    vector<pair<string,int>> v(genresAdd1.begin(),genresAdd1.end());
    sort(v.begin(),v.end(),compareTotal);
    for(auto& a : v) {
        string genreName = a.first;
        vector<pair<int,int>> v2 = genresAdd2[genreName];
        sort(v2.begin(),v2.end(),comparePlay);
        for(int i=0; i<v2.size() && i<2; i++) {
            answer.push_back(v2[i].second);
        }
    }
    return answer;
}