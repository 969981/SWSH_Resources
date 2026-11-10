/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144bd30; name: FUN_0144bd30
 */


int FUN_0144bd30(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_02710798;
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  iVar9 = 0;
  iVar10 = 0;
  do {
    while (pcVar5 = (char *)FUN_0152d900(lVar8,iVar10), *pcVar5 != '\0') {
LAB_0144bd8c:
      iVar10 = iVar10 + 1;
      if (iVar10 == 0xa7) goto LAB_0144be88;
    }
    uVar2 = FUN_01451b60(param_1,iVar10);
    if (1 < uVar2) {
      if (uVar2 == 2) {
        iVar3 = FUN_01451cb0(param_1,iVar10);
        pcVar5 = (char *)FUN_0152d900(lVar8,iVar3 + -1);
        if ((*pcVar5 == '\x04') && (pcVar5[1] == '\x02')) goto LAB_0144be6c;
      }
      else if (uVar2 == 4) {
        iVar3 = FUN_0144bed0(param_1);
        iVar4 = FUN_01451d20(param_1,iVar10);
        if (iVar4 <= iVar3) goto LAB_0144be6c;
      }
      goto LAB_0144bd8c;
    }
    lVar11 = *(long *)(*(long *)puVar1 + 0x1b8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    uVar6 = FUN_01452690(param_1,iVar10);
    uVar7 = FUN_01510f00(lVar11,uVar6);
    if (lVar11 == 0) {
      if ((uVar7 & 1) != 0) goto LAB_0144be6c;
      goto LAB_0144bd8c;
    }
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    if ((uVar7 & 1) == 0) goto LAB_0144bd8c;
LAB_0144be6c:
    FUN_0144bfe0(param_1,iVar10);
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xa7);
LAB_0144be88:
  if (0 < iVar9) {
    FUN_0144bb70(param_1,1);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return iVar9;
}


