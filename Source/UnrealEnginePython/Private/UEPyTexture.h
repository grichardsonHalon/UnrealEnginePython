#pragma once



#include "UnrealEnginePython.h"

PyObject *py_ue_texture_get_data(ue_PyUObject *, PyObject *);
PyObject *py_ue_texture_set_data(ue_PyUObject *, PyObject *);
PyObject *py_ue_texture_get_width(ue_PyUObject *, PyObject *);
PyObject *py_ue_texture_get_height(ue_PyUObject *, PyObject *);

PyObject *py_unreal_engine_compress_image_array(PyObject *, PyObject *);
PyObject *py_unreal_engine_create_checkerboard_texture(PyObject *, PyObject *);

PyObject *py_unreal_engine_create_transient_texture(PyObject *, PyObject *);