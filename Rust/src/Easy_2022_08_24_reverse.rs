pub fn reverse(input: &str) -> String {
    let mut res = String::new();
    let mut i : usize = input.len();
    for x in input.chars().rev()
    {
        res.push_str(&x.to_string());
    }
    return res;
}

fn main() {
    let str_of_emojis = "子猫";

    println!("{}", reverse(str_of_emojis));
 }