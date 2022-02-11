#include<iostream>
using namespace std;
int tone;
float m[]={0,0,0,0,0,262,277,294,311,330,349,370,392,415,440,466,494,532,554,587,622,659,699,740,784,831,880,932,988,1047,1109,1175,1245,1319,1397,1480,1568,1661,1760,1865,1976,0,0,0,0,0,0};

float* changeTone(float* before,int tone){
	if(tone==0)return before;
	return before+tone;
}

int main(int argc,char* argv[]){
	freopen(argv[1],"r",stdin);
	int bpm;
	int i=0;
	string s;
	float *beep0,beep1,time;
	cin >> tone;
	cin >> bpm;
	cout << bpm << " ";
	while(true){
		if(cin>>s){
			if(s=="1-")beep0=&m[5];
			else if(s=="1#-"||s=="2b-")beep0=&m[6];
			else if(s=="2-")beep0=&m[7];
			else if(s=="2#-"||s=="3b-")beep0=&m[8];
			else if(s=="3-")beep0=&m[9];
			else if(s=="4-")beep0=&m[10];
			else if(s=="4#-"||s=="5b-")beep0=&m[11];
			else if(s=="5-")beep0=&m[12];
			else if(s=="5#-"||s=="6b-")beep0=&m[13];
			else if(s=="6-")beep0=&m[14];
			else if(s=="7b-"||s=="6#-")beep0=&m[15];
			else if(s=="7-")beep0=&m[16];
			else if(s=="1")beep0=&m[17];
			else if(s=="1#"||s=="2b")beep0=&m[18];
			else if(s=="2")beep0=&m[19];
			else if(s=="2#"||s=="3b")beep0=&m[20];
			else if(s=="3")beep0=&m[21];
			else if(s=="4")beep0=&m[22];
			else if(s=="4#"||s=="5b")beep0=&m[23];
			else if(s=="5")beep0=&m[24];
			else if(s=="5#"||s=="6b")beep0=&m[25];
			else if(s=="6")beep0=&m[26];
			else if(s=="7b"||s=="6#")beep0=&m[27];
			else if(s=="7")beep0=&m[28];
			else if(s=="1+")beep0=&m[29];
			else if(s=="1#+"||s=="2b+")beep0=&m[30];
			else if(s=="2+")beep0=&m[31];
			else if(s=="2#+"||s=="3b+")beep0=&m[32];
			else if(s=="3+")beep0=&m[33];
			else if(s=="4+")beep0=&m[34];
			else if(s=="4#+"||s=="5b+")beep0=&m[35];
			else if(s=="5+")beep0=&m[36];
			else if(s=="5#+"||s=="6b+")beep0=&m[37];
			else if(s=="6+")beep0=&m[38];
			else if(s=="7b+"||s=="6#+")beep0=&m[39];
			else if(s=="7+")beep0=&m[40];
			else {
				cerr<<"读取乐谱错误，请检查乐谱\n";
				return 1;
			}
		}
		else break;
		if(cin>>time)beep1=time*bpm;
		else break;
		cout << *changeTone(beep0,tone) << ' ' << time<< ' ';
		i++;
	}/*
	for(map<string,float>::iterator it=mp.begin();it!=mp.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	*/
	return 0;
}
