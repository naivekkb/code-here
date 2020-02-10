#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

const int MAX = 30;
int mapSize,Left,Right;
int map[MAX][MAX];
int area[MAX][MAX];

struct point{
    int r;
    int c;
};

int main(){
    freopen("input.txt","r",stdin);
    cin>>mapSize;
    for(int i=0;i<mapSize;i++){
        for(int j=0;j<mapSize;j++){
            cin>>map[i][j];
        }
    }
    for(int i=0;i<mapSize;i++){
        for(int j=0;j<mapSize;j++){
            // 구역 초기화
            for(int r=0;r<mapSize;r++){
                for(int c=0;c<mapSize;c++){
                    area[r][c]=5;
                }
            }
            //////////////////
            // 꼭지점 선언 
            point top;
            top.r=i;top.c=j;
            // 좌측 최대 길이 구하기 
            int lr=top.r+1,lc=top.c-1;
            while(0<=lr&&lr<mapSize&&0<=lc&&lc<mapSize){
                Left++;
                lr++;lc--;
            }
            // 우측 최대 길이 구하기
            int rr=top.r+1,rc=top.c+1;
            while(0<=rr&&rr<mapSize&&0<=rc&&rc<mapSize){
                Right++;
                rr++;rc--;
            }
            ////////////////////
            point Lvertex,Rvertex;
            Lvertex.r=i+1;Lvertex.c=j-1;
            for(int l=0;l<Left;l++){
                Rvertex.r=i+1;Rvertex.c=j+1;
                for(int r=0;r<Right;r++){
                    if((Rvertex.r+Rvertex.c-Lvertex.r-Lvertex.c)%2==0){
                        int n=(Rvertex.r+Rvertex.c-Lvertex.r-Lvertex.c)/2;
                        point buttom;
                        buttom.r=n+Lvertex.r;
                        buttom.c=n+Lvertex.c;
                        // 꼭지점 4개 구함
                        if(0<=buttom.r&&buttom.r<mapSize&&0<=buttom.c&&buttom.c<mapSize){
                            for(int x=0;x<mapSize;x++){
                                for(int y=0;y<mapSize;y++){
                                    area[x][y]=5;
                                }
                            }
                            // 1 구역
                            for(int x=0;x<Lvertex.r;x++){
                                for(int y=0)
                            }
                            // 2 구역

                            // 3 구역

                            // 4 구역
                        }
                    }
                }
                Lvertex.r++;Lvertex.c++;

            }
        }
    }
    return 0;
}