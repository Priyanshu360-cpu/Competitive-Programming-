
echo "Bash Calculator"
echo "Enter First Data"
read data1
echo "Enter Second Data"
read data2
echo "Press 1 for addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division"
read data3;
if [ $data3 -eq 1 ]
then
 val=`expr $data1 + $data2`
 echo "$val"
else
 echo "\n"
fi
