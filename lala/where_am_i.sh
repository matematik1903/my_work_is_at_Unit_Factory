var=$(ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d' ' -f2)
if test -z "$var"
then
    echo "Je suis perdu!"
else
    echo $var | tr ' ' '\n'
fi