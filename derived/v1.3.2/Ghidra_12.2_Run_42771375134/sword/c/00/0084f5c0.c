/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084f5c0; name: FUN_0084f5c0
 */


undefined8 FUN_0084f5c0(long param_1,ulong *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  
  puVar6 = PTR_DAT_02716d10;
  puVar1 = PTR_DAT_027172b8 + 0x10;
LAB_0084f604:
  while (pbVar2 = (byte *)*param_2, (byte *)param_2[1] <= pbVar2) {
    uVar10 = 0;
LAB_0084f7a0:
    iVar8 = FUN_0080d8c0(param_2,uVar10);
    bVar7 = iVar8 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar8;
    uVar10 = (ulong)CONCAT14(bVar7,iVar8);
    if (bVar7) goto LAB_0084f634;
LAB_0084f7c4:
    if ((uint)uVar10 == 0) {
      return 1;
    }
    if (((uint)uVar10 & 7) == 4) {
      return 1;
    }
LAB_0084f7d8:
    uVar13 = *(ulong *)(param_1 + 8);
    if ((uVar13 & 1) == 0) {
      uVar9 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar10 = FUN_00810550(param_2,uVar10 & 0xffffffff,uVar9);
    }
    else {
      uVar10 = FUN_00810550(param_2,uVar10 & 0xffffffff,uVar13 & 0xfffffffffffffffe);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  bVar4 = *pbVar2;
  uVar10 = (ulong)(uint)bVar4;
  if ((char)bVar4 < '\x01') goto LAB_0084f7a0;
  *(uint *)(param_2 + 4) = (uint)bVar4;
  *param_2 = (ulong)(pbVar2 + 1);
LAB_0084f634:
  uVar12 = (uint)(uVar10 >> 3) & 0x1fffffff;
  uVar14 = (uint)uVar10;
  if (uVar12 == 2) {
    if (uVar14 != 0x12) {
joined_r0x0084f66c:
      if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
        return 1;
      }
      goto LAB_0084f7d8;
    }
  }
  else {
    if (uVar12 != 1) goto LAB_0084f7c4;
    if (uVar14 != 10) goto joined_r0x0084f66c;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 == *(long *)puVar6) {
      FUN_009b58d0((long *)(param_1 + 0x18),*(long *)puVar6);
      lVar11 = *(long *)(param_1 + 0x18);
    }
    uVar10 = FUN_008160d0(param_2,lVar11);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    pcVar3 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar3) || (*pcVar3 != '\x12')) goto LAB_0084f604;
    *param_2 = (ulong)(pcVar3 + 1);
  }
  plVar15 = *(long **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (plVar15 == (long *)0x0) {
    plVar15 = operator_new(0x50);
    *plVar15 = (long)puVar1;
    FUN_00825430(plVar15 + 1);
    plVar15[8] = 0;
    plVar15[9] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    *(long **)(param_1 + 0x20) = plVar15;
  }
  pcVar3 = (char *)*param_2;
  if ((pcVar3 < (char *)param_2[1]) && (cVar5 = *pcVar3, -1 < cVar5)) {
    *param_2 = (ulong)(pcVar3 + 1);
    uVar10 = FUN_0080ca20(param_2,cVar5);
  }
  else {
    iVar8 = FUN_0080d720(param_2);
    if (iVar8 < 0) {
      return 0;
    }
    uVar10 = FUN_0080ca20(param_2,iVar8);
  }
  if ((long)uVar10 < 0) {
    return 0;
  }
  uVar13 = FUN_00857b80(plVar15,param_2);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  uVar10 = FUN_0080cb90(param_2,uVar10 & 0xffffffff);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_0084f604;
}


