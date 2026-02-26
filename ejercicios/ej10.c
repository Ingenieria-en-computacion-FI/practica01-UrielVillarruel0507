int gigante[10000000];
----Si falla, ¿por qué?-----

Porque el arreglo es demasiado grande para la pila (stack).

Si int ocupa 4 bytes:

10,000,000 × 4 = 40,000,000 bytes
≈ 40 MB

La pila es mucho menor (8MB).

------ ¿Dónde se almacena?------

Declarado dentro de una función → en el stack.

----Solución sin memoria dinámica---

Declararlo como global:

int gigante[10000000]; 

O hacerlo más pequeño.
