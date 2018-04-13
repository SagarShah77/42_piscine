#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | head -n $FT_LINE1 | tail -n $FT_LINE2 | tr '\n' ',' | sed 's/,/, /g' | sed 's/\(.*\). /\1./' | tr -d "\n"
