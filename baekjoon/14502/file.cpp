#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

const int MAX = 20;
int row,col;
int map[MAX][MAX];
int dir=4;
int numOneTwo;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
bool visited[MAX][MAX];
vector <pair<int,int> > virus;

void diffuse(int x,int y){
    queue <pair<int,int> > q;
    //visited[x][y]=true;
    q.push(make_pair(x,y));
    while(!q.empty){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int i=0;i<dir;i++){
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(0<=nr&&nr<row&&0<=nc&&nc<col){
                if(!visited[nr][nc]&&map[nr][nc]==0){
                    visited[nr][nc]=true;
                    q.push(make_pair(nr,nc));
                }
            }
        }
    }

}

int howMany(){
    int cnt=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(!visited[i][j]) cnt++;
        }
    }
    return cnt-numOneTwo;
}

int main(){
    freopen("input.txt","r",stdin);
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>map[i][j];
            if(map[i][j]==1||map[i][j]==2) numOneTwo++;
        }
    }

    for(int i=0;i<)

    return 0;
}