# Elasto-plastic numerical models
### Computational Mechanics of Tissues and Biomaterials
### Biomedical Engineering - University of Rome Tor Vergata

#### Abstract

In this analysis some computational models are introduced for the finite element analysis of isotropic and kinematic hardening behaviors. The response to a cyclic load is analyzed for some stainless steels. These simulations exploit a linear quadratic finite element with elastic-plastic behavior with isotropic and kinematic hardening. These models are fundamental for analyzing the material response following a repeated cyclic load.

---

**Read more [website](https://alessandromastrofini.it/en/2022/01/30/elasto-plastic-hardening-models/)**

---

 ![](https://github.com/mastroalex/elasto-plastic/blob/main/report/figures/patch_425_1054_tex.svg)
 
 ---
 
 Energy redefine:

```mathematica
\[CapitalPsi]e \[DoubleRightTee] \[Lambda]e/
    2 (Tr[\[DoubleStruckCapitalD]e])^2 + \[Mu]e Tr[\
\[DoubleStruckCapitalD]e . \[DoubleStruckCapitalD]e] + 
   1/2 H Tr[Transpose[\[Alpha]] . \[Alpha]];
   ```

   Redefine yelding function:

   ```mathematica
  fg \[DoubleRightTee] 
  SMSSqrt[
    3/2 Tr[
      Transpose[\[Sigma]dev - q] . (\[Sigma]dev - q)]] - (\[Sigma]YO);
  ```

  Does vector derivative require special definition ? Like $\mathbf{q}=-\frac{\partial \Psi}{\partial \boldsymbol{\alpha}}$ or $\mathbf{Q}_{\alpha}=\boldsymbol{\alpha}-\boldsymbol{\alpha}_{n}-\left(\lambda-\lambda_{n}\right) \frac{\partial f}{\partial \mathbf{q}}$ ? 

  Also update:

  ```mathematica
  \[Alpha]n = {{\[DoubleStruckH]gnIO[[4]], \[DoubleStruckH]gnIO[[
     5]]}, {\[DoubleStruckH]gnIO[[5]], \[DoubleStruckH]gnIO[[6]]}};
\[Lambda]n = \[DoubleStruckH]gnIO[[7]];
```

Must update also `q` with `symmetric` flag:

```mathematica
SMSFreeze[q, -SMSD[\[CapitalPsi]e, \[Alpha], "Symmetric" -> True], 
  "Symmetric" -> True];
```

Output for the procedure:
```mathematica
\[DoubleStruckCapitalQ] = {\[DoubleStruckCapitalQ]\[Epsilon][[1, 
    1]], \[DoubleStruckCapitalQ]\[Epsilon][[2, 
    2]], \[DoubleStruckCapitalQ]\[Epsilon][[1, 2]], Qq[[1, 1]], 
   Qq[[2, 2]], Qq[[1, 2]], Q\[Lambda]};
   ```
   ---
   
 
 #### Notes

- [21 dec](/_nb%20file/first_test/README.md) - Testing for the cinematic hardening introduction.
- 22 dec - Kinematic hardening works. Talked with prof. See [first_test README.md](/_nb%20file/first_test/README.md)

> - [x] Before going on create the two different elements for FEM

- 24 dec - Creation of two different elements: `Q1EPS`  and `Q1EPS2` and done patch test.
  
> - [x] Before going one transform the notebook to easly select `Q1EPS` or `Q1EPS2`. Use procedure with `isotropic`/`cinematic`.

- [1 gen](/_nb%20file/test/README.md) - Created `Q1EPS2`. Implemented stress factor calculation.
- 26 gen - Other test and implmented `AnimationOfResponse[]`to export mp4 video of deformation
- [27 gen](/_nb%20file/final/README.md) - Fi notebook.
- 30 gen - Test
- 31 gen - Test
- 3 feb - Edited K, stress intensity factor
