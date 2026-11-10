/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00553580; name: FUN_00553580
 */


undefined8 FUN_00553580(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x220) = param_2;
  *(undefined8 *)(param_1 + 0x218) = param_3;
  return 0;
}


