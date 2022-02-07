// Variables hold primitive data or reference to data
// Variables are immutable by default
// Rust is a block-scoped langauge

pub fn run() {
    println!("----------variables.rs-----------");
    let name = "TEST";
    let age = 12;
    // age = 32; -- connot assign it again:immutable

    let mut new_age = 18;
    println!(
        "My name is {} and I am {} and this is my new age : {}",
        name, age, new_age
    );
    new_age = 20;
    println!(
        "My name is {} and I am {} and this is my new age : {}",
        name, age, new_age
    );

    // Define costant
    const ID: i32 = 001; //should assgn datatype with const explicitly i.e integer 32 bit (i32)
    println!("ID:{}", ID);

    // Assgn Multiple varibles
    let (my_name, my_age) = ("TEST_2", 23);
    println!("{} is {}", my_name, my_age);
}
