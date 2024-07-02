# #!/bin/bash
#echo "Hello,World"

#name="mohammed"


#age=19

#echo "my name is $name , Age is $age"

#coma=$(ls)

#path=`pwd`

#Date=$(date)

#echo $coma
#echo $path
#echo $Date

# expr 3 + 4
#expr 3 \* 4
# read -p "Please Enter Your Name: " name 
# read -sp "Please Enter Your Pass: " pass


# if [ $name == "mohammed" -a $pass -eq 123 ]
# then
#     echo "login succesfully"
# elif [ $name == "medosha" -a $pass -eq 321 ]
# then
#     echo "login succesfully"
# else
#     echo "WRONG INFO!"
# fi

# read -p "Please Enter Command: " $command

# if [ -f $command ]
# then
#     echo "$command is available"
# else
#     echo "Command is not avilable"
#     echo "install $command using : "
#      sudo apt update && sudo apt install $command
# fi
# $command


# cd ..
# list=`ls`


# for i in $list
# do
#     echo $list
#     sleep 0.1
# done


# mynum=1

# while [ $mynum -le 10 ]
# do
#     echo $mynum
#     mynum=$(($mynum + 1))
#     sleep 0.5
# done


print()
{
    echo "Hello From Function"
    return 5
}

print
echo $?

fun()
{
    echo "Parameters is " $1 $2
    return 10
}

fun medo 123
echo $?
