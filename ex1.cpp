var p >= 0;
var a >= 0;

maximize objetivo: 3*p + 5*a;
subject to restricao1: 2*p + 5*a <= 2400;
subject to restricao2: 100 <= p <= 1350;
subject to restricao3: 300 <= a <= 600;

model ex1.cpp;

option solver cplex;

solve;

display objetivo, p, a;