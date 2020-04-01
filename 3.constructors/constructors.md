# Constructors

They are methods that are automatically called when an object is created.
It contains all the instructions for its correct innitialization.

## Constructors in C++
```cpp
class Sensor {
    public:
        Sensor(int num, Residencia *residencia); // Constructor
        void detectarAcao();

        int getNumero();
    private:
        int num;
        Residencia * residencia;
};
```
## Constructor Implementation

### Option 1
```cpp
Sensor::Sensor(int num, Residencia *residencia){
    this->num = num;
    this->residencia = residencia;
}
```

### Option 2
```cpp
Sensor::Sensor(int num, Residencia *residencia) :
 num (num), residencia (residencia) {
    //...
}
```

## How to call a Constructor?
```cpp
Residencia *r = new Residencia(); // constructor without paremeters

Sensor *s1 = new Sensor(1, r); // with paremeters
Sensor *s2 = new Sensor(2, NULL); // or you can pass NULL
```


# Duvidas
O construtor precisa ser público? E se eu chamar o metodo construtor
a partir de um objeto? ele é reconstruido?

R: Na maioria dos casos o construtor é criado como público. Em alguns casos especiais existe algo chamado Singleton.