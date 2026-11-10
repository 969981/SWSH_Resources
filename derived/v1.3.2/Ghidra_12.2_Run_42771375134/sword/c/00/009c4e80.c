/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c4e80; name: FUN_009c4e80
 */


void FUN_009c4e80(long *param_1)

{
  FUN_00915160(param_1 + 0x4e6);
  FUN_00915160(param_1 + 1);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return;
}


