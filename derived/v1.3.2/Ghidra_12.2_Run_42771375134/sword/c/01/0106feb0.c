/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106feb0; name: FUN_0106feb0
 */


undefined8 FUN_0106feb0(uint param_1)

{
  if (param_1 < 8) {
    return *(undefined8 *)(&DAT_02163410 + (long)(int)param_1 * 8);
  }
  return 0xcbf29ce484222645;
}


