Js.log("this is reason");

/* top level statement %% */
[%%bs.raw {|console.log('this is from javascript');|}];

/* expression % */
let x: string = [%bs.raw {|'string from javascript'|}];
Js.log(x ++ " usable in reason land");

/* access to a javascript value */
[@bs.val] external pi : float = "Math.PI";
let tau = pi *. 2.0;

/* access to a javascript function */
[@bs.val] external alert: string => unit = "alert";
alert("hello");

/* use ref's to get a mutable var */
let r = ref(5);
r := r^ + 1;

let res = {
    let x = 23;
    let y = 34;
    x + y
};  