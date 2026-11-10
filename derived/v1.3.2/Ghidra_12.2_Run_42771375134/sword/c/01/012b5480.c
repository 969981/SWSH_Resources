/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b5480; name: FUN_012b5480
 */


undefined8 FUN_012b5480(int *param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar16 = *param_2;
  uVar11 = (long)param_1 - lVar16;
  if ((uVar11 & 3) != 0) {
    return 0;
  }
  uVar14 = param_2[1];
  if (uVar14 < 5) {
    return 0;
  }
  uVar15 = uVar14 - 4;
  if (uVar15 < uVar11) {
    return 0;
  }
  iVar2 = (int)param_2[2];
  uVar3 = *(uint *)((long)param_2 + 0x14);
  iVar4 = (int)param_2[3];
  iVar8 = *param_1;
  uVar13 = iVar2 + 1;
  *(uint *)(param_2 + 2) = uVar13;
  *(uint *)(param_2 + 3) = iVar4 + 1U;
  if (uVar3 < uVar13) {
    return 0;
  }
  uVar9 = uVar11 - (long)iVar8;
  uVar17 = uVar14 - 2;
  if (uVar17 < uVar9) {
    return 0;
  }
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  uVar5 = *(uint *)((long)param_2 + 0x1c);
  if (uVar5 < iVar4 + 1U) {
    return 0;
  }
  uVar7 = *(ushort *)(lVar16 + uVar9);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (uVar14 <= uVar7) {
    return 0;
  }
  if (uVar14 - uVar7 < uVar9) {
    return 0;
  }
  puVar10 = (ushort *)((long)param_1 - (long)*param_1);
  if (*puVar10 < 5) goto switchD_012b5620_caseD_0;
  if (((ulong)puVar10[2] != 0) && (uVar14 - 1 < uVar11 + puVar10[2])) {
    return 0;
  }
  if (*puVar10 < 7) {
LAB_012b55fc:
    piVar12 = (int *)0x0;
    uVar7 = puVar10[2];
  }
  else {
    if ((ulong)puVar10[3] != 0) {
      uVar11 = uVar11 + puVar10[3];
      if ((uVar11 & 3) != 0) {
        return 0;
      }
      if (uVar15 < uVar11) {
        return 0;
      }
      uVar6 = *(uint *)(lVar16 + uVar11);
      if ((int)uVar6 < 0) {
        return 0;
      }
      if (uVar6 == 0) {
        return 0;
      }
      if (uVar14 - 1 < uVar11 + uVar6) {
        return 0;
      }
    }
    if ((ulong)puVar10[3] == 0) goto LAB_012b55fc;
    puVar1 = (uint *)((long)param_1 + (ulong)puVar10[3]);
    piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
    uVar7 = puVar10[2];
  }
  if ((ulong)uVar7 == 0) goto switchD_012b5620_caseD_0;
  switch(*(undefined1 *)((long)param_1 + (ulong)uVar7)) {
  case 0:
    goto switchD_012b5620_caseD_0;
  case 1:
    if (piVar12 == (int *)0x0) goto switchD_012b5620_caseD_0;
    uVar11 = (long)piVar12 - lVar16;
    if (((uVar11 & 3) != 0) || (uVar15 < uVar11)) {
      return 0;
    }
    iVar8 = *piVar12;
    *(uint *)(param_2 + 2) = iVar2 + 2U;
    *(uint *)(param_2 + 3) = iVar4 + 2U;
    if (uVar3 < iVar2 + 2U) {
      return 0;
    }
    uVar9 = uVar11 - (long)iVar8;
    if (uVar17 < uVar9) {
      return 0;
    }
    if ((uVar9 & 1) != 0) {
      return 0;
    }
    if (uVar5 < iVar4 + 2U) {
      return 0;
    }
    uVar7 = *(ushort *)(lVar16 + uVar9);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    if (uVar14 <= uVar7) {
      return 0;
    }
    if (uVar14 - uVar7 < uVar9) {
      return 0;
    }
    if (((4 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
        (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar14 != 0)) &&
       (uVar15 < uVar11 + uVar14)) {
      return 0;
    }
    break;
  case 2:
    if (piVar12 == (int *)0x0) goto switchD_012b5620_caseD_0;
    uVar11 = (long)piVar12 - lVar16;
    if ((uVar11 & 3) != 0) {
      return 0;
    }
    if (uVar15 < uVar11) {
      return 0;
    }
    iVar8 = *piVar12;
    *(uint *)(param_2 + 2) = iVar2 + 2U;
    *(uint *)(param_2 + 3) = iVar4 + 2U;
    if (uVar3 < iVar2 + 2U) {
      return 0;
    }
    uVar9 = uVar11 - (long)iVar8;
    if (uVar17 < uVar9) {
      return 0;
    }
    if ((uVar9 & 1) != 0) {
      return 0;
    }
    if (uVar5 < iVar4 + 2U) {
      return 0;
    }
    uVar7 = *(ushort *)(lVar16 + uVar9);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    if (uVar14 <= uVar7) {
      return 0;
    }
    if (uVar14 - uVar7 < uVar9) {
      return 0;
    }
    if (((4 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
        (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar14 != 0)) &&
       (uVar15 < uVar11 + uVar14)) {
      return 0;
    }
    break;
  case 3:
    if (piVar12 != (int *)0x0) {
      uVar11 = FUN_012b58f0(piVar12,param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      uVar13 = *(uint *)(param_2 + 2);
    }
    goto switchD_012b5620_caseD_0;
  case 4:
    if (piVar12 == (int *)0x0) goto switchD_012b5620_caseD_0;
    uVar11 = (long)piVar12 - lVar16;
    if ((uVar11 & 3) != 0) {
      return 0;
    }
    if (uVar15 < uVar11) {
      return 0;
    }
    iVar8 = *piVar12;
    *(uint *)(param_2 + 2) = iVar2 + 2U;
    *(uint *)(param_2 + 3) = iVar4 + 2U;
    if (uVar3 < iVar2 + 2U) {
      return 0;
    }
    uVar15 = uVar11 - (long)iVar8;
    if (uVar17 < uVar15) {
      return 0;
    }
    if ((uVar15 & 1) != 0) {
      return 0;
    }
    if (uVar5 < iVar4 + 2U) {
      return 0;
    }
    uVar7 = *(ushort *)(lVar16 + uVar15);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    if (uVar14 <= uVar7) {
      return 0;
    }
    if (uVar14 - uVar7 < uVar15) {
      return 0;
    }
    if ((4 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
       (uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar15 != 0)) {
      if (uVar14 < 9) {
        return 0;
      }
      if (uVar14 - 8 < uVar11 + uVar15) {
        return 0;
      }
    }
    break;
  default:
    return 0;
  }
  *(uint *)(param_2 + 2) = uVar13;
switchD_012b5620_caseD_0:
  *(uint *)(param_2 + 2) = uVar13 - 1;
  return 1;
}


