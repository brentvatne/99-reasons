
let unwrap = (a) =>
  switch a {
  | Some(a) => a
  | None => failwith("Unexpected None")
  };

let is = (x, y) => x === y;
let equals = (x, y) => x == y;

let test = (msg, b) =>
  if (b) {
    Js.log({j|✅  $msg|j})
  } else {
    Js.log({j|🚫  $msg|j})
  };