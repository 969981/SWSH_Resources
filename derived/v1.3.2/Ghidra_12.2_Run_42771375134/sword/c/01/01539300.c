/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539300; name: FUN_01539300
 */


void FUN_01539300(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x40) {
    uVar1 = 1L << ((ulong)param_2 & 0x3f);
    if ((param_3 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x288) & (uVar1 ^ 0xffffffffffffffff);
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x288) | uVar1;
    }
    *(ulong *)(param_1 + 0x288) = uVar1;
  }
  return;
}


