/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00218060; name: FUN_00218060
 */


void FUN_00218060(ulong *param_1,long param_2)

{
  ulong uVar1;
  
  if (1 < (ulong)(ushort)param_1[1]) {
    uVar1 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar1 + (ulong)(ushort)param_1[1] * 8;
    *param_1 = uVar1;
  }
  return;
}


