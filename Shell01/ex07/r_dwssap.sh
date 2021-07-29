#!/bin/sh

cat /etc/passwd | sed -e '/^#/d' | awk 'NR%2==0' | rev | sort -t ':' -k7 -r | tr -d ':' | cut -d'*' -f 2 | sed -n "$FT_LINE1","$FT_LINE2"p | tr '\n' ','  | sed 's/,/, /g'  |  sed 's/, $/./' | tr -d '\n'
