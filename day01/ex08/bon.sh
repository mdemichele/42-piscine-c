#!/bin/sh
ldapsearch -Q "(sn=*bon*)" | grep "search:" | cut -d: -f2 | sed 's/[[:space:]]//g'
