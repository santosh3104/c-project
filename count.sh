#!/bin/bash
#
#
df -h | sed "1d" > temp

while read line 
do
	run=$( echo "$line" | awk -F " " '{print $(NF -1)}' | sed 's/%//g')
	if [ "$run" -gt 20 ]
	then
		echo "$line" | awk -F " " '{print $1}'
	fi
done < temp
rm temp
