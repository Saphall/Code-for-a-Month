/*
 Variables declaration : `camelCase`, meaningful words
 Varialbes declaration : contains : `numbers(not at beginning)`, `letters`, `_`, `not reserved words`
 */

let firstName = "__TEST__";
let PI = 3.14; // constants as capital letters

console.log(firstName);
console.log(PI);

/*
Ways of declaring Variables :
1. let : can change later (mutable, can be null, block scoped)
2. var : (avoid this) same as let but scope is global (mutable, function scoped) 
3. const : (use this) cannot be changed (immutable, cannot be null)
*/

let age = 20;
age = 30;

const birthyear = 2020;
// birthyear = 2021;  -- cannot be changed

var job = "programmer";
job = "teacher";
