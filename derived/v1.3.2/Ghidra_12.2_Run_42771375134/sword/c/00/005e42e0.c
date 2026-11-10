/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e42e0; name: FUN_005e42e0
 */


void FUN_005e42e0(long *param_1,long *param_2)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char local_44 [4];
  
  builtin_strncpy(local_44,"/:\\",4);
  lVar4 = *param_2;
  *param_1 = lVar4;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    *param_1 = lVar4;
  }
  uVar12 = param_2[2];
  if (uVar12 != 0) {
    lVar4 = 0;
    do {
      pcVar2 = (char *)(((ulong)local_44 | 1) + lVar4);
      lVar4 = lVar4 + 1;
    } while (*pcVar2 != '\0');
    if (((0 < (long)uVar12) && (lVar4 != 0)) && (0 < lVar4)) {
      lVar5 = param_2[1];
      uVar13 = uVar12;
      do {
        uVar12 = uVar12 - 1;
        uVar11 = uVar13 - 1;
        lVar9 = 0;
        do {
          if (*(char *)(lVar5 + uVar11) == local_44[lVar9]) {
            if ((long)uVar13 < 2) {
              return;
            }
            if ((ulong)param_1[4] <= uVar11) {
              uVar7 = param_1[4] * 2;
              uVar3 = uVar13;
              if (uVar13 <= uVar7) {
                uVar3 = uVar7;
              }
              if (param_1[3] != 0) {
                uVar3 = param_1[3] + uVar13;
              }
              FUN_005c5e00(param_1,uVar3,0);
              lVar5 = param_2[1];
            }
            lVar4 = param_1[1];
            if ((lVar4 != 0) && (1 < (long)uVar13)) {
              if (uVar13 - 2 < 3) {
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                do {
                  puVar6 = (undefined1 *)(lVar5 + 1 + lVar9);
                  puVar8 = (undefined1 *)(lVar4 + 1 + lVar9);
                  lVar9 = lVar9 + 4;
                  puVar8[-1] = puVar6[-1];
                  *puVar8 = *puVar6;
                  puVar8[1] = puVar6[1];
                  puVar8[2] = puVar6[2];
                } while (uVar12 - (uVar12 & 3) != lVar9);
              }
              if ((uVar11 & 3) != 0) {
                lVar10 = -(uVar12 & 3);
                puVar6 = (undefined1 *)(lVar5 + lVar9);
                puVar8 = (undefined1 *)(lVar4 + lVar9);
                do {
                  lVar10 = lVar10 + 1;
                  *puVar8 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar8 = puVar8 + 1;
                } while (lVar10 != 0);
              }
              *(undefined1 *)(lVar4 + uVar11) = 0;
            }
            param_1[2] = uVar11;
            return;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar4);
        bVar1 = 1 < (long)uVar13;
        uVar13 = uVar11;
      } while (bVar1);
    }
  }
  return;
}


