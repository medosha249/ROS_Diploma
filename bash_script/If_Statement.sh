#!/bin/bash

read -p "Please Enter Your Name: " name 
read -sp "Please Enter Your Pass: " pass

echo -e "        "
if [ $name == "mohammed" -a $pass -eq 123 ]
then
    echo -e "login succesfully"
elif [ $name == "medosha" -a $pass -eq 321 ]
then
    echo -e "login succesfully"
else
    echo -e "WRONG INFO!"
fi
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