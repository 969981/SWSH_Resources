/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c825f0; name: FUN_00c825f0
 */


void FUN_00c825f0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x50) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  uVar5 = (ulong)(iVar1 - iVar3 * iVar2);
  if (*(ulong *)(*(long *)(param_2 + 0x30) + 0x48) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + 0x40) + uVar5 * 0x10 + 8);
  *param_1 = lVar4;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c82634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  return;
}


