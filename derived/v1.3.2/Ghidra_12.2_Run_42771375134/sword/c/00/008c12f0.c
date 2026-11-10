/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c12f0; name: FUN_008c12f0
 */


void FUN_008c12f0(long param_1)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = 0x23dab45e4fac5f6d;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  return;
}


