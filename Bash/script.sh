#!/usr/bin/bash
# Brain for Mocab in Bash, coded and provided by Mocab

echo "Mocab's currently usning '0' brincels"
echo "Do you want to turn on Mocab's brain?"
echo -n “Allowed commands: y/n :D“
read brainStatus

if [[ $brainStatus == "y" || $brainStatus == "yes" ]]; then
    echo “How many brincels to activate?”
    read braincellCount

    if ! [[ $braincellCount =~ ^[0-9]+$ ]]; then
        echo -e "\e[31mError: I don't recognize that command. :("
    else
        if [[ $braincellCount -eq 1 ]]; then
            echo -e "\e[32mMocab's currently usning '1' brincel."
            echo -e "\e[33mMocab: Quack!"
        elif [[ $braincellCount -le 0 ]]; then
            echo -e "\e[31mWhat are you doing!? He already has '0' brincels pls. :("
        else
            echo -e "\e[31mSori Mocab doesn't support using more than '1' brincel. ;("
        fi
    fi
elif [[ $brainStatus == "n" || $brainStatus == "no" ]]; then
    echo -e "I see you like your Mocab vanilla. :)"
else
    echo -e "\e[31mError: I don't recognize that command. :("
fi
