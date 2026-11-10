/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff5170; name: FUN_00ff5170
 */


void FUN_00ff5170(long param_1,long param_2)

{
  *(long *)(param_1 + 8) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x48);
    return;
  }
  return;
}


