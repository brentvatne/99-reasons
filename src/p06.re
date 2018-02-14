open Helpers;

let isPalindrome = (xs) => xs == List.rev(xs);

let run = () => {
  test("Detects if it is", ["x", "a", "m", "a", "x"] |> isPalindrome |> is(true));
  test("Detects if it is not", ["a", "b"] |> isPalindrome |> is(false))
};