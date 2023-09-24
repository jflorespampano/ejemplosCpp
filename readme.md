# Compilar c++ en vscode con gcc

## Dev c++
Dev C++ no es un cimpilador es un ambiente que usa como  compilador a gcc

[Liga para descargar Dev C++ 5.11](https://sourceforge.net/projects/orwelldevcpp/)

Si ya istalo Dev-Cpp en una de las carpetas de la instalacion debe tener la carpta: MingW64 `C:\Program Files (x86)\Dev-Cpp\MinGW64`.

## Usar gcc desde mingw agregado con MySys

MSYS2 es una colección de herramientas y bibliotecas que le brindan un entorno fácil de usar para crear, instalar y ejecutar software nativo de Windows.


Mingw-w64 es una rama proyecto avanzado de **mingw.org**, creado para admitir el compilador GCC en sistemas Windows. La rama bifurcó en 2007 para brindar soporte para 64 bits y nuevas API. Desde entonces ha ganado un uso y distribución generalizados.

[liga para instalar mingw en mysys2](https://parzibyte.me/blog/2021/08/23/instalar-gcc-msys2-compilador-c-cpp/)

Puede instalar Mingw de forma independiente o con Dev-Cpp o (como en mi caso) agregarlo a la instalción de MSYS, en mi caso esta en la carpeta `C:\msys64\mingw64`,  

Cualquier camino quehaya tomado tendra una carpeta `MinGW64`.

## Trabajar con cpp en Vscode Forma 1
* Instalar GCC en mi caso instale mysys64
* Instalar en el path la ruta de gcc, en mi caso:

`C:\msys64\mingw64\bin`

* En la terminal de vscode, para compilar su  programa, poner el comando:

`gcc -Wall uno.cpp -o uno`

* Para ejecutarjecutar:

`./uno`

## Forma 2 crear tarea en Vscode

En el siguiente ejemplo usaremos el gcc que instalo dev-cpp en :`C:\Program Files (x86)\Dev-Cpp\MinGW64\bin`
* en el menú terminal de vscode de clic en confifurar tareas
* ahi elija CMake:compilacion y eso crea la plantilla de compilacion
* modifique la plantilla debe verse así:

```js
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: gcc.exe compilar archivo activo",
		
			"command": "C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\bin\\gcc.exe",
			"args": [
				"-Wall",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "mi compilador de : gcc.exe"
		}
	]
}
```
Guarde el archivo.

Para ejecutar el comando, vaya a la ventana de edicion de su programa, en la iterminal de clc en la opcion: ejecutar tarea y elija la que acaba de crear.



## Referencias
[mysys](https://www.msys2.org/)

[instalar mysys](https://parzibyte.me/blog/2021/08/23/instalar-gcc-msys2-compilador-c-cpp/)

[una instroduccion a gcc](https://www.davidam.com/docu/gccintro.es.html)