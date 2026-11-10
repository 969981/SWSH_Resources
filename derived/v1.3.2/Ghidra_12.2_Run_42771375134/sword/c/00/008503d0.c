/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008503d0; name: FUN_008503d0
 */


undefined8 FUN_008503d0(long param_1,ulong *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  
  puVar7 = PTR_DAT_02716d10;
  puVar1 = PTR_DAT_027172c0 + 0x10;
LAB_00850428:
  pbVar2 = (byte *)*param_2;
  if ((byte *)param_2[1] <= pbVar2) {
    uVar12 = 0;
LAB_008506e0:
    iVar10 = FUN_0080d8c0(param_2,uVar12);
    bVar8 = iVar10 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar10;
    uVar12 = (ulong)CONCAT14(bVar8,iVar10);
    if (bVar8) goto LAB_00850458;
LAB_00850704:
    if ((uint)uVar12 == 0) {
      return 1;
    }
    if (((uint)uVar12 & 7) == 4) {
      return 1;
    }
LAB_00850718:
    uVar16 = *(ulong *)(param_1 + 8);
    if ((uVar16 & 1) == 0) {
      uVar11 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar12 = FUN_00810550(param_2,uVar12 & 0xffffffff,uVar11);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
    }
    else {
      uVar12 = FUN_00810550(param_2,uVar12 & 0xffffffff,uVar16 & 0xfffffffffffffffe);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
    }
    goto LAB_00850428;
  }
  bVar4 = *pbVar2;
  uVar12 = (ulong)(uint)bVar4;
  if ((char)bVar4 < '\x01') goto LAB_008506e0;
  *(uint *)(param_2 + 4) = (uint)bVar4;
  *param_2 = (ulong)(pbVar2 + 1);
LAB_00850458:
  uVar14 = (uint)(uVar12 >> 3) & 0x1fffffff;
  uVar17 = (uint)uVar12;
  if (uVar14 == 3) {
    if (uVar17 != 0x1a) goto joined_r0x008504a4;
    goto LAB_00850608;
  }
  if (uVar14 == 2) {
    if (uVar17 == 0x12) {
LAB_00850504:
      uVar12 = param_2[7];
      *(int *)(param_2 + 7) = (int)uVar12 + -1;
      if ((int)uVar12 < 1) {
        return 0;
      }
      do {
        piVar15 = *(int **)(param_1 + 0x30);
        if (piVar15 == (int *)0x0) {
          iVar10 = *(int *)(param_1 + 0x2c);
LAB_00850560:
          FUN_00824290(param_1 + 0x20,iVar10 + 1);
          piVar15 = *(int **)(param_1 + 0x30);
          iVar10 = *piVar15;
LAB_00850574:
          *piVar15 = iVar10 + 1;
          uVar11 = FUN_007f7ef0(0,*(undefined8 *)(param_1 + 0x20));
          iVar10 = *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x28) = iVar10 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8 + 8) = uVar11;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x28);
          iVar10 = *piVar15;
          if (iVar10 <= iVar6) {
            if (iVar10 == *(int *)(param_1 + 0x2c)) goto LAB_00850560;
            goto LAB_00850574;
          }
          *(int *)(param_1 + 0x28) = iVar6 + 1;
          uVar11 = *(undefined8 *)(piVar15 + (long)iVar6 * 2 + 2);
        }
        uVar9 = FUN_0080cab0(param_2);
        uVar12 = FUN_00851500(uVar11,param_2);
        if ((uVar12 & 1) == 0) {
          return 0;
        }
        uVar12 = FUN_0080cc00(param_2,uVar9);
        if ((uVar12 & 1) == 0) {
          return 0;
        }
        pcVar3 = (char *)*param_2;
        if ((char *)param_2[1] <= pcVar3) {
          *(int *)(param_2 + 7) = (int)param_2[7] + 1;
          goto LAB_00850428;
        }
        if (*pcVar3 != '\x12') goto code_r0x008505e8;
        *param_2 = (ulong)(pcVar3 + 1);
      } while( true );
    }
  }
  else {
    if (uVar14 != 1) goto LAB_00850704;
    if (uVar17 == 10) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == *(long *)puVar7) {
        FUN_009b58d0((long *)(param_1 + 0x18),*(long *)puVar7);
        lVar13 = *(long *)(param_1 + 0x18);
      }
      uVar12 = FUN_008160d0(param_2,lVar13);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      pcVar3 = (char *)*param_2;
      if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\x12')) {
        *param_2 = (ulong)(pcVar3 + 1);
        goto LAB_00850504;
      }
      goto LAB_00850428;
    }
  }
joined_r0x008504a4:
  if ((uVar17 == 0) || ((uVar17 & 7) == 4)) {
    return 1;
  }
  goto LAB_00850718;
code_r0x008505e8:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if (*pcVar3 == '\x1a') {
    *param_2 = (ulong)(pcVar3 + 1);
LAB_00850608:
    plVar18 = *(long **)(param_1 + 0x38);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    if (plVar18 == (long *)0x0) {
      plVar18 = operator_new(0x58);
      *plVar18 = (long)puVar1;
      FUN_00825430(plVar18 + 1);
      *(undefined2 *)(plVar18 + 10) = 0;
      plVar18[8] = 0;
      plVar18[9] = 0;
      plVar18[5] = 0;
      plVar18[6] = 0;
      plVar18[7] = 0;
      *(long **)(param_1 + 0x38) = plVar18;
    }
    pcVar3 = (char *)*param_2;
    if ((pcVar3 < (char *)param_2[1]) && (cVar5 = *pcVar3, -1 < cVar5)) {
      *param_2 = (ulong)(pcVar3 + 1);
      uVar12 = FUN_0080ca20(param_2,cVar5);
    }
    else {
      iVar10 = FUN_0080d720(param_2);
      if (iVar10 < 0) {
        return 0;
      }
      uVar12 = FUN_0080ca20(param_2,iVar10);
    }
    if ((((long)uVar12 < 0) || (uVar16 = FUN_00858460(plVar18,param_2), (uVar16 & 1) == 0)) ||
       (uVar12 = FUN_0080cb90(param_2,uVar12 & 0xffffffff), (uVar12 & 1) == 0)) {
      return 0;
    }
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  }
  goto LAB_00850428;
}


