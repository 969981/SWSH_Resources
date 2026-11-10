/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093af70; name: FUN_0093af70
 */


void FUN_0093af70(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) < 5) {
    uVar1 = uVar1 & *(uint *)(&DAT_0214ad20 + ((long)((ulong)uVar1 << 0x3b) >> 0x3b) * 4) |
            (param_2 & 0x1f) << (ulong)((uVar1 & 0x1f) * 5 + 5 & 0x1f);
    *(uint *)(param_1 + 0x10) = uVar1 & 0xffffffe0 | uVar1 + 1 & 0x1f;
  }
  return;
}


