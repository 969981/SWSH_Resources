/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82550; name: FUN_00c82550
 */


undefined8 FUN_00c82550(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x50) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  uVar4 = (ulong)(iVar1 - iVar3 * iVar2);
  if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x48) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + uVar4 * 0x10);
}


