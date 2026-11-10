/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaed80; name: FUN_00eaed80
 */


void FUN_00eaed80(long *param_1,long param_2)

{
  long lVar1;
  
  FUN_00db6b80();
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_2 + 0x6c8);
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_2 + 0x6d8);
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_2 + 0x6e8);
  *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 0x6f8);
  return;
}


