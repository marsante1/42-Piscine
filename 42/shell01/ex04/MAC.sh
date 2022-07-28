#!/bin/sh
ifconfig | grep "ether " | awk '{print substr($0, 8)}' | tr -d ' '
