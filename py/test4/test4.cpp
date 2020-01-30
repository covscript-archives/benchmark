#include <Python.h>

static PyObject *
test4_hello(PyObject *self, PyObject *args)
{
	return (PyObject*)Py_BuildValue("s", "hello");
}

static PyMethodDef test4Methods[] = {
	{"hello",  test4_hello, METH_VARARGS, "Hello, world!"},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef test4module = {
	PyModuleDef_HEAD_INIT,
	"test4",
	NULL,  -1,
	test4Methods
};

PyMODINIT_FUNC
PyInit_test4(void)
{
	return PyModule_Create(&test4module);
}