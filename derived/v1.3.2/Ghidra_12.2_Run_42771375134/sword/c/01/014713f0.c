/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014713f0; name: FUN_014713f0
 */


void FUN_014713f0(long param_1,int param_2)

{
  if (param_2 == -1) {
    FUN_0146bd00(*(undefined8 *)(param_1 + 0x5e0));
    FUN_0146bd00(*(long *)(param_1 + 0x5e0) + 0x218);
    FUN_0146bd00(*(long *)(param_1 + 0x5e0) + 0x430);
    FUN_0146bd00(*(long *)(param_1 + 0x5e0) + 0x648);
    FUN_0146bd00(*(long *)(param_1 + 0x5e0) + 0x860);
    FUN_0146bd00(*(long *)(param_1 + 0x5e0) + 0xa78);
    return;
  }
  FUN_0146bd00(*(long *)(param_1 + 0x5e0) + (long)param_2 * 0x218);
  return;
}


