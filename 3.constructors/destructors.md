# Destructors

In somecases is useful to destroy an object.

## Declaration

```cpp
class Sensor {
    public:
        Sensor(int num, Residencia *residencia);
        ~Sensor(); // Destructor
        //...
};
```

# Implementation

```cpp
Sensor::~Sensor(){
    //??
}
```

When an object is destroyed?

When an destructor is executed?

## How to call an destructor?

```cpp
Residencia *r = new Residencia();
delete r;
```

# Dúvidas

Como implementar o destrutor?
R: tem que destruir os atributos do objeto.