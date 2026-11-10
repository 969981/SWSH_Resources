/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a09720; name: FUN_00a09720
 */


void FUN_00a09720(long param_1,int param_2,byte param_3)

{
  param_3 = param_3 & 1;
  if (param_2 == 2) {
    *(byte *)(*(long *)(param_1 + 0x10) + 0x389) = param_3;
  }
  else {
    if (param_2 == 1) {
      *(byte *)(*(long *)(param_1 + 0x10) + 0x38a) = param_3;
      return;
    }
    if (param_2 == 0) {
      *(byte *)(*(long *)(param_1 + 0x10) + 0x388) = param_3;
      return;
    }
  }
  return;
}


