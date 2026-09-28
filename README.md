# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

El programa pide el ancho y el alto de un rectàngulo y calcula su àrea y su perimetro. Sirve para conocer estas medidas a partir de sus dimensiones. 

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. Ancho del rectàngulo: double, en cm.
2. Alto del rectàngulo: double, en cm.

**Salidas:**
1. Àrea del rectàngulo: en cm2
2. Perìmetro del rectàngulo, en cm.

**Fórmulas** (área y perímetro):
Àrea = ancho x alto y Perìmetro= 2 x (ancho+alto) 

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- El ancho debe ser mayor que 0.
- El alto debe ser mayor que 0.

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
La vuelve a pedir hasta que sea mayor que 0, porque una medida de 0 o negativa no tiene sentido para un rectàngulo. 

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
leerDecimal detecta si un nùmero no es vàlido. Mi programa revisa si el nùmero es mayor que 0. 

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
Al salir del ciclo, el ancho siempre es mayor que 0. 

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | 5 | 3 | 15cm2 | 16cm |
| 2 (cuadrado) | 4 | 4 | 16cm2 | 16 |
| 3 (con decimales) | 2.5 | 4 | 10cm2 | 13cm |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí
**¿Tuve que corregirla?** No
**¿Cuántas versiones de mi receta escribí hasta la final?** 1

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)

```
Area y perimetro de un rectangulo
Ingresa el ancho: Ancho: 5
Ingresa el alto: Alto: 3
Area: 15 cm2
Perimetro: 16 cm
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
13. Porque 2 x 5 +3 = 13 y no es la fòrmula del perìmetro. 

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
Mostraba un àrea negativa y un perìmetro incorrecto. No tiene sentido porque una medida no puede ser negativa. 

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | 15,16 | Si |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | 16,16 | Si |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | 10,13 | Si |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | 0.01,0.4| Si |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | Rechazado | Si |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | Rechazado | Si |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | Rechazado | Si |
| Caso propio 1 | 2 | 3 | àrea 6, perìmetro 10 | 6,10 | Si |
| Caso propio 2 | 10 | 2 | àrea 20, perìmetro 24 | 20,24 | Si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Validaciòn de ancho y alto | Agreguè while para rechazar valores <= 0 | Si |
| 2 | Càlculo de àrea y perìmetro | Agreguè las fòrmulas correspondientes | Si |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| Còmo manejar correctamente entradas de texto? | Usè leerDecimal para validar la Entrada. |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendì a convertir una receta pseudocòdigo y despuès en C++, tambien aprendi a validar los datos antes de realizar los càlculos.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Probarìa cada parte del programa desde el principio.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo màs difìcil fue validar las entradas. Lo resolvì usando ciclo while.

**¿Qué pregunta me quedó sin responder?**
¿Còmo puedo mejorar la validaciòn de entradas?

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
Fue un poco difìcil al principio, pero despuès fue màs facil. La proxima vez probarìa la receta con màs casos. Tambièn revisarìa cada entrada antes de continuar.

## 13. Lista de verificación antes de entregar (Fase 5)

- [x] Llené todas las secciones (no quedan `_____`)
- [x] Escribí mi receta completa en `RECETA.md` antes de programar
- [x] Mi programa compila sin advertencias
- [x] Probé todos los casos de la tabla
- [x] Hice los Experimentos A y B y dejé el código correcto al terminar
- [x] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom