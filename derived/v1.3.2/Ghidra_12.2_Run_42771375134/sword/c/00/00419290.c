/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419290; name: FUN_00419290
 */


void FUN_00419290(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02712bd0 + 0x140;
  puVar2 = PTR_DAT_02712bd0 + 0x168;
  *param_1 = (long)(PTR_DAT_02712bd0 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[5] = (long)puVar2;
  plVar3 = (long *)param_1[0x10];
  while (plVar3 != (long *)0x0) {
    while (*plVar3 != 0) {
      param_1[0x10] = *plVar3;
      FUN_0040bab0();
      plVar3 = (long *)param_1[0x10];
      if (plVar3 == (long *)0x0) goto LAB_004192f8;
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    FUN_0040bab0();
    plVar3 = (long *)param_1[0x10];
  }
LAB_004192f8:
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_0040ade0(param_1);
  return;
}


