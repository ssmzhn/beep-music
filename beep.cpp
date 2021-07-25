#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string s;
float b;
int main(int argc,char* argv[]){
	freopen(argv[1],"r",stdin);
	const int bpm=300;
	int i=0;
	float beep0,beep1;
	while(true){
		if(cin>>s){
			if(s=="1-")beep0=261.6;
			else if(s=="1#-"||s=="2b-")beep0=277.2;
			else if(s=="2-")beep0=293.7;
			else if(s=="2#-"||s=="3b-")beep0=311.1;
			else if(s=="3-")beep0=329.6;
			else if(s=="4-")beep0=349.2;
			else if(s=="4#-"||s=="5b-")beep0=370;
			else if(s=="5-")beep0=392;
			else if(s=="5#-"||s=="6b-")beep0=415.3;
			else if(s=="6-")beep0=440;
			else if(s=="7b-"||s=="6#-")beep0=466.2;
			else if(s=="7-")beep0=493.9;
			else if(s=="1")beep0=532.25;
			else if(s=="1#"||s=="2b")beep0=554.4;
			else if(s=="2")beep0=587.33;
			else if(s=="2#"||s=="3b")beep0=622.3;
			else if(s=="3")beep0=659.25;
			else if(s=="4")beep0=698.46;
			else if(s=="4#"||s=="5b")beep0=740.0;
			else if(s=="5")beep0=783.99;
			else if(s=="5#"||s=="6b")beep0=830.6;
			else if(s=="6")beep0=880;
			else if(s=="7b"||s=="6#")beep0=932.3;
			else if(s=="7")beep0=987.76;
			else if(s=="1+")beep0=1046.5;
			else if(s=="1#+"||s=="2b+")beep0=1109;
			else if(s=="2+")beep0=1175;
			else if(s=="2#+"||s=="3b+")beep0=1245;
			else if(s=="3+")beep0=1319;
			else if(s=="4+")beep0=1397;
			else if(s=="4#+"||s=="5b+")beep0=1480;
			else if(s=="5+")beep0=1568;
			else if(s=="5#+"||s=="6b+")beep0=1661;
			else if(s=="6+")beep0=1760;
			else if(s=="7b+"||s=="6#+")beep0=1865;
			else if(s=="7+")beep0=1976;
			else printf("读取乐谱错误，请检查乐谱\n");
		}
		else break;
		if(cin>>b)beep1=b*bpm;
		else break;
		Beep(beep0,beep1);
		i++;
	}
	return 0;
}
