open Helpers;

let at = (n, xs) =>
  if (List.length(xs) >= n) {
    Some(List.nth(xs, n - 1))
  } else {
    None
  };

let run = () => {
  test("Gets the 3rd element", ["a", "b", "c", "d", "e"] |> at(3) |> unwrap |> is("c"));
  test("Gets None if less than n elements", ["a"] |> at(3) |> is(None));
};