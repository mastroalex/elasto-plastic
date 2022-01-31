> 27 gen

# Final notebook 

## First request

> "Analizzare come varia la risposta strutturale e l'andamento delle tensioni intene al variare delle caratteristiche di hardening."

### Hardening features 

- Hardening modulus
- Yelding stress

### Starting creation of unique code for multiple simulation

```mathematica
DomainDefinition["Q1EPS", "\[Sigma]YO" -> 50, "H" -> 10];
solveSimulation["animation" -> False, "ExportAnimation" -> False];
```

