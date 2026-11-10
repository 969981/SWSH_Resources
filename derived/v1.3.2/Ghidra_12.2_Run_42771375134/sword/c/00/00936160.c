/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936160; name: FUN_00936160
 */


void FUN_00936160(long param_1,int param_2)

{
  if (param_2 < 7) {
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0x5d,0xffff0000);
    return;
  }
  if (param_2 == 7) {
    return;
  }
  FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0x5c,0xffff0000);
  return;
}


