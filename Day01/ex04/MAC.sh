#!/bin/sh
export PATH="$PATH:."
ifconfig -a link | grep "ether*" | tr -d ' ' | tr -d '\t' | cut -c 6-42
