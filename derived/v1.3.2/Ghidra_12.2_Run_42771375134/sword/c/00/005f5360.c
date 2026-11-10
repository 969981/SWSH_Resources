/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f5360; name: FUN_005f5360
 */


/* WARNING: Removing unreachable block (ram,0x005f5450) */

void FUN_005f5360(long *param_1,long *param_2)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  char local_48 [4];
  undefined2 local_44 [2];
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  plVar13 = param_1 + 1;
  *plVar13 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (lVar3 == 0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      lVar3 = FUN_005bc6f0();
    }
    else {
      lVar3 = FUN_005bc740();
    }
    *param_1 = lVar3;
  }
  builtin_strncpy(local_48,"/:\\",4);
  uVar4 = param_2[2];
  if (uVar4 == 0) {
    return;
  }
  lVar3 = 0;
  do {
    pcVar2 = (char *)(((ulong)local_48 | 1) + lVar3);
    lVar3 = lVar3 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = 0xffffffffffffffff;
  if ((0 < (long)uVar4) && (lVar3 != 0)) {
    if (lVar3 < 1) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      uVar6 = 0xffffffffffffffff;
      uVar7 = uVar4;
      do {
        uVar11 = uVar7 - 1;
        lVar12 = 0;
        do {
          if (*(char *)(param_2[1] + uVar11) == local_48[lVar12]) {
            uVar6 = uVar11;
            goto LAB_005f546c;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar3);
        bVar1 = 1 < (long)uVar7;
        uVar7 = uVar11;
      } while (bVar1);
    }
  }
LAB_005f546c:
  local_44[0] = 0x2e;
  lVar3 = 0;
  do {
    pcVar2 = (char *)(((ulong)local_44 | 1) + lVar3);
    lVar3 = lVar3 + 1;
  } while (*pcVar2 != '\0');
  uVar7 = 0xffffffffffffffff;
  if ((0 < (long)uVar4) && (lVar3 != 0)) {
    uVar11 = uVar4;
    do {
      uVar7 = uVar11 - 1;
      if (*(char *)(param_2[1] + uVar7) == '.') goto LAB_005f54c8;
      bVar1 = 1 < (long)uVar11;
      uVar11 = uVar7;
    } while (bVar1);
    uVar7 = 0xffffffffffffffff;
  }
LAB_005f54c8:
  if ((long)uVar7 < (long)uVar6) {
    uVar7 = 0xffffffffffffffff;
  }
  if ((long)uVar7 < 1) {
    return;
  }
  uVar6 = uVar7 + 1;
  uVar11 = uVar4 - uVar6;
  if (uVar4 == 0) {
    if ((undefined1 *)*plVar13 != (undefined1 *)0x0) {
      *(undefined1 *)*plVar13 = 0;
    }
    param_1[2] = 0;
    return;
  }
  if (uVar4 < uVar6 || uVar11 == 0) {
    return;
  }
  if ((ulong)param_1[4] <= uVar11) {
    uVar4 = uVar11 + 1;
    if (param_1[3] == 0) {
      uVar5 = param_1[4] * 2;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
    }
    else {
      uVar4 = param_1[3] + uVar4;
    }
    FUN_005c5e00(param_1,uVar4,0);
  }
  lVar3 = *plVar13;
  lVar12 = param_2[1];
  uVar4 = uVar11;
  if ((long)uVar11 < 0) {
    if (lVar12 + uVar6 == 0) goto LAB_005f5600;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (*(char *)(lVar12 + uVar6 + uVar4) != '\0');
  }
  if ((lVar3 != 0) && (0 < (long)uVar4)) {
    uVar6 = uVar4 & 3;
    if (uVar4 - 1 < 3) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      do {
        puVar8 = (undefined1 *)(lVar12 + uVar7 + 2 + lVar9);
        puVar10 = (undefined1 *)(lVar3 + 1 + lVar9);
        lVar9 = lVar9 + 4;
        puVar10[-1] = puVar8[-1];
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
      } while (uVar4 - uVar6 != lVar9);
    }
    if (uVar6 != 0) {
      puVar8 = (undefined1 *)(lVar12 + uVar7 + lVar9);
      lVar12 = -uVar6;
      puVar10 = (undefined1 *)(lVar3 + lVar9);
      do {
        puVar8 = puVar8 + 1;
        lVar12 = lVar12 + 1;
        *puVar10 = *puVar8;
        puVar10 = puVar10 + 1;
      } while (lVar12 != 0);
    }
    *(undefined1 *)(lVar3 + uVar4) = 0;
  }
LAB_005f5600:
  param_1[2] = uVar11;
  return;
}


