#!/bin/dash

if [ $# -lt 3 ]; then
    echo "Usage: $0 tempo freq dur [freq dur freq dur...]" >&2
    exit 1
fi

tempo=$1; shift

tmpdir=$(mktemp -d)

while [ -n "$*" ]; do
    freq=$1; shift
    dur=$1;  shift
    dur=$(echo "$dur*(60/$tempo)"|bc -l)
    sox -e mu-law -r 8000 -n -t raw - synth $dur sine $freq >>$tmpdir/grubtune.ul 2> /dev/null
done

play -q -c1 -r 8000 $tmpdir/grubtune.ul

rm -r $tmpdir

