open Helpers;

/*  Find the last but one (last and penultimate) elements of a list. (easy) */
let lastTwo = (l) =>
  switch l {
  | [_] => None
  | [] => None
  | a => Some(List.nth(a, List.length(a) - 2))
  };

let run = () => {
  test("Gets the second last", ["a", "b", "c", "d"] |> lastTwo |> unwrap === "c");
  test("None if none", [] |> lastTwo === None);
  test("None if one", ["a"] |> lastTwo === None);
}