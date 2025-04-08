# Brain for Mocab, coded and provided by XFuryus
# Converted to Python by dalatexcoder
# We use spaces instead of tabs as dalatexcoder(I) is(am) on a phone
"Main function goes here"
    # UI displays the current number of active brain cells in Mocab's brain.
if True:
    print("Mocab's currently usning '0' brincels.\n");
    print("\nDo you want to turn on Mocab's brain? Allowed commands: y/n :D\n");
    brainStatus = input("-> ");
    
    # Clear any leftover input[Not needed for this instance in Py]

    # Function that manages Mocab's brain
    if brainStatus == "y" or brainStatus == "Y":
        print("\nHow many brincels to activate?\n");
        braincells = input("-> ");
        try: 
            braincells_int = int(braincells);
        except:
        	print("\nError: I don't recognize that command. :(\n");
        else:
            if braincells_int <= 0:
                print("\nWhat are you doing!? He already has '0' brincels pls. :(\n");
            elif braincells_int == 1:
                print("\nMocab's currently usning '1' brincel.\nMocab: Quack!\n");
            else:
                print("\nSori Mocab doesn't support using more than '1' brincel. ;(\n");
    elif brainStatus == "n" or brainStatus == "N":
        print("\nI see you like your Mocab vanilla. :)\n");
    else:
        print("\nError: I don't recognize that command. :(\n");
    #return 39;
