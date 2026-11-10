/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73c00; name: FUN_00e73c00
 */


void FUN_00e73c00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xb8);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  return;
}


