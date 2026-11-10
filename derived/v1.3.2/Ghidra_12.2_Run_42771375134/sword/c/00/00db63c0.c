/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db63c0; name: FUN_00db63c0
 */


void FUN_00db63c0(long param_1)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  lVar1 = FUN_00db8c50(param_1,auStack_18);
  if (lVar1 == 0) {
    *(ulong *)(*(long *)(param_1 + 0x170) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x170) + 0x138) | 1;
    *(ulong *)(*(long *)(param_1 + 0x178) + 0x138) =
         *(ulong *)(*(long *)(param_1 + 0x178) + 0x138) | 1;
    return;
  }
  return;
}


