pub fn run() {
    // Print to console
    println!("--------------- Hello from `print.rs` file------------------");

    // Basic formating
    println!("Number : {}", 1);
    println!("{} is from {}", "Test", "Mars");

    // Positional Arguments
    println!(
        "{0} is from {1} and {0} likes to {2}",
        "Test", "Mars", "code"
    );

    // Named Arguments
    println!(
        "{name} likes to play {activity}",
        name = "John",
        activity = "Football"
    );

    // Placeholder traits
    println!("Binary: {:b} Hex: {:x} Octal: {:o}", 10, 10, 10);

    // Placeholder for debug trait
    println!("{:?}", (12, true, "hello"));

    // Basic math
    println!("10 + 10 = {}", 10 + 10);
}
