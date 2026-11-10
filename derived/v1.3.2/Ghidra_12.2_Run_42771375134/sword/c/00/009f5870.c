/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f5870; name: FUN_009f5870
 */


void FUN_009f5870(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_016b5560(*(undefined8 *)(param_1 + 0x5e8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_016b5550(*(undefined8 *)(param_1 + 0x5e8));
  return;
}


