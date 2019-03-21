#!/bin/bash
FT_LINE1=8
FT_LINE2=16
cat /etc/passwd | grep -v "#" | awk 'NR % 2 == 0' | cut -d: -f1 | rev | sort -r | sed -n "$FT_LINE1,${FT_LINE2}p" | sed -e :a -e '$!N; s/\n/, /; ta' | sed '/$/ s/$/./' | tr -d '\n'