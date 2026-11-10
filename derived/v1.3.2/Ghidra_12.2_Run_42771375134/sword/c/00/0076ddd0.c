/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076ddd0; name: FUN_0076ddd0
 */


undefined8 FUN_0076ddd0(void *param_1,wchar_t *param_2,int param_3,int param_4,ulong param_5)

{
  wchar_t *pwVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  byte *pbVar12;
  ulong *puVar13;
  ulong uVar14;
  
  if (param_4 == 0) {
    sVar5 = strlen((char *)param_2);
    uVar4 = (uint)sVar5;
  }
  else {
    sVar5 = wcslen(param_2);
    uVar4 = (uint)sVar5;
  }
  if (param_3 == 0) {
    if ((param_5 < 0x7fffffff) && (param_5 <= (ulong)(long)(int)uVar4)) {
      uVar4 = (int)param_5 - 1;
    }
    if (param_4 == 0) {
      if (0 < (int)uVar4) {
        uVar14 = (ulong)uVar4;
        if (uVar14 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar13 = (ulong *)((long)param_1 + 0x10);
          do {
            pbVar12 = (byte *)((long)param_2 + lVar9 + 1);
            lVar9 = lVar9 + 4;
            puVar13[-2] = (ulong)pbVar12[-1];
            puVar13[-1] = (ulong)*pbVar12;
            *puVar13 = (ulong)pbVar12[1];
            puVar13[1] = (ulong)pbVar12[2];
            puVar13 = puVar13 + 4;
          } while (uVar14 - (uVar14 & 3) != lVar9);
        }
        if ((uVar4 & 3) != 0) {
          lVar7 = -(uVar14 & 3);
          pbVar12 = (byte *)((long)param_2 + lVar9);
          puVar13 = (ulong *)((long)param_1 + lVar9 * 8);
          do {
            lVar7 = lVar7 + 1;
            *puVar13 = (ulong)*pbVar12;
            pbVar12 = pbVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (lVar7 != 0);
        }
      }
    }
    else if (0 < (int)uVar4) {
      uVar14 = (ulong)uVar4;
      if (uVar14 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pwVar11 = param_2 + 2;
        puVar13 = (ulong *)((long)param_1 + 0x10);
        do {
          puVar13[-2] = (ulong)(uint)pwVar11[-2];
          puVar13[-1] = (ulong)(uint)pwVar11[-1];
          *puVar13 = (ulong)(uint)*pwVar11;
          pwVar1 = pwVar11 + 1;
          lVar9 = lVar9 + 4;
          pwVar11 = pwVar11 + 4;
          puVar13[1] = (ulong)(uint)*pwVar1;
          puVar13 = puVar13 + 4;
        } while (uVar14 - (uVar14 & 3) != lVar9);
      }
      if ((uVar4 & 3) != 0) {
        lVar7 = -(uVar14 & 3);
        pwVar11 = param_2 + lVar9;
        puVar13 = (ulong *)((long)param_1 + lVar9 * 8);
        do {
          lVar7 = lVar7 + 1;
          *puVar13 = (ulong)(uint)*pwVar11;
          pwVar11 = pwVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar7 != 0);
      }
    }
    *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 8) = 0;
  }
  else {
    if ((param_5 < 0xfffffff) && (param_5 << 3 <= (ulong)(long)(int)uVar4)) {
      uVar4 = (int)(param_5 << 3) - 1;
    }
    uVar14 = (ulong)(int)uVar4;
    *(undefined8 *)((long)param_1 + (uVar14 & 0xfffffffffffffff8)) = 0;
    if (param_4 == 0) {
      memcpy(param_1,param_2,uVar14);
      iVar8 = (int)(uVar14 >> 3);
    }
    else {
      if (0 < (int)uVar4) {
        uVar6 = uVar14 & 3;
        if ((ulong)uVar4 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          pwVar11 = param_2 + 2;
          do {
            puVar10 = (undefined1 *)((long)param_1 + lVar9 + 1);
            lVar9 = lVar9 + 4;
            puVar10[-1] = (char)pwVar11[-2];
            *puVar10 = (char)pwVar11[-1];
            puVar10[1] = (char)*pwVar11;
            pwVar1 = pwVar11 + 1;
            pwVar11 = pwVar11 + 4;
            puVar10[2] = (char)*pwVar1;
          } while (uVar4 - uVar6 != lVar9);
        }
        if (uVar6 != 0) {
          lVar7 = -uVar6;
          pwVar11 = param_2 + lVar9;
          puVar10 = (undefined1 *)((long)param_1 + lVar9);
          do {
            lVar7 = lVar7 + 1;
            *puVar10 = (char)*pwVar11;
            pwVar11 = pwVar11 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar7 != 0);
        }
      }
      iVar8 = (int)(uVar14 >> 3);
    }
    if (-1 < iVar8) {
      lVar9 = (long)iVar8 + 1;
      puVar10 = (undefined1 *)((long)param_1 + (long)iVar8 * 8 + 3);
      do {
        uVar2 = puVar10[-3];
        puVar10[-3] = puVar10[4];
        puVar10[4] = uVar2;
        uVar2 = puVar10[-2];
        puVar10[-2] = puVar10[3];
        uVar3 = puVar10[-1];
        puVar10[3] = uVar2;
        puVar10[-1] = puVar10[2];
        puVar10[2] = uVar3;
        uVar2 = *puVar10;
        lVar9 = lVar9 + -1;
        *puVar10 = puVar10[1];
        puVar10[1] = uVar2;
        puVar10 = puVar10 + -8;
      } while (0 < lVar9);
    }
  }
  return 0;
}


