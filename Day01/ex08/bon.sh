#!/bin/sh
ldapsearch -Q sn="*bon*" | grep sn: | wc -l | bc
