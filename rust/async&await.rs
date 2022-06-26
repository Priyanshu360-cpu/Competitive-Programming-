async fn trialing() ->u32{
    42
}
async fn retriever(){
    println!("{}", trialing().await);
}
fn main() {
  retriever();
}
