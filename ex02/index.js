const factorial = number => {
    let product = 1;
    for (let i = 2; i <= number; i++) {
        product = product * i;
    }
    return product;
};

if (process.argv.length < 3) {
    process.exit(84);
}

const arg = process.argv[2];
const result = factorial(arg);

if (result == 1) {
    console.log("Le résultat est " + result + ", j'adore <3");
} else {
    console.log(result);
}