/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b060; name: FUN_0087b060
 */


void FUN_0087b060(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_008681f0(*(undefined8 *)(param_1 + 0x98));
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  FUN_0086f040(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


