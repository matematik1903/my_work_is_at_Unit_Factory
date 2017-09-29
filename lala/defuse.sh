stat -r bomb.txt | cut -d ' ' -f9 | awk '{ print $1 - 1 }'
