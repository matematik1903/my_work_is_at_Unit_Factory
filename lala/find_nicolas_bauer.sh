cat $1 | grep -i -w "Nicolas" | grep -i -w "Bauer" | grep "-" | awk '{print $(NF-1)}'
