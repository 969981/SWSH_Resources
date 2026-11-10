/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1cbb0; name: FUN_00c1cbb0
 */


void FUN_00c1cbb0(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x68) = 0xdb3043b95cd0f137;
  lVar1 = FUN_00be53f0(param_1 + 0x80);
  if (lVar1 == 0) {
    return;
  }
  FUN_00bdcf30();
  return;
}


