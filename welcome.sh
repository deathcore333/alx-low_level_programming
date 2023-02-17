#!/bin/bash
#
#welcome.sh

name=$1
date=$(date)
whoami=$(whoami)
whereami=$(pwd)
startsession=$(cd alx-low_level_programming)
echo "Hellow $name!!"
sleep 1
echo "I hope you are having a great day!!"
sleep 1
echo "Stay strong as we embark on this course to become the best Devops."
sleep 2

echo "Today is $date. You are currently logged in as $whoami, and the current working directory is $whereami."
sleep 1
echo "Enjoy your Session!!!"
sleep 1
echo "Good Luck!!"
echo "lets begin $startsession."

