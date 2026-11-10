/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043c780; name: FUN_0043c780
 */


void FUN_0043c780(long *param_1,long param_2)

{
  undefined *puVar1;
  
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  puVar1 = PTR_DAT_02712ef0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}


