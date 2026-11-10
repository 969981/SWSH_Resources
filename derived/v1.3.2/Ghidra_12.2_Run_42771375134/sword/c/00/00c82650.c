/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82650; name: FUN_00c82650
 */


void FUN_00c82650(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x50) + 1;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar1 / iVar3;
  }
  uVar6 = (ulong)(iVar1 - iVar4 * iVar3);
  if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x48) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *param_2;
  plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + uVar6 * 0x10 + 8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar5 = *plVar2;
  *plVar2 = lVar7;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c826c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  return;
}


