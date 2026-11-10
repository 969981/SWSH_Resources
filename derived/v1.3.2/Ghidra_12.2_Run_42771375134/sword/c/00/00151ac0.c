/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00151ac0; name: FUN_00151ac0
 */


/* WARNING: Removing unreachable block (ram,0x00151ae0) */

long FUN_00151ac0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  if (param_2 == 0) {
    iVar3 = 0;
    iVar2 = 0;
    goto LAB_00151b34;
  }
  if (param_2 == 1) {
    lVar4 = 0;
    iVar2 = 0;
LAB_00151b20:
    iVar2 = *(int *)(param_1 + lVar4 * 0x60 + 0x10) + iVar2;
  }
  else {
    lVar4 = 0;
    iVar2 = 0;
    piVar5 = (int *)(param_1 + 0x70);
    do {
      lVar4 = lVar4 + 2;
      iVar2 = *piVar5 + piVar5[-0x18] + iVar2;
      piVar5 = piVar5 + 0x30;
    } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar4);
    if ((param_2 & 1) != 0) goto LAB_00151b20;
  }
  iVar3 = param_2 << 2;
LAB_00151b34:
  uVar1 = iVar2 * 4;
  if (uVar1 < 0xfffff000) {
    uVar1 = uVar1 + 0x1000;
  }
  return (ulong)(uVar1 + iVar2 * 8) + (ulong)(iVar3 * 2 + param_2 * 0x40 + iVar2 * 6);
}


