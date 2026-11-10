/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087bcd0; name: FUN_0087bcd0
 */


void FUN_0087bcd0(long param_1,ulong param_2)

{
  if (((uint)param_2 & 0xff) < 4) {
    FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),param_2,0);
    FUN_00870e80(*(undefined8 *)(param_1 + 0x98),param_2 & 0xffffffff,0);
    FUN_00870d20(*(undefined8 *)(param_1 + 0x98),param_2 & 0xffffffff,0);
    return;
  }
  return;
}


