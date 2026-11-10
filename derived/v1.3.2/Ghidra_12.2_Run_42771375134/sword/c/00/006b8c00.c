/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8c00; name: FUN_006b8c00
 */


bool FUN_006b8c00(undefined8 *param_1)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  piVar6 = (int *)*param_1;
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  if (*puVar7 < 9) {
    return false;
  }
  if ((ulong)puVar7[4] == 0) {
    return false;
  }
  switch(*(undefined1 *)((long)piVar6 + (ulong)puVar7[4])) {
  case 1:
    if ((ulong)puVar7[3] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[3]);
    }
    iVar4 = FUN_006b48b0(param_1 + 5);
    piVar6 = (int *)*param_1;
    puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (10 - (long)*piVar6)));
    piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((long)piVar6 + uVar8);
    }
    switch(uVar9) {
    case 0:
      return iVar4 < iVar5;
    case 1:
      return iVar4 <= iVar5;
    case 2:
      return iVar5 < iVar4;
    case 3:
      return iVar5 <= iVar4;
    case 4:
      return iVar4 == iVar5;
    case 5:
      return iVar4 != iVar5;
    default:
      return false;
    }
  case 2:
    if ((ulong)puVar7[3] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[3]);
    }
    fVar10 = (float)FUN_006b4930(param_1 + 5);
    piVar6 = (int *)*param_1;
    puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (10 - (long)*piVar6)));
    piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
    fVar11 = 0.0;
    if ((4 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 != 0)) {
      fVar11 = *(float *)((long)piVar6 + uVar8);
    }
    switch(uVar9) {
    case 0:
      return fVar10 < fVar11;
    case 1:
      return fVar10 <= fVar11;
    case 2:
      return fVar11 < fVar10;
    case 3:
      return fVar11 <= fVar10;
    case 4:
      return fVar10 == fVar11;
    case 5:
      return fVar10 != fVar11;
    default:
      return false;
    }
  case 3:
    if ((ulong)puVar7[3] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[3]);
    }
    bVar3 = FUN_006b49b0(param_1 + 5);
    piVar6 = (int *)*param_1;
    puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (10 - (long)*piVar6)));
    piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)piVar6 + uVar8) != '\0';
    }
    break;
  case 4:
    if ((ulong)puVar7[3] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[3]);
    }
    bVar3 = FUN_006b4a30(param_1 + 5);
    piVar6 = (int *)*param_1;
    puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (10 - (long)*piVar6)));
    piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)piVar6 + uVar8) != '\0';
    }
    switch(uVar9) {
    case 0:
switchD_006b8f10_caseD_0:
      return (bool)(bVar2 & (bVar3 ^ 1));
    case 1:
      goto switchD_006b8f10_caseD_1;
    case 2:
      goto switchD_006b8f10_caseD_2;
    case 3:
      goto switchD_006b8f10_caseD_3;
    case 4:
      goto switchD_006b8f10_caseD_4;
    case 5:
      goto switchD_006b8f10_caseD_5;
    default:
      return false;
    }
  default:
    return false;
  }
  switch(uVar9) {
  case 0:
    goto switchD_006b8f10_caseD_0;
  case 1:
switchD_006b8f10_caseD_1:
    return (bool)(bVar2 | (bVar3 ^ 1) & 1);
  case 2:
switchD_006b8f10_caseD_2:
    return (bool)(bVar3 & (bVar2 ^ 1U));
  case 3:
switchD_006b8f10_caseD_3:
    return (bool)(bVar3 & 1 | bVar2 ^ 1U);
  case 4:
switchD_006b8f10_caseD_4:
    return (bool)((bVar3 ^ bVar2 ^ 1) & 1);
  case 5:
switchD_006b8f10_caseD_5:
    return (bool)((bVar3 ^ bVar2) & 1);
  default:
    return false;
  }
}


