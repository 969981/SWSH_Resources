/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00646d10; name: FUN_00646d10
 */


undefined8 FUN_00646d10(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x490) = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  if (*(char *)(param_1 + 0x184) != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
                    /* WARNING: Subroutine does not return */
      memset((void *)(param_1 + 400),0,0x300);
    }
    (**(code **)(*plVar1 + 0x48))
              (plVar1,*(long *)(param_1 + 0x160),
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_PrimitiveDrawHelper.cpp",
               0x54b);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (*(char *)(param_1 + 0x184) != '\0') {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 400),0,0x300);
}


