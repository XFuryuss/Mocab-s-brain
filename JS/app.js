// Brain for Mocab in JS, coded and provided by Mocab
const brainStatus = prompt(`
    Mocab's currently usning '0' brincels
    Do you want to turn on Mocab's brain? Allowed commands: y/n :D`).toLowerCase();
if (brainStatus === "y" || brainStatus === "yes") {
    const braincellCount = prompt("How many brincels to activate?");

    // Function that manages Mocab's brain
    if (isNaN(braincellCount)) { // Discard the invalid input
        alert("Error: I don't recognize that command. :(");
    } else {
        if (braincellCount === 1) {
            alert("Mocab's currently usning '1' brincel.\nMocab: Quack!");
        } else if (braincellCount <= 0) {
            alert("What are you doing!? He already has '0' brincels pls. :(");
        } else {
            alert("Sori Mocab doesn't support using more than '1' brincel. ;(");
        }
    }
} else if (brainStatus === "n" || brainStatus === "no") {
    alert("I see you like your Mocab vanilla. :)");
} else {
    alert("Error: I don't recognize that command. :(");
}