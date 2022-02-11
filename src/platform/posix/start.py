import os
import sys
if not os.path.exists('src/platform/posix/a.out'):
    os.system('g++ src/platform/posix/beep.cpp -o src/platform/posix/a.out')
f=os.popen('src/platform/posix/a.out {}'.format(sys.argv[1]))
os.system('src/platform/posix/music.sh '+f.read())
