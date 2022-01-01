# Test

> 1 gen

By considering the simmetry condition applied to the plate could be good idea considerer the crack as an half problem. 

So the $K_I$ formulas:

![](pastedFig/2022-01-01-20-54-50.png =75%x)

And 

![](pastedFig/2022-01-01-20-55-20.png =75%x)

So:

```mathematica
(*\[Beta]=Sqrt[Sec[Pi a /L]]*)
\[Beta] = 
  Sqrt[(4 L/(Pi a)) Tan[Pi a /(4 L)]];
(*\[Sigma]inf=\[Sigma]y\[LeftDoubleBracket]1,2\[RightDoubleBracket];*)
\
\[Sigma]inf = q;
Kfactor = \[Beta] \[Sigma]inf Sqrt[Pi a];
Kfactor2 = \[Sigma]inf*
   Sqrt[Pi a]*((1 - (a/(2 L)) + 0.326*(a/L)^2)/Sqrt[1 - (a/L)]);
Print["Fattore di intensificazione degli sforzi teorico 1: ", 
 N[Kfactor]]
Print["Fattore di intensificazione degli sforzi teorico 2: ", 
 N[Kfactor2]]
```