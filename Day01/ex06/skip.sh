#!/bin/bash
ls -l | awk 'NR == 1 || NR % 3 == 0'
