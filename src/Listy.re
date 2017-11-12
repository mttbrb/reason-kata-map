module Listy = {
    let rec map = (f, args) =>  
        switch args {
        | [] => []
        | [hd, ...tl] => [f(hd), ...map(f,tl)]
        };
};  