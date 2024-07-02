#!/bin/bash
read -p "Please Enter The username: " username
read -sp "Enter Your Password: " pass
echo -e "       "
if [ $username == "mohammed" -a $pass -eq 71011 ]
then
    echo -e "Welcome $username "
elif [ $username == "medosha" -a $pass -eq 71011 ]
then
    echo -e "Welcome $username "
else
    echo -e "Login Failed Please Try Again"
fi