#include <windows.h>
int main() {
  HINSTANCE LoadMe;
  LoadMe = LoadLibrary("MixedAssembly64.dll");
}