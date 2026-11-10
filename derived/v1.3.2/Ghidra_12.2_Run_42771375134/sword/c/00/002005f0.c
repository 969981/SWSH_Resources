/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002005f0; name: FUN_002005f0
 */


void FUN_002005f0(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 local_60 [8];
  undefined4 local_58 [2];
  undefined8 local_48;
  
  puVar7 = PTR_DAT_02711068;
  uVar8 = *(uint *)(param_1 + 1);
  uVar19 = param_3 & 0xffffffff;
  iVar18 = (int)param_3;
  if ((uVar8 >> 0x1e != 3) && ((uVar8 >> 0x1e != 2 || (*(char *)(*param_1 + 0x1fb9) == '\0')))) {
    if (iVar18 == 0) {
      return;
    }
    while( true ) {
      uVar19 = uVar19 - 1;
      local_58[0] = 0x80;
      local_60[0] = 0;
      FUN_003d9690(*(long *)(puVar7 + (ulong)(uVar8 >> 0x18 & 0xf) * 8 + 0x30) + (long)param_1,
                   *param_2 + 0x20,local_58,local_60,0);
      if (uVar19 == 0) break;
      uVar8 = *(uint *)(param_1 + 1);
      param_2 = param_2 + 1;
    }
    return;
  }
  lVar17 = param_1[2];
  if (lVar17 == 0) {
    lVar17 = FUN_001d1a00(*param_1,uVar8 >> 0x18 & 0xf);
    param_1[2] = lVar17;
    iVar4 = *(int *)(lVar17 + 0xa0);
  }
  else {
    iVar4 = *(int *)(lVar17 + 0xa0);
  }
  if (iVar4 == 0) {
    if (iVar18 == 1) {
      *(long *)(lVar17 + 0x98) = *param_2;
      *(undefined4 *)(lVar17 + 0xa0) = 1;
    }
    else {
      lVar21 = *param_1;
      uVar8 = *(uint *)(lVar21 + 0x2038);
      local_48 = 0;
      FUN_001fec90(lVar21 + 0x2030,uVar8 + iVar18,&local_48);
      lVar21 = *(long *)(lVar21 + 0x2030);
      if (lVar21 + (ulong)uVar8 * 8 == 0) {
        return;
      }
      if (iVar18 != 0) {
        param_3 = param_3 & 3;
        if (uVar19 - 1 < 3) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          plVar9 = param_2 + 2;
          plVar12 = (long *)(lVar21 + (ulong)uVar8 * 8 + 0x10);
          do {
            plVar12[-2] = plVar9[-2];
            plVar12[-1] = plVar9[-1];
            *plVar12 = *plVar9;
            plVar1 = plVar9 + 1;
            lVar11 = lVar11 + 4;
            plVar9 = plVar9 + 4;
            plVar12[1] = *plVar1;
            plVar12 = plVar12 + 4;
          } while (uVar19 - param_3 != lVar11);
        }
        if (param_3 != 0) {
          lVar16 = -param_3;
          plVar9 = (long *)(lVar21 + (lVar11 + (ulong)uVar8) * 8);
          plVar12 = param_2 + lVar11;
          do {
            lVar16 = lVar16 + 1;
            *plVar9 = *plVar12;
            plVar9 = plVar9 + 1;
            plVar12 = plVar12 + 1;
          } while (lVar16 != 0);
        }
      }
      *(uint *)(lVar17 + 0x98) = uVar8;
      *(int *)(lVar17 + 0xa0) = iVar18;
    }
  }
  else {
    lVar21 = *param_1;
    uVar8 = *(uint *)(lVar21 + 0x2038);
    uVar20 = (ulong)uVar8;
    local_48 = 0;
    FUN_001fec90(lVar21 + 0x2030,uVar8 + iVar4 + iVar18,&local_48);
    lVar21 = *(long *)(lVar21 + 0x2030);
    puVar3 = (undefined8 *)(lVar21 + (ulong)uVar8 * 8);
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    uVar5 = *(uint *)(lVar17 + 0xa0);
    uVar10 = (ulong)uVar5;
    if (uVar5 == 1) {
      *puVar3 = *(undefined8 *)(lVar17 + 0x98);
      if (iVar18 != 0) {
        param_3 = param_3 & 3;
        if (uVar19 - 1 < 3) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          plVar9 = param_2 + 2;
          plVar12 = (long *)(lVar21 + uVar20 * 8 + 0x10);
          do {
            plVar12[-1] = plVar9[-2];
            *plVar12 = plVar9[-1];
            plVar12[1] = *plVar9;
            plVar1 = plVar9 + 1;
            lVar11 = lVar11 + 4;
            plVar9 = plVar9 + 4;
            plVar12[2] = *plVar1;
            plVar12 = plVar12 + 4;
          } while (uVar19 - param_3 != lVar11);
        }
        if (param_3 != 0) {
          plVar9 = (long *)(lVar21 + (lVar11 + uVar20) * 8);
          lVar21 = -param_3;
          plVar12 = param_2 + lVar11;
          do {
            plVar9 = plVar9 + 1;
            lVar21 = lVar21 + 1;
            *plVar9 = *plVar12;
            plVar12 = plVar12 + 1;
          } while (lVar21 != 0);
        }
      }
    }
    else {
      uVar6 = *(uint *)(lVar17 + 0x98);
      if (uVar5 != 0) {
        lVar11 = *(long *)(*param_1 + 0x2030);
        if (uVar10 - 1 < 3) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          puVar13 = (undefined8 *)(lVar11 + (ulong)uVar6 * 8 + 0x10);
          puVar14 = (undefined8 *)(lVar21 + uVar20 * 8 + 0x10);
          do {
            puVar14[-2] = puVar13[-2];
            puVar14[-1] = puVar13[-1];
            *puVar14 = *puVar13;
            puVar2 = puVar13 + 1;
            lVar16 = lVar16 + 4;
            puVar13 = puVar13 + 4;
            puVar14[1] = *puVar2;
            puVar14 = puVar14 + 4;
          } while (uVar10 - (uVar10 & 3) != lVar16);
        }
        if ((uVar5 & 3) != 0) {
          lVar15 = -(uVar10 & 3);
          puVar13 = (undefined8 *)(lVar21 + (lVar16 + uVar20) * 8);
          puVar14 = (undefined8 *)(lVar11 + (lVar16 + (ulong)uVar6) * 8);
          do {
            lVar15 = lVar15 + 1;
            *puVar13 = *puVar14;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar15 != 0);
        }
      }
      if (iVar18 != 0) {
        if (iVar18 == 1) {
          lVar21 = 0;
        }
        else {
          lVar21 = 0;
          do {
            plVar9 = param_2 + lVar21;
            uVar20 = uVar10 + lVar21;
            lVar21 = lVar21 + 2;
            puVar3[uVar20 & 0xffffffff] = *plVar9;
            puVar3[(int)uVar20 + 1] = plVar9[1];
          } while (uVar19 - (param_3 & 1) != lVar21);
        }
        if ((param_3 & 1) != 0) {
          puVar3[uVar5 + (int)lVar21] = param_2[lVar21];
        }
      }
    }
    *(uint *)(lVar17 + 0x98) = uVar8;
    *(int *)(lVar17 + 0xa0) = iVar4 + iVar18;
  }
  FUN_001d1850(*param_1,param_1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20;
  return;
}


