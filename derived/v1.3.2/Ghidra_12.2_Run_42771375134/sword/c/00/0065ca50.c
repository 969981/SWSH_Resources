/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065ca50; name: FUN_0065ca50
 */


void FUN_0065ca50(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x10c) != '\0') {
    if (*(long *)(param_1 + 0xe0) != 0) {
      (**(code **)PTR_DAT_02714490)();
      if (*(long *)(param_1 + 0xe0) != 0) {
        plVar1 = *(long **)(param_1 + 0x10);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x48))
                    (plVar1,*(long *)(param_1 + 0xe0),
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Surface_Impl.cpp"
                     ,0x21d);
        }
        *(undefined8 *)(param_1 + 0xe0) = 0;
      }
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      plVar1 = *(long **)(param_1 + 0x10);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,*(long *)(param_1 + 0xe8),
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Surface_Impl.cpp"
                   ,0x221);
      }
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_006530c0(*(long *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))();
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 100) = 3;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


