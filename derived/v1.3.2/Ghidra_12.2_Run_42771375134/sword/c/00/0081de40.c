/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081de40; name: FUN_0081de40
 */


void FUN_0081de40(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[4] = 0;
  puVar1 = PTR_DAT_02717118 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  FUN_008013b0(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)(PTR_DAT_02717120 + 0x10);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  FUN_00821df0();
  param_1[10] = param_2;
  return;
}


