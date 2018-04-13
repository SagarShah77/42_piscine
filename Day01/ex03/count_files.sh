#!/bin/sh
find . \( -type d -or -type f \) | wc -l | bc
