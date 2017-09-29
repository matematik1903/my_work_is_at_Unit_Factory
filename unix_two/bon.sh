ldapsearch -x "cn=* *bon*" | grep cn: | wc -l | tr -d ' '
