/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d560; name: FUN_0087d560
 */


void FUN_0087d560(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0086e670(*(undefined8 *)(param_1 + 0x98));
  uVar1 = param_2 + (uVar1 & 0xff);
  if (0xfe < uVar1) {
    uVar1 = 0xff;
  }
  FUN_00875460(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


