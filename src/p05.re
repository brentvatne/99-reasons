open Helpers;

let rev = (list) => {
  let rec _rev = (acc, list) =>
    switch list {
    | [] => acc
    | [x, ...xs] => _rev([x, ...acc], xs)
    };
  _rev([], list)
};

let run = () => {
  test("It reverses the thing", ["a", "b", "c"] |> rev |> equals(["c", "b", "a"]))
};