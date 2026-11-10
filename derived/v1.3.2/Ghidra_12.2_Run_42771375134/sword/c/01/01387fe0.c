/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01387fe0; name: FUN_01387fe0
 */


void FUN_01387fe0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  lVar1 = (long)*(int *)(param_1 + 0x7c) * 0x10;
  uVar2 = *(undefined8 *)(lVar1 + 0x2a70df8);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(&DAT_02a70df0 + lVar1) >> 0x20),
                      (float)*(undefined8 *)(param_1 + 0x90) +
                      (float)*(undefined8 *)(&DAT_02a70df0 + lVar1));
  uStack_18 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                       (float)((ulong)uVar2 >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0x98) + (float)uVar2);
  FUN_012dc9c0(param_1,&local_20);
  return;
}


