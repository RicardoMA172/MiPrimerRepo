# Diagramas de Clase UML
Los diagramas de clases son uno de los tipos de diagramas más útiles en UML, ya que trazan claramente la estructura de un sistema concreto al modelar sus clases, atributos, operaciones y relaciones entre objetos. 

Los diagramas de clases son un tipo de diagrama de estructura porque describen lo que debe estar presente en el sistema que se está modelando.

Las clases son los componentes básicos de los objetos, los diagramas de clases son los componentes básicos del UML. Los diversos componentes en un diagrama de clases pueden representar las clases que se programarán en realidad, los objetos principales o la interacción entre clases y objetos.

La figura de clase en sí misma consite en un rectángulo de tres filas. La fila superior contiene el nombre de la clase, la fila del centro contiene los atributos de la clase y la última expresa los métodos o las operaciones que la clase puede utilizar. Las clases y las subclases se agrupan para mostrar la relación estática entre cada objeto.

## Beneficios de los diagramas de clases.
Los diagramas de clases ofrecen una serie de beneficios para toda organización. Puedes usar los diagramas de clases UML para:
* Ilustrar modelos de datos para sistemas de información, sin importar qué tan simples o complejos sean.
* Comprender mejor la visión general de los esquemas de una aplicación.
* Expresar visualmente cualesquier necesidades específicas de un sistema y divulgar esa información en toda la empresa.
* Crear diagramas detallados que resalten cualquier código específico que será necesario programar e implementar en la estructura descrita.
* Ofrecer una descripción independiente de la implementación sobre los tipos empleados en un sistema que son posteriormente trasferidos entre sus componentes.

## Componentes básicos de un diagrama de clases.
El diagrama de clases estándar está compuesto por tres partes:
* **Sección superior:** Contiene el nombre de la clase. Esta sección siempre es necesaria, ya sea que estés hablando del clasificador o de un objeto.
* **Sección central:** Contiene los atributos de la clase. Usa esta sección para describir cualidades de la clase. Esto solo es necesario al describir cualidades de la clase. Esto solo es necesario al describir una instancia específica de una clase.
* **Sección inferior:** Incluye operaciones de clases (métodos). Esto está organizado en un formato de lista. Cada operación requiere su propia línea. Las operaciones describen cómo una clase puede interactuar con los datos.

## Modificadores de acceso a miembros.
Todas las clases poseen diferentes niveles de acceso en función del modificador de acceso (visibilidad). A continuación te mostraré los niveles de acceso con sus símbolos correspondientes:
* Público (+)
* Privado (-)
* Protegido (#)
* Paquete (~)
* Derivado (/)

## Alcance de los miembros.
Hay dos alcances para los miembros: clasificados e instancias.
Los clasificadores son miembros estáticos, mientras que las instancias son las instancias específicas de la clase.

## Componentes adicionales del diagrama de clases.
En función del contexto, las clases de un diagrama de clases pueden representar los objetos principales, las interacciones en la aplicación o las clases que se programarán. Para responder la pregunta "¿Qué es un diagrama de clases en UML?", primero deberías comprender su composición básica.
* **Clases:** Una plantilla para crear objetos e implementar un comportamiento en un sistema. En UML, una clase representa un objeto o un conjunto de objetos que comparte una estructura y un comportamiento comunes. Se representan con un rectángulo que incluye filas del nombre de la clase, sus atributos y sus operaciones.
  * **Nombre:** La primera fila en una figura de clase.
  * **Atributos:** La segunda fila en una figura de clase. Cada atributo de una clase está ubicado en una línea separada.
  * **Métodos:** La tercera fila en una figura de clase. También conocidos como "operaciones", los métodos se organizan en un formato de lista donde cada operación posee su propia línea.
* **Señales:** Símbolos que representan comunicaciones unidireccionales y asincrónicas entre objetos activos.
* **Tipos de datos:** Clasificadores que definen valores de datos. Los tipos de datos pueden modelar tanto enumeraciones como tipos primitivos.
* **Paquetes:** Figuras diseñadas para organizar clasificadores relacionados en un diagrama. Se simbolizan con una figura de gran rectángulo con pestañas.
* **Interfaces:** Una recopilación de firmas de operaciones o de definiciones de atributo que define un conjunto uniforme de comportamientos. Las interfaces son similares a una clase excepto por que una clase puede tener instancias de su tipo, y una interfaz debe poseer, como mínimo, una clase para implementarla.
* **Enumeraciones:** Representaciones de tipos de datos definidos por el usuario. Una enumeración incluye grupos de identificadores que representan valores de la enumeración.
* **Objetos:** Instancias de una clase o clases. Los objetos se pueden agregar a un diagrama de clases para representar instancias prototípicas o concretas.
* **Artefactos:** Elementos modelo que representan las entidades concretadas de un sistema de software, como documentos, bases de datos, archivos ejecutables, componentes de software y más.

## Interacciones.
El término "interacciones" se refiere a múltiples relaciones y enlaces que pueden existir en diagramas de objetos y de clases. Algunas de las interacciones más comunes incluyen:
* **Herencia:** El proceso en el que una subclase o clase derivada recibe la funcionalidad de una superclase, clase principal o clase padre, también se conoce como "generalización". Se simboliza mediante una línea de conexión recta con una punta de flecha cerrada que señala a la superclase.

![Ejemplo de herencia](https://d2slcw3kip6qmk.cloudfront.net/marketing/pages/chart/uml/class-diagram/class-diagram-inheritance-175x279.PNG)

En este ejemplo, el objeto "Car" heredaría todos los atributos (Speed, Passengers, FuelType) y los métodos (go(), stop(), changeDirection()) de la clase principal ("Vehicle"), además de los atributos específicos (ModelType, Doors, AutoMaker) y métodos de su propia clase (radio(), windshieldWiper(), changeDirection()). La herencia se muestra en un diagrama de clases por medio de una línea continua con una flecha cerrada y vacía.
* **Asociación bidireccional:** La relación predeterminada entre dos clases. Ambas clases están conscientes una de la otra y de la relación que tiene entre sí. Esta asociación se representa mediante una línea entre dos clases.

![Ejemplo de asociación bidireccional](https://d2slcw3kip6qmk.cloudfront.net/marketing/pages/chart/uml/class-diagram/class-diagram-bi-directional-association-689x182.PNG)

En el ejemplo anterior, la clase Car y la clase RoadTrip están interrelacionadas. En un extremo de la línea, el Car recibe la asociación de "assignedCar" con el valor de multiplicidad de 0..1, de modo que cuando la instancia de RoadTrip existe, puede tener una instancia de Car asociada a ella o no tener instancias de Cars asociadas a ella. En este caso, una clase Trailer separada con un valor de multiplicidad de 0..* es necesaria para demostrar que un RoadTrip puede tener múltiples instancias de Cars asociadas a ella. Dado que una instancia de Car podría tener múltiples asociaciones "starTrip", en otras palabras, un auto podría realizar múltiples viajes, el valor de multiplicidad se establece en 0..* (significa de cero a muchos).
* **Asociación unidireccional:** Una relación un poco menos común entre dos clases. Una clase está consciente de la otra e interactúa con ella. La asociación unidireccional se dibuja con una línea de conexión recta que señala una punta de flecha abierta desde la clase conocida a la clase a conocer.

![Ejemplo de asociación unidireccional](https://d2slcw3kip6qmk.cloudfront.net/marketing/pages/chart/uml/class-diagram/class-diagram-unidirectional-association-600x184.PNG)

## Ejemplo de diagrama de clases, Cajero automático.

![ATM](https://d2slcw3kip6qmk.cloudfront.net/marketing/pages/chart/class-diagram-for-ATM-system-UML/Class-Diagram-ATM-system-750x660.png)

# Fuentes:
1. [Tutorial de diagrama de clases UML](https://www.lucidchart.com/pages/es/tutorial-de-diagrama-de-clases-uml)
