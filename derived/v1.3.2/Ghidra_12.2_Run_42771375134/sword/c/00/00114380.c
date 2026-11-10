/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00114380; name: FUN_00114380
 */


void FUN_00114380(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((*(uint *)(*(long *)(param_1 + 0xa0) + (ulong)(param_2 >> 5) * 4) & uVar1) == 0) {
    FUN_001161a0(param_1 + 0xb0,*(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8),
                 *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)(param_2 << 1) * 4),
                 *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)(param_2 << 1 | 1) * 4),param_2)
    ;
    lVar2 = (ulong)(param_2 >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 0xa0) + lVar2) =
         *(uint *)(*(long *)(param_1 + 0xa0) + lVar2) | uVar1;
    return;
  }
  return;
}


