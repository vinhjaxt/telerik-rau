#include <windows.h>
int main() {
  HINSTANCE LoadMe;
  LoadMe = LoadLibrary("MixedAssembly32.dll");
}