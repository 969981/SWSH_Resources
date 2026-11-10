/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cbd10; name: FUN_009cbd10
 */


void FUN_009cbd10(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar1 = FUN_007d4b30(*(long *)(param_1 + 0xd8) + 0xd0);
    if ((uVar1 & 1) != 0) {
      FUN_009cbd60(*(undefined8 *)(param_1 + 0xd8));
    }
    if (*(long *)(param_1 + 0x34b0) != 0) {
      FUN_009dd2c0();
      return;
    }
  }
  return;
}


