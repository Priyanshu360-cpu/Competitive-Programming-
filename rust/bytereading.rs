use tokio::prelude::Future;
fn main() {
    let task = tokio::fs::read("foo.txt").map(|data| {
        println!("foo.txt contains {} bytes", data.len());
    }).map_err(|e| {
        eprintln!("IO error: {:?}", e);
    });
    tokio::run(task);
}
