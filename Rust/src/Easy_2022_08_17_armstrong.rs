fn armstrong(num: i32) -> bool
{
    let size = num.to_string().len();
    let mut n = num;
    let mut sum : i32 = 0;
    while n > 0
    {
        sum += (n % 10).pow(size as u32);
        n /= 10;
    }

    if sum == num{
        true
    } else {
        false
    }



}



fn main() {
    println!("{:?}", armstrong(154));

}
