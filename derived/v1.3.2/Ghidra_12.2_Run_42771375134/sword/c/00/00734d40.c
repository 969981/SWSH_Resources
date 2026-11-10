/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734d40; name: FUN_00734d40
 */


void FUN_00734d40(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0xe8) == *(long *)(param_1 + 0xf0)) {
    return;
  }
  FUN_0199df20(*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,param_1 + 0x58);
  return;
}


