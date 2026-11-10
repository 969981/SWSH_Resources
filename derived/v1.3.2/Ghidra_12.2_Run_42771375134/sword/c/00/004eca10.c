/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eca10; name: FUN_004eca10
 */


long * FUN_004eca10(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  for (plVar1 = (long *)*param_1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0x340]) {
    if (plVar1[0x342] != 0) {
LAB_004ecac8:
      plVar3 = (long *)plVar1[0x342];
joined_r0x004ecb00:
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      if (*plVar3 == 0) {
        plVar1[0x342] = 0;
      }
      else {
        plVar1[0x342] = *plVar3;
      }
      *(int *)(plVar1 + 0x341) = (int)plVar1[0x341] + -1;
      *(undefined1 *)(plVar3 + 4) = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      *(undefined1 *)((long)plVar3 + 100) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[7] = param_2;
      plVar3[8] = 0;
      plVar3[9] = 0x3f80000000000000;
      plVar3[10] = 0x3f8000003f800000;
      plVar3[0xb] = -0x100000000;
      return plVar3;
    }
  }
  plVar1 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0x1a18);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = 0x3f;
  plVar1[0x340] = 0;
  *(undefined4 *)(plVar1 + 0x341) = 0;
  plVar1[0x342] = 0;
  plVar3 = plVar1;
  do {
    plVar1[0x342] = (long)plVar3;
    *plVar3 = 0;
    *(int *)(plVar1 + 0x341) = (int)plVar1[0x341] + 1;
    while( true ) {
      if (lVar2 == 0) {
        if (*param_1 != 0) {
          plVar1[0x340] = *param_1;
          *param_1 = (long)plVar1;
          goto LAB_004ecac8;
        }
        *param_1 = (long)plVar1;
        plVar1[0x340] = 0;
        plVar3 = (long *)plVar1[0x342];
        goto joined_r0x004ecb00;
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 0xd;
      if (plVar1[0x342] == 0) break;
      *plVar3 = plVar1[0x342];
      plVar1[0x342] = (long)plVar3;
      *(int *)(plVar1 + 0x341) = (int)plVar1[0x341] + 1;
    }
  } while( true );
}


