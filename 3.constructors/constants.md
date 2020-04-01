# Constants

It means that the variables value can not be changed.

Parameters can also be constants, it stops any trial to change objects attributes.

## Constants in C++
```cpp
const int x = 0;
const Sensor *s = new Sensor(1, new Residencia());

x = 3; // compilation error
s->setNumero(); // compilation error
```

```
#define does not create a constant. It is a command that the pre processor
realizes for substitue one text by another.
```

