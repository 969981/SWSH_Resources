/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00851500; name: FUN_00851500
 */


undefined8 FUN_00851500(long param_1,ulong *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  long *plVar15;
  
  puVar5 = PTR_DAT_02716d10;
  puVar1 = PTR_DAT_027172c8 + 0x10;
LAB_00851544:
  while (pbVar13 = (byte *)*param_2, (byte *)param_2[1] <= pbVar13) {
    uVar9 = 0;
LAB_0085176c:
    iVar7 = FUN_0080d8c0(param_2,uVar9);
    bVar6 = iVar7 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar7;
    uVar9 = (ulong)CONCAT14(bVar6,iVar7);
    if (bVar6) goto LAB_00851574;
LAB_00851790:
    if ((uint)uVar9 == 0) {
      return 1;
    }
    if (((uint)uVar9 & 7) == 4) {
      return 1;
    }
LAB_008517a4:
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      uVar8 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar8);
    }
    else {
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar12 & 0xfffffffffffffffe);
    }
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *pbVar13;
  uVar9 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\x01') goto LAB_0085176c;
  *(uint *)(param_2 + 4) = (uint)bVar3;
  *param_2 = (ulong)(pbVar13 + 1);
LAB_00851574:
  uVar11 = (uint)(uVar9 >> 3) & 0x1fffffff;
  uVar14 = (uint)uVar9;
  if (uVar11 == 3) {
    if (uVar14 != 0x1a) goto joined_r0x00851598;
LAB_00851694:
    plVar15 = *(long **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    if (plVar15 == (long *)0x0) {
      plVar15 = operator_new(0x58);
      *plVar15 = (long)puVar1;
      FUN_00825430(plVar15 + 1);
      *(undefined1 *)(plVar15 + 10) = 0;
      plVar15[8] = 0;
      plVar15[9] = 0;
      plVar15[5] = 0;
      plVar15[6] = 0;
      plVar15[7] = 0;
      *(long **)(param_1 + 0x20) = plVar15;
    }
    pcVar2 = (char *)*param_2;
    if ((pcVar2 < (char *)param_2[1]) && (cVar4 = *pcVar2, -1 < cVar4)) {
      *param_2 = (ulong)(pcVar2 + 1);
      uVar9 = FUN_0080ca20(param_2,cVar4);
    }
    else {
      iVar7 = FUN_0080d720(param_2);
      if (iVar7 < 0) {
        return 0;
      }
      uVar9 = FUN_0080ca20(param_2,iVar7);
    }
    if ((long)uVar9 < 0) {
      return 0;
    }
    uVar12 = FUN_00858f20(plVar15,param_2);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar9 = FUN_0080cb90(param_2,uVar9 & 0xffffffff);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
    goto LAB_00851544;
  }
  if (uVar11 == 2) {
    if (uVar14 == 0x10) {
      pbVar13 = (byte *)*param_2;
      if (pbVar13 < (byte *)param_2[1]) {
LAB_0085163c:
        uVar9 = (ulong)*pbVar13;
        if ((char)*pbVar13 < '\0') goto LAB_00851654;
        *param_2 = (ulong)(pbVar13 + 1);
      }
      else {
LAB_00851628:
        uVar9 = 0;
LAB_00851654:
        uVar9 = FUN_0080d5d0(param_2,uVar9);
        if ((long)uVar9 < 0) {
          return 0;
        }
      }
      *(int *)(param_1 + 0x28) = (int)uVar9;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      pcVar2 = (char *)*param_2;
      if ((pcVar2 < (char *)param_2[1]) && (*pcVar2 == '\x1a')) {
        *param_2 = (ulong)(pcVar2 + 1);
        goto LAB_00851694;
      }
      goto LAB_00851544;
    }
  }
  else {
    if (uVar11 != 1) goto LAB_00851790;
    if (uVar14 == 10) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 == *(long *)puVar5) {
        FUN_009b58d0((long *)(param_1 + 0x18),*(long *)puVar5);
        lVar10 = *(long *)(param_1 + 0x18);
      }
      uVar9 = FUN_008160d0(param_2,lVar10);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      pbVar13 = (byte *)*param_2;
      if ((pbVar13 < (byte *)param_2[1]) && (*pbVar13 == 0x10)) {
        pbVar13 = pbVar13 + 1;
        *param_2 = (ulong)pbVar13;
        if ((byte *)param_2[1] <= pbVar13) goto LAB_00851628;
        goto LAB_0085163c;
      }
      goto LAB_00851544;
    }
  }
joined_r0x00851598:
  if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
    return 1;
  }
  goto LAB_008517a4;
}


