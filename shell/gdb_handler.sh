echo "welcome to Priyanshu's file handler"
echo "Enter the file address: "  
read file_name
h=1
while [ $h -eq 1 ]
do
g++ $file_name
./a.out
rm *.out
echo ""
echo "Do you want to continue? (y/n)"
read ch
if [ $ch = "n" ]
then
h=0
fi
done
