fn trialing(y:&mut u32){
    *y=42;
}
fn formal(x:u32){
    println!("{}",x);
}
fn main() {
    let mut x:u32=45;
    formal(x);
    trialing(&mut x);
  println!("{}",x);
}
