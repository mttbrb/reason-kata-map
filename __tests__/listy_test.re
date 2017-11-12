open Jest;
open Expect;
/*open Expect.Operators;*/    
open Listy;

describe("Map", () => {

  let square = (x) => (x * x);
      
  test("map []", () =>
    expect(Listy.map(square,[])) |> toEqual([]));

  test("map square", () =>
    expect(Listy.map(square,[1, 2, 3])) |> toEqual([1, 4, 9]));

  test("map String.toUpperCase", () =>
    expect(Listy.map(Js.String.toUpperCase,["hello","reason"])) |> toEqual(["HELLO","REASON"]));
  
  test("map String.length", () =>
    expect(Listy.map(Js.String.length,["hello","reason"])) |> toEqual([5, 6]))

});
