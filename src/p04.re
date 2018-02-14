open Helpers;

/* Find the number of elements of a list. (easy) */

/* let length = (xs) => {
     let rec _length = (xs, n) =>
       switch xs {
       | [] => n
       | [_, ...xs] => _length(xs, n + 1)
       };
     _length(xs, 0)
   }; */
let rec length = (xs) =>
  switch xs {
  | [] => 0
  | [_, ...xs] => 1 + length(xs)
  };

let run = () => {
  test("Gets length of 3", ["a", "b", "c"] |> length |> is(3));
  test("Gets length of 0", [] |> length |> is(0))
};