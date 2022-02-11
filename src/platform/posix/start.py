import os
import sys
os.system('g++ beep1.cpp')
f=os.popen('./a.out {}'.format(sys.argv[1]))
os.system('./music.sh '+f.read())
