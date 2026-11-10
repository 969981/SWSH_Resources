/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019e7a0; name: FUN_0019e7a0
 */


void FUN_0019e7a0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710c20;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined **)(param_1 + 0xa0) = puVar1 + 0x10;
  *(undefined **)(param_1 + 0x68) = puVar1 + 0x10;
  return;
}


