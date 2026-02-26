¿Por qué compila? Compila porque C no revisa si el número que usas está dentro del arreglo. Solo calcula una dirección en memoria aunque esté mal el número.
¿Por qué es peligroso? Porque estás entrando a una parte de la memoria que no pertenece al arreglo. Eso puede hacer que el programa falle o que cambie datos que no debería.
¿Qué revela sobre la memoria? Que los arreglos están guardados seguidos en memoria y que C no guarda el tamaño del arreglo. El programador tiene que cuidar no salirse.
