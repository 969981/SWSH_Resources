/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d5a0; name: FUN_0087d5a0
 */


void FUN_0087d5a0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0086e670(*(undefined8 *)(param_1 + 0x98));
  uVar2 = param_2;
  if (param_2 <= (uVar1 & 0xff)) {
    uVar2 = uVar1 & 0xff;
  }
  uVar2 = uVar2 - param_2;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  FUN_00875460(*(undefined8 *)(param_1 + 0x98),uVar2);
  return;
}


