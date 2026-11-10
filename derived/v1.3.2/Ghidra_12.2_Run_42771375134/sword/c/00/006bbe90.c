/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bbe90; name: FUN_006bbe90
 */


void FUN_006bbe90(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027151f8 + 0x10);
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  return;
}


