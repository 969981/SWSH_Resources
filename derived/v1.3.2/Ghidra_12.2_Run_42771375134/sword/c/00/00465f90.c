/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00465f90; name: FUN_00465f90
 */


void FUN_00465f90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02712b30 + 0x280;
  puVar2 = PTR_DAT_02712b30 + 0x318;
  *param_1 = (long)(PTR_DAT_02712b30 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  if (param_1[0x17] != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x17] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
  }
  FUN_0047e190(param_1);
  return;
}


