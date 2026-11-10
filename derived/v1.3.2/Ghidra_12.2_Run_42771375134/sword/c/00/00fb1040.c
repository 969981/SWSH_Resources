/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb1040; name: FUN_00fb1040
 */


void FUN_00fb1040(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x188) == 0) {
    return;
  }
  FUN_00794740();
  FUN_007946a0(*(undefined8 *)(param_1 + 0x188),param_2 & 1);
  return;
}


