/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008794b0; name: FUN_008794b0
 */


void FUN_008794b0(long param_1,uint param_2)

{
  uint uVar1;
  
  if ((int)param_2 < 6) {
    uVar1 = FUN_00876a80(*(undefined8 *)(param_1 + 0x98));
    FUN_00876930(*(undefined8 *)(param_1 + 0x98),uVar1 | 1 << (ulong)(param_2 & 0x1f));
    FUN_00879500(param_1,1);
    return;
  }
  return;
}


