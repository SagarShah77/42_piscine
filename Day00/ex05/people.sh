#!/bin/sh/
ldapsearch -x -LLL "(cn=z*)" cn | grep '^cn:' | sort  -r --ignore-case | cut -c 5-99
