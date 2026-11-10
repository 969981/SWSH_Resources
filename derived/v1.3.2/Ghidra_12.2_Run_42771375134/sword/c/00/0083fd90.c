/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083fd90; name: FUN_0083fd90
 */


ulong FUN_0083fd90(long *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(PTR_DAT_02716e20 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar1 == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0083fe44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(long *)*param_1 + 0xa0))();
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x0083fe74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)*param_1 + 0x58))();
      return uVar3;
    }
    if (iVar1 == 9) {
      iVar1 = FUN_008163d0(*param_1);
      return (ulong)(iVar1 + 0x18);
    }
    return 0;
  }
  switch(iVar1) {
  case 1:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
    break;
  case 2:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
    goto LAB_0083fef8;
  case 3:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
    break;
  case 4:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
    goto LAB_0083fef8;
  case 5:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
LAB_0083fef8:
    iVar1 = *(int *)(lVar5 + 4) << 3;
    goto LAB_0083ff4c;
  case 6:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
    break;
  case 7:
    if (*(long *)(*param_1 + 8) == 0) {
      return 0x10;
    }
    iVar1 = *(int *)(*param_1 + 4);
    goto LAB_0083ff4c;
  case 8:
    lVar5 = *param_1;
    if (*(long *)(lVar5 + 8) == 0) {
      return 0x10;
    }
    break;
  case 9:
    lVar5 = *param_1;
    iVar1 = *(int *)(lVar5 + 0xc) << 3;
    piVar4 = *(int **)(lVar5 + 0x10);
    if (piVar4 != (int *)0x0) {
      if (0 < *piVar4) {
        lVar6 = 0;
        do {
          iVar2 = FUN_008163d0(*(undefined8 *)(piVar4 + lVar6 * 2 + 2));
          iVar1 = iVar1 + iVar2 + 0x18;
          piVar4 = *(int **)(lVar5 + 0x10);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar4);
      }
      iVar1 = iVar1 + 8;
    }
    return (ulong)(iVar1 + 0x18);
  case 10:
    lVar5 = *param_1;
    iVar1 = *(int *)(lVar5 + 0xc) << 3;
    piVar4 = *(int **)(lVar5 + 0x10);
    if (piVar4 != (int *)0x0) {
      if (0 < *piVar4) {
        lVar6 = 0;
        do {
          iVar2 = (**(code **)(**(long **)(piVar4 + lVar6 * 2 + 2) + 0xa0))();
          piVar4 = *(int **)(lVar5 + 0x10);
          lVar6 = lVar6 + 1;
          iVar1 = iVar2 + iVar1;
        } while (lVar6 < *piVar4);
      }
      iVar1 = iVar1 + 8;
    }
    return (ulong)(iVar1 + 0x18);
  default:
    return 0;
  }
  iVar1 = *(int *)(lVar5 + 4) << 2;
LAB_0083ff4c:
  return (ulong)(iVar1 + 0x18);
}


