/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b860; name: FUN_0087b860
 */


void FUN_0087b860(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (3 < ((uint)param_3 & 0xff)) {
    param_3 = 3;
  }
  FUN_00870e80(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
  return;
}


