// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Helpers$NineNine = require("./helpers.bs.js");

function rev(list) {
  var _acc = /* [] */0;
  var _list = list;
  while(true) {
    var list$1 = _list;
    var acc = _acc;
    if (list$1) {
      _list = list$1[1];
      _acc = /* :: */[
        list$1[0],
        acc
      ];
      continue ;
      
    } else {
      return acc;
    }
  };
}

function run() {
  return Helpers$NineNine.test("It reverses the thing", Helpers$NineNine.equals(/* :: */[
                  "c",
                  /* :: */[
                    "b",
                    /* :: */[
                      "a",
                      /* [] */0
                    ]
                  ]
                ], rev(/* :: */[
                      "a",
                      /* :: */[
                        "b",
                        /* :: */[
                          "c",
                          /* [] */0
                        ]
                      ]
                    ])));
}

exports.rev = rev;
exports.run = run;
/* No side effect */
