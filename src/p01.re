open Helpers;

let last = (l) =>
  switch l {
  | [] => None
  | _ => Some(List.nth(l, List.length(l) - 1))
  };

let run = () => {
  test("Gets the last item", ["a", "b", "c", "d"] |> last |> unwrap === "d");
  test("Returns None if empty", [] |> last === None)
};