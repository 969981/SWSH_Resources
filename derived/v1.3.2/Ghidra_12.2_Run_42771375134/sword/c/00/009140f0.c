/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009140f0; name: FUN_009140f0
 */


void FUN_009140f0(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x30) = bVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8) = param_2;
  return;
}


