/*
1. Number : Floating point numbers  
2. String : Sequence of characters
3. Boolean : Logical type - `true` or `false`
4. Undefined : Value taken by variable that is not yet defined - `empty value`
5. Null : `empty value`
6. Symbol (ES2015) : Value that is unique and cannot be changed 
7. BigInt (ES2020) : Larger integers that Number type cannot hold
 */

let javascriptIsFun = true;
console.log(typeof javascriptIsFun);

javascriptIsFun = "YES!"; // dynamic variable type
console.log(typeof javascriptIsFun);

console.log(typeof 40);

let year;
console.log(typeof year);

year = 2022; // dynamic type
console.log(typeof year);

console.log(typeof null); // weird type of object is shown : but it is null
