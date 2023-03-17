In this version we write the ASM as inline assembly in a C function
then wrap the function with a python API so that we call it from python

More on how this works can be found here -> [https://adwaith.hashnode.dev/calling-assembly-function-from-python](https://adwaith.hashnode.dev/calling-assembly-function-from-python)

#### Build

```bash
pip3 install cffi
python3 builder.py
```

#### Run

```bash
>>> import _add_lib.lib as a
>>> a.add_c(2, 3)
1705
>>>
```
