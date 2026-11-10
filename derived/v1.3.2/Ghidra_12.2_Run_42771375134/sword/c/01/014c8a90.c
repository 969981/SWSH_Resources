/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c8a90; name: FUN_014c8a90
 */


void FUN_014c8a90(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint6 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  short *psVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar6 = *(uint *)(param_1 + 0x198);
  uVar15 = (ulong)param_2;
  if ((uVar6 <= param_4 || uVar6 <= param_2) || uVar6 <= param_3) {
    FUN_0077d660(*(undefined8 *)(param_1 + 0x170));
    if (*(uint *)(param_1 + 0x198) <= param_2) {
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar15 * 0x18 + 8) = 0;
    goto LAB_014c8fe0;
  }
  lVar11 = *(long *)(param_1 + 0x1a0);
  puVar13 = (undefined8 *)(lVar11 + (ulong)param_3 * 0x18);
  puVar14 = (undefined8 *)(lVar11 + (ulong)param_4 * 0x18);
  uVar19 = *puVar13;
  uVar10 = *(undefined8 *)PTR_DAT_02710898;
  uVar1 = *(ushort *)(puVar13 + 1);
  uVar17 = (ulong)(uVar1 >> 7) & 3;
  uVar4 = *(uint6 *)((long)puVar13 + 10);
  uVar18 = *puVar14;
  FUN_0077d660(*(undefined8 *)(param_1 + 0x170));
  cVar5 = FUN_008d3750();
  iVar16 = (int)uVar17;
  if (cVar5 != '\a') {
    if (cVar5 == '\x05') {
      if (1 < iVar16 - 1U) goto LAB_014c8ce0;
      uVar8 = *(undefined8 *)(param_1 + 0x170);
      if (iVar16 != 1) {
        FUN_0077d560(uVar8,uVar18);
        uVar10 = *(undefined8 *)(param_1 + 0x170);
        FUN_0077d5c0(uVar10,0x20);
        FUN_0077d5c0(uVar10,0x76);
        FUN_0077d5c0(uVar10,0x6f);
        FUN_0077d5c0(uVar10,0x6e);
        FUN_0077d5c0(uVar10,0x20);
        goto LAB_014c8f44;
      }
      uVar6 = FUN_014c73a0(param_1,param_3);
      uVar7 = FUN_008d3750();
      iVar16 = 0;
      if (5 < (uVar7 & 0xff) - 2) goto switchD_014c8cd4_caseD_6;
      uVar3 = uVar6 >> 0x12 & 7;
      uVar12 = uVar6 & 3;
      uVar6 = uVar6 >> 2 & 7;
      switch(uVar7 & 0xff) {
      case 2:
        iVar16 = uVar6 + uVar3 * 2;
        break;
      case 3:
        iVar16 = uVar6 + uVar12 * 2 + uVar3 * 4;
        break;
      case 4:
        iVar16 = 10;
        uVar12 = uVar12 | uVar12 << 2;
        goto LAB_014c8e90;
      case 5:
        iVar16 = uVar3 * 3 + uVar12;
        break;
      case 7:
        uVar12 = uVar12 * 3;
        iVar16 = 6;
LAB_014c8e90:
        iVar16 = uVar12 + uVar6 + uVar3 * iVar16;
      }
switchD_014c8cd4_caseD_6:
      psVar9 = (short *)FUN_014bb580(uVar10,3,iVar16);
      sVar2 = *psVar9;
      while (sVar2 != 0) {
        psVar9 = psVar9 + 1;
        FUN_0077d5c0(uVar8);
        sVar2 = *psVar9;
      }
      FUN_0077d560(*(undefined8 *)(param_1 + 0x170),uVar18);
      uVar10 = *(undefined8 *)(param_1 + 0x170);
      FUN_0077d5c0(uVar10,0x20);
      FUN_0077d5c0(uVar10,0x61);
      FUN_0077d5c0(uVar10,0x75);
      FUN_0077d5c0(uVar10,0x73);
      FUN_0077d5c0(uVar10,0x20);
      FUN_0077d5c0(uVar10,100);
      FUN_0077d5c0(uVar10,0x65);
      FUN_0077d5c0(uVar10,0x6d);
      FUN_0077d5c0(uVar10,0x20);
LAB_014c8f44:
      FUN_0077d560(*(undefined8 *)(param_1 + 0x170),uVar19);
      goto LAB_014c8fa0;
    }
    if (cVar5 != '\x03') {
LAB_014c8ce0:
      uVar8 = *(undefined8 *)(param_1 + 0x170);
      goto LAB_014c8ce4;
    }
    FUN_0077d560(*(undefined8 *)(param_1 + 0x170),uVar18);
    FUN_0077d5c0(*(undefined8 *)(param_1 + 0x170),0x20);
    if (iVar16 == 3) goto LAB_014c8df0;
    uVar18 = *(undefined8 *)(param_1 + 0x170);
    cVar5 = (&DAT_01d4c188)[uVar17];
    uVar6 = FUN_014c73a0(param_1,param_3);
    uVar7 = FUN_008d3750();
    iVar16 = 0;
    if (5 < (uVar7 & 0xff) - 2) goto switchD_014c8be4_caseD_6;
    uVar3 = uVar6 >> 0x12 & 7;
    uVar12 = uVar6 & 3;
    uVar6 = uVar6 >> 2 & 7;
    switch(uVar7 & 0xff) {
    case 2:
      iVar16 = uVar6 + uVar3 * 2;
      break;
    case 3:
      iVar16 = uVar6 + uVar12 * 2 + uVar3 * 4;
      break;
    case 4:
      iVar16 = 10;
      uVar12 = uVar12 | uVar12 << 2;
      goto LAB_014c8dc0;
    case 5:
      iVar16 = uVar3 * 3 + uVar12;
      break;
    case 7:
      uVar12 = uVar12 * 3;
      iVar16 = 6;
LAB_014c8dc0:
      iVar16 = uVar12 + uVar6 + uVar3 * iVar16;
    }
switchD_014c8be4_caseD_6:
    psVar9 = (short *)FUN_014bb580(uVar10,(int)cVar5,iVar16);
    sVar2 = *psVar9;
    while (sVar2 != 0) {
      psVar9 = psVar9 + 1;
      FUN_0077d5c0(uVar18);
      sVar2 = *psVar9;
    }
LAB_014c8df0:
    FUN_0077d560(*(undefined8 *)(param_1 + 0x170),uVar19);
    uVar1 = *(ushort *)(lVar11 + (ulong)param_4 * 0x18 + 8);
    uVar4 = *(uint6 *)((long)puVar14 + 10);
    uVar6 = *(uint *)(param_1 + 0x198);
joined_r0x014c8e24:
    uVar17 = (ulong)uVar1;
    if (uVar6 <= param_2) {
      return;
    }
    goto LAB_014c8fc4;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x170);
  if (1 < iVar16 - 1U) {
LAB_014c8ce4:
    FUN_0077d560(uVar8,uVar19);
    FUN_0077d5c0(*(undefined8 *)(param_1 + 0x170),0x20);
    FUN_0077d560(*(undefined8 *)(param_1 + 0x170),uVar18);
    uVar6 = *(uint *)(param_1 + 0x198);
    goto joined_r0x014c8e24;
  }
  FUN_0077d560(uVar8,uVar18);
  uVar18 = *(undefined8 *)(param_1 + 0x170);
  FUN_0077d5c0(uVar18,0x20);
  if (iVar16 != 1) {
    FUN_0077d5c0(uVar18,100);
    FUN_0077d5c0(uVar18,0x65);
    FUN_0077d5c0(uVar18,0x20);
    goto LAB_014c8f8c;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x170);
  uVar6 = FUN_014c73a0(param_1,param_3);
  uVar7 = FUN_008d3750();
  iVar16 = 0;
  if (5 < (uVar7 & 0xff) - 2) goto switchD_014c8c6c_caseD_6;
  uVar3 = uVar6 >> 0x12 & 7;
  uVar12 = uVar6 & 3;
  uVar6 = uVar6 >> 2 & 7;
  switch(uVar7 & 0xff) {
  case 2:
    iVar16 = uVar6 + uVar3 * 2;
    break;
  case 3:
    iVar16 = uVar6 + uVar12 * 2 + uVar3 * 4;
    break;
  case 4:
    iVar16 = 10;
    uVar12 = uVar12 | uVar12 << 2;
    goto LAB_014c8e58;
  case 5:
    iVar16 = uVar3 * 3 + uVar12;
    break;
  case 7:
    uVar12 = uVar12 * 3;
    iVar16 = 6;
LAB_014c8e58:
    iVar16 = uVar12 + uVar6 + uVar3 * iVar16;
  }
switchD_014c8c6c_caseD_6:
  psVar9 = (short *)FUN_014bb580(uVar10,4,iVar16);
  sVar2 = *psVar9;
  while (sVar2 != 0) {
    psVar9 = psVar9 + 1;
    FUN_0077d5c0(uVar18);
    sVar2 = *psVar9;
  }
LAB_014c8f8c:
  FUN_0077d560(*(undefined8 *)(param_1 + 0x170),uVar19);
LAB_014c8fa0:
  uVar4 = *(uint6 *)((long)puVar14 + 10);
  uVar17 = (ulong)(*(ushort *)(lVar11 + (ulong)param_4 * 0x18 + 8) & 0xffffff9f | 0x20);
  if (param_2 < *(uint *)(param_1 + 0x198)) {
LAB_014c8fc4:
    uVar10 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) =
         uVar17 | (ulong)uVar4 << 0x10;
LAB_014c8fe0:
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar10);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + uVar15 * 0x18 + 0x10) = 0;
    lVar11 = *(long *)(param_1 + 0x1a0) + uVar15 * 0x18;
    *(ushort *)(lVar11 + 0x12) = *(ushort *)(lVar11 + 0x12) & 0xfffe;
  }
  return;
}


