<?php
// Brain for Mocab, coded and provided by XFuryus
// Converted to PHP by Lily who likes slow code
// Warning: This code is intentionally slow because PHP

// Simulate PHP being PHP (very slow)
sleep(2);

// UI displays the current number of active brain cells in Mocab's brain
echo "Loading Mocab's brain cells...\n";
sleep(1); 
echo "Still loading...\n";
sleep(1);
echo "Almost there...\n";
sleep(1);
echo "Mocab's currently using '0' brincels.\n";

// Ask user if they want to activate Mocab's brain
echo "\nDo you want to turn on Mocab's brain? Allowed commands: y/n :D\n";
echo "-> ";
$brainStatus = trim(fgets(STDIN));

// Process user input very slowly because PHP
sleep(1);
echo "Processing your request...\n";
sleep(2);

if (strtolower($brainStatus) === 'y') {
    echo "\nHow many brincels to activate?\n";
    echo "-> ";
    $braincells = trim(fgets(STDIN));
    
    // More intentional slowness
    echo "Attempting to activate brincels...\n";
    sleep(2);
    echo "PHP is thinking really hard about this...\n";
    sleep(1);
    
    if (is_numeric($braincells)) {
        $braincells_int = intval($braincells);
        if ($braincells_int <= 0) {
            echo "\nWhat are you doing!? He already has '0' brincels pls. :(\n";
            echo "Error 404: Brain cells not found\n";
        } else if ($braincells_int === 1) {
            echo "\nInitializing single brincel...\n";
            sleep(2);
            echo "Mocab's currently using '1' brincel.\n";
            sleep(1);
            echo "Mocab: Quack!\n";
            echo "Warning: PHP has detected unusual signs of intelligence\n";
        } else {
            echo "\nError: Too many brincels requested!\n";
            sleep(1);
            echo "Sori Mocab doesn't support using more than '1' brincel. ;(\n";
            echo "PHP.exe has stopped working\n";
        }
    } else {
        echo "\nError: That's not a number! PHP is confused :(\n";
        echo "Have you tried turning it off and on again?\n";
    }
} else if (strtolower($brainStatus) === 'n') {
    echo "\nCalculating response...\n";
    sleep(2);
    echo "I see you like your Mocab vanilla. :)\n";
    echo "PHP approves of this decision\n";
} else {
    echo "\nError: Invalid input detected after lengthy analysis\n";
    sleep(1);
    echo "PHP suggests: Try typing actual commands next time :(\n";
}

// Return with dramatic delay
sleep(1);
echo "Preparing to exit...\n";
sleep(1);
exit(39); // Because PHP likes to be special
