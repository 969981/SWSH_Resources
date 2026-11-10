/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419520; name: FUN_00419520
 */


void FUN_00419520(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    do {
      while( true ) {
        (**(code **)(*param_1 + 0x118))(param_1,lVar2);
        FUN_0040b580(lVar2);
        if ((long *)param_1[0x10] != (long *)0x0) break;
LAB_00419570:
        FUN_0040bab0(lVar2);
        lVar2 = param_1[0x10];
        if (lVar2 == 0) {
          return;
        }
      }
      lVar1 = *(long *)param_1[0x10];
      if (lVar1 != 0) {
        param_1[0x10] = lVar1;
        goto LAB_00419570;
      }
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      FUN_0040bab0(lVar2);
      lVar2 = param_1[0x10];
    } while (lVar2 != 0);
  }
  return;
}


