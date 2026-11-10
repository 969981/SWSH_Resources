/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00700830; name: FUN_00700830
 */


void FUN_00700830(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 1L << ((ulong)param_3 & 0x3f);
  if ((param_2 & 1) == 0) {
    *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) & (uVar1 ^ 0xffffffffffffffff);
    *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x108) = 0;
    lVar2 = *(long *)(param_1 + 0x70);
  }
  else {
    *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | uVar1;
    lVar2 = *(long *)(param_1 + 0x70);
  }
  if (lVar2 != 0) {
    uVar1 = *(ulong *)(lVar2 + 0x138) & 0xfffffffffffffffd;
    if (*(int *)(param_1 + 0x78) != -1) {
      uVar1 = *(ulong *)(lVar2 + 0x138) | 2;
    }
    *(ulong *)(lVar2 + 0x138) = uVar1;
  }
  return;
}


