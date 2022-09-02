#!/bin/sh
echo $GZCTF_FLAG > /flag
chmod 400 /flag
export GZCTF_FLAG=""

/getflag
