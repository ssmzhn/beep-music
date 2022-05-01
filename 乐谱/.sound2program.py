import sys
file=sys.argv[1]
f=open(file)
s=f.split()
print("""
include<windows.h>
using namespace std;
int main(){
""")
tone=s[0]
bpm=s[1]
for x in s[2:]:
    print('    Beep({},{});',format(x))
