# Taller 1 Computación Paralela y Distribuída

### Grupo

- Alan Slazak Castro
- Esteban Rojas Rojas

-------------

### Problema
>Se solicita leer un archivo de texto plano (.csv), el cual contiene los promedios de miles de estudiantes 
con el fin de clasificarlos por el siguiente criterio:
>- Los 100 mejores promedios serán escritoes en el archivo "maximos.csv", siendo recomendados para el liceo
  Científico Humanista (con perfil científico).
>- De los estudiantes restantes, los 100 mejores promedios entre Arte y Educación Física serán escritoes en 
  el archivo "artisticos.csv", siendo recomendados para el liceo Artístico.
>- De los estudiantes restantes, los 100 mejores promedios entre Lengua e Historias erán escritoes en el archivo 
  "humanismo.csv", siendo recomendados para el liceo Humanista.
>- De los estudiantes restantes, los 100 mejores promedios entre tecnología, matemática y ciencias naturales
  serán escritoes en el archivo "tecnicos.csv", siendo recomendados para el liceo Técnico.


### Implementación
>La implementación debe realizarse usando el compilador GCC incluído en ubuntu 20.04 LTS. Siendo este un programa
desarrollado en C++, que utilizando un archivo de entrada, este debe entregar como salida un conjunto de archivos
.csv, correspondiente a cada listado de alumnos recomendados para cada liceo en especial.


### Instrucciones 


1. Clonar el [repositorio][repo] utilizando 
```bash
git clone https://github.com/Esteeban/Taller1.git
```
2. Situarse en la carpeta clonada /Taller1
```bash
cd Taller1/
```
3. Ejecución de Make
```bash
make
```
4. Ejecución del programa entregando como argumento o parámetro el archivo de "estudiantes.csv"
```bash
./main estudiantes.csv
```
5. En la carpeta Taller1 deben estar creados los archivos .csv con los mejores estudiantes
para cada liceo

[repo]: http://www.github.com/esteeban/Taller1
