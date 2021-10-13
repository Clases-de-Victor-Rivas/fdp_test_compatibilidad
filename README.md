# fdp_test_compatibilidad
Ejemplo de "Test de Compatibilidad" presentado en clase.

Permite mostrar cómo se utilizan distintos bucles dentro de una aplicación en C++.

## [v1.0](https://github.com/Clases-de-Victor-Rivas/fdp_test_compatibilidad/releases/tag/v1.0)
La primera versión de todas: simplemente pregunta dos números y los compara para ver si han coincidido los dos jugadores.

```
Jugador número 1, indique un número: 10
Jugador número 2, indique un número: 32
No habéis coincidido: sois incompatibles
Fin del programa
```

## [v2.0](https://github.com/Clases-de-Victor-Rivas/fdp_test_compatibilidad/releases/tag/v2.0)
Cada uno de los datos que piden los jugadores DEBE estar entre 1 y 50, lo cual se comprueba con un filtro de tipo __do{...}while();__

```
Jugador número 1, indique un número entre 1 y 50: 90
Jugador número 1, indique un número entre 1 y 50: 100
Jugador número 1, indique un número entre 1 y 50: -34
Jugador número 1, indique un número entre 1 y 50: 5
Jugador número 2, indique un número entre 1 y 50: 200
Jugador número 2, indique un número entre 1 y 50: 300
Jugador número 2, indique un número entre 1 y 50: 100
Jugador número 2, indique un número entre 1 y 50: 5
Habéis coincidido: sois compatibles
Fin del programa
```

## [v3.0](https://github.com/Clases-de-Victor-Rivas/fdp_test_compatibilidad/releases/tag/v3.0)
Repito todo el proceso (de pedir dos números, uno a cada usuario, y comprobar si son iguales) 5 veces, usando un bucle __for()__.

```
Comprobación 1 de 5

Jugador número 1, indique un número entre 1 y 50: 2
Jugador número 2, indique un número entre 1 y 50: 4
No habéis coincidido: sois incompatibles

Comprobación 2 de 5

Jugador número 1, indique un número entre 1 y 50: 3
Jugador número 2, indique un número entre 1 y 50: 2
No habéis coincidido: sois incompatibles

Comprobación 3 de 5

Jugador número 1, indique un número entre 1 y 50: 7
Jugador número 2, indique un número entre 1 y 50: 7
Habéis coincidido: sois compatibles

Comprobación 4 de 5

Jugador número 1, indique un número entre 1 y 50: 100
Jugador número 1, indique un número entre 1 y 50: 23
Jugador número 2, indique un número entre 1 y 50: 23
Habéis coincidido: sois compatibles

Comprobación 5 de 5

Jugador número 1, indique un número entre 1 y 50: 4
Jugador número 2, indique un número entre 1 y 50: 1
No habéis coincidido: sois incompatibles

```
