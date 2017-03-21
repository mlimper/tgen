# tgen
Simple Tangent Generator

This is a very basic tangent generator, written in C++.
The main purpose of this project is to facilitate adoption of, and discussion about, the proper setup of tangent spaces for glTF 2.0 assets.

The code consists basically of one header + .cpp file.
For debugging and visualization, there is also a simple X3D exporter in a separate file, which was used to generate the results shown below.
So far, the code has just been compiled and tested with VS 2015.

Feedback and contributions are always welcome. 


## Results

[![Victor Example with Tangents](images/victor-tangents.jpg)](https://mlimper.github.io/tgen/demo/victor/index.html)
[![Victor Normal Map in Tangent Space](images/victor-normalmap.jpg)](https://mlimper.github.io/tgen/demo/victor/baked/NormalsTS.png)
[Web Demo](https://mlimper.github.io/tgen/demo/victor/index.html)

[![Landscape Example with Tangents](images/landscape-tangents.jpg)](https://mlimper.github.io/tgen/demo/landscape/index.html)
[![Landscape Normal Map in Tangent Space](images/landscape-normalmap.jpg)](https://mlimper.github.io/tgen/demo/landscape/baked/NormalsTS.png)
[Web Demo](https://mlimper.github.io/tgen/demo/landscape/index.html)

