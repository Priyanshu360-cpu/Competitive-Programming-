Calculator(){
ping -c 1 priyanshu.gq
echo "Bash Calculator"
echo "Enter First Data"
read data1
echo "Enter Second Data"
read data2
printf "Press 1 for addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\n"
read data3;
if [ $data3 -eq 1 ]
then
 val=`expr $data1 + $data2`
 echo "$val"
else
if [ $data3 -eq 2 ]
then
 val=`expr $data1 - $data2`
 echo "$val"
else
if [ $data3 -eq 3 ]
then
 val=`expr $data1 \* $data2`
 echo "$val"
else
if [ $data3 -eq 4 ]
then
 val=`expr $data1 / $data2`
 echo "$val"
fi
fi
fi
fi
printf "WANNA TRY AGAIN? 1/0 \n"
read data4
if [ $data4 -eq 1 ]
then
Calculator
fi
}
Calculator
