/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b0a0; name: FUN_0087b0a0
 */


void FUN_0087b0a0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_008681f0(*(undefined8 *)(param_1 + 0x98));
  iVar2 = FUN_008680a0(*(undefined8 *)(param_1 + 0x98));
  if ((uint)(iVar2 + param_2) <= uVar1) {
    uVar1 = iVar2 + param_2;
  }
  FUN_0086f040(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


