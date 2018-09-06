#!/bin/sh
ROOTDIR=`/bin/pwd`
for dir in `find . -type d | grep Chapter*/`
do
  make -C "${dir}"/"${ddir}" clean
  echo " "
done
