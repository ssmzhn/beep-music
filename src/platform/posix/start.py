import os
import sys
path=os.getcwd()
if not os.path.exists(path+'/a.out'):
    os.system('g++ {}/beep.cpp -o {}/a.out'.format(path,path))
f=os.popen('{}/a.out {}'.format(path,sys.argv[1]))
os.system('{}/music.sh '.format(path)+f.read())
