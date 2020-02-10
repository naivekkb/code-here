#include <iostream>
using namespace std;

const int MAX = 100010;

int testcase,trial,sum,num;

struct Stack{
	int data[MAX];
	int numEle;
	
	void init(){numEle=0;}
	void push(int num) {data[numEle++]=num;}
	int pop() {return data[--numEle];}
};


int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt","r",stdin);
	cin>>testcase;
	for(int test=1;test<=testcase;test++){
		Stack s;
		s.init();
		cin>>trial;
		sum=0;
		for(int i=0;i<trial;i++){
			cin>>num;
			if(num!=0){
				sum+=num;
				s.push(num);
			}
			else{
				sum-=s.pop();
			}
		}
		cout<<"#"<<test<<" "<<sum<<endl;
	}
	return 0;
}
