/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dc0f0; name: FUN_008dc0f0
 */


void FUN_008dc0f0(long param_1)

{
  long lVar1;
  
  lVar1 = 8;
  *(undefined4 *)(param_1 + 0xc08) = 0;
  do {
    FUN_008dbd70(*(undefined8 *)(param_1 + lVar1),0);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xc08);
  return;
}


