/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb7bb0; name: FUN_00eb7bb0
 */


void FUN_00eb7bb0(undefined8 *param_1,long param_2)

{
  undefined6 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00e73a90();
  *(int *)param_1 = (int)uVar1;
  *(char *)((long)param_1 + 4) = (char)((uint6)uVar1 >> 0x20);
  *(char *)((long)param_1 + 5) = (char)((uint6)uVar1 >> 0x28);
  *(char *)(param_1 + 3) = (char)*(undefined4 *)(param_2 + 0x27c);
  *(char *)((long)param_1 + 0x19) = (char)*(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_2 + 0xe4);
  *(char *)((long)param_1 + 0x1a) = (char)*(undefined4 *)(param_2 + 0x2b8);
  return;
}


