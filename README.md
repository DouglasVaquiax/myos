## <a name="integrantes"></a>Integrantes
| Nombre | Carné |
|:-------|:------:|
|Luis González |0900-07-2318|
|Liz Guzmán|0900-11-319|
|Abigail Monroy|0900-11-319|
|Douglas Vaquiax|0900-15-8454|
|Marvin Cortez|0900-00-2593|
# myos
Proyecto de sistemas operativos
## Descripcion
En el siguiente proyecto se mostrara la realizacion del sistema operativo por parte del grupo Arch Linux el cual fué creado con la finalidad de mostrar la ejecucion de un sistema en su mas basicos componentes 


<img align="right" width="400" src="https://drive.google.com/file/d/12IGgvAT5qtjWdm5YdZh2-hCiNH6qlpaN/view?usp=sharing" />

* [Pasos preliminares](#preliminares)
* [Construcción del Cross compiler)](#makemanual)
* [Construcción del Kernel básico](#make)
* [Armado del makefile](#integrantes)


## <a name="preliminares"></a>Pasos preliminares
1. **Instalacion de una maquina virtual:**
  ```
  -la intalacion de una maquina virtual ya sea utilizando la herramienta de VirtualBox o VMware
  ```
  2. **Instalacion de un sistema operativo:**
  ```
  -para poder seguir con la construccion del sistema se necesita un sistema operativo donde 
  se emule y se logren hacer pruebas
  ```
  3. **Configuración:**
  ```
  -para el inicio de las pruebas el sistema tiene que configurarse correctamente para poder
  realizar las emulaciones , comprimir archivos, intalar las carpetas correspondientes en su lugar
  para asi poder inicar los comandos de ejecucion de los archivos y directorios.
  ```

## <a name="preliminares"></a>Construccion del Cross Compiler

[Podemos ver la instalacion del cross compiler en esta direccion](https://web.archive.org/web/20170620111003/http://wiki.osdev.org/GCC_Cross-Compiler) como pre-requisito de la construcción del ISO, este sistema esta desarrollado para una arquitectura de 32-bit y fue construido en un ambiente de Xubuntu 16.04 LTS.



+## <a name="integrantes"></a>Integrantes
+| Nombre | Carné |
+|:-------|:------:|
+|Luis González |0900-07-2318|
+|Liz Guzmán|0900-11-319|
+|Abigail Monroy|0900-11-319|
+|Douglas Vaquiax|0900-15-8454|
+|Marvin Cortez|0900-00-2593|
 # myos
 Proyecto de sistemas operativos
+## Descripcion
+En el siguiente proyecto se mostrara la realizacion del sistema operativo por parte del grupo Arch Linux el cual fué creado con la finalidad de mostrar la ejecucion de un sistema en su mas basicos componentes 
+
+
+<img align="right" width="400" src="https://drive.google.com/file/d/12IGgvAT5qtjWdm5YdZh2-hCiNH6qlpaN/view?usp=sharing" />
+
+* [Pasos preliminares](#preliminares)
+* [Construcción del Cross compiler](#cross)
+* [Construcción del Kernel básico](#kernel)
+* [Armado del makefile](#make)
+
+
+## <a name="preliminares"></a>Pasos preliminares
+1. **Instalacion de una maquina virtual:**
+  ```
+  -la intalacion de una maquina virtual ya sea utilizando la herramienta de VirtualBox o VMware
+  ```
+  2. **Instalacion de un sistema operativo:**
+  ```
+  -para poder seguir con la construccion del sistema se necesita un sistema operativo donde 
+  se emule y se logren hacer pruebas
+  ```
+  3. **Configuración:**
+  ```
+  -para el inicio de las pruebas el sistema tiene que configurarse correctamente para poder
+  realizar las emulaciones , comprimir archivos, intalar las carpetas correspondientes en su lugar
+  para asi poder inicar los comandos de ejecucion de los archivos y directorios.
+  ```
+
+# <a name="pasos"></a>Pasos para construccion del sistema operativo
+
+## <a name="cross"></a>Construccion del Cross Compiler
+
+[Podemos ver la instalacion y construccion  del cross compiler en esta direccion](http://wiki.osdev.org/GCC_Cross-Compiler) se tiene que tener las configuraciones ya hechas para poder realizar la instalacion y construccion del cross compiler
+
+## <a name="kernel"></a>Construccion del Kernel
+[Podemos ver la creacion del Kernel en esta direccion](http://wiki.osdev.org/Bare_Bones) se tiene que tener las configuraciones ya hechas para poder realizar la instalacion y construccion del cross compiler
+
+## <a name="make"></a>Creacion y Ejecucion de los archivos utilizando el Archivo (Makefile)
+el archivo makefile continene las instrucciones o herramientas a utilizar para poder compilar el codigo, unificar archivos y convertirlos en un ISO el cual tambien posee la caractersitica de poder iniciarlo
+<br></br>
+<br> -como primeros pasos debemos de hacer las compilaciones respectivas con los siguientes codigos
+ ./i686-elf-gcc   y     ./i686-elf-as  </br>
+ <br></br>
+ <br>en lo siguiente se explicara la funcionalidad de cada comando para la realizacion del sistema</br>
+  <br></br>
+   <br>-acompile: hace la conversion de archivos </br>
+ 
+ 
+ 
+ 
+ 
+ 
+
 
-Hola
No commit comments for this range
© 2017 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
API
Training
Shop
Blog

