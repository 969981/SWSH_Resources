/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005091f0; name: FUN_005091f0
 */


void FUN_005091f0(undefined1 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *__src;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  uint uVar16;
  undefined1 auStack_d0 [128];
  
  uVar2 = param_3 & 0xffff;
  puVar7 = auStack_d0 + (0x80 - ((ulong)(uVar2 + 0xf) & 0x1fff0));
  __src = param_1;
  if (1 < uVar2) {
    uVar16 = 1;
    puVar14 = puVar7;
    do {
      puVar7 = __src;
      __src = puVar14;
      if (uVar16 < uVar2) {
        uVar8 = 0;
        uVar6 = 0;
        uVar10 = uVar16;
        do {
          while( true ) {
            uVar1 = uVar8 + uVar16 * 2;
            if (uVar2 <= uVar1) {
              uVar1 = uVar2;
            }
            uVar9 = uVar10;
            if ((uVar8 < uVar10) && (uVar10 < uVar1)) {
              do {
                uVar13 = (ulong)uVar8;
                bVar3 = puVar7[(int)uVar9];
                uVar11 = uVar6 & 0xffff;
                uVar6 = uVar6 + 1;
                if (*(ushort *)(param_2 + (ulong)(byte)puVar7[uVar13] * 2) <
                    *(ushort *)(param_2 + (ulong)bVar3 * 2)) {
                  uVar8 = uVar8 + 1;
                  bVar3 = puVar7[uVar13];
                }
                else {
                  uVar9 = uVar9 + 1;
                }
                __src[uVar11] = bVar3;
              } while ((int)uVar8 < (int)uVar10 && (int)uVar9 < (int)uVar1);
            }
            if ((int)uVar8 < (int)uVar10) break;
            if ((int)uVar9 < (int)uVar1) goto LAB_005093a4;
LAB_005092cc:
            uVar8 = uVar6 & 0xffff;
            uVar10 = uVar16 + uVar8;
            if (uVar2 <= uVar10) goto LAB_005093f4;
          }
          lVar12 = (long)(int)uVar8;
          uVar13 = ((long)(int)uVar10 + -1) - lVar12;
          uVar11 = uVar6;
          if ((uVar10 - uVar8 & 3) != 0) {
            lVar4 = -((ulong)(uVar10 - uVar8) & 3);
            lVar15 = lVar12;
            uVar5 = uVar6;
            do {
              lVar12 = lVar15 + 1;
              uVar11 = uVar5 + 1;
              lVar4 = lVar4 + 1;
              __src[uVar5 & 0xffff] = puVar7[lVar15];
              lVar15 = lVar12;
              uVar5 = uVar11;
            } while (lVar4 != 0);
          }
          if (2 < uVar13) {
            lVar4 = (int)uVar10 - lVar12;
            puVar14 = puVar7 + lVar12 + 3;
            do {
              __src[uVar11 & 0xffff] = puVar14[-3];
              __src[(ulong)(uVar11 + 1) & 0xffff] = puVar14[-2];
              __src[(ulong)(uVar11 + 2) & 0xffff] = puVar14[-1];
              uVar5 = uVar11 + 3;
              uVar11 = uVar11 + 4;
              lVar4 = lVar4 + -4;
              __src[(ulong)uVar5 & 0xffff] = *puVar14;
              puVar14 = puVar14 + 4;
            } while (lVar4 != 0);
          }
          uVar6 = (uVar6 + uVar10) - uVar8;
          if ((int)uVar1 <= (int)uVar9) goto LAB_005092cc;
LAB_005093a4:
          lVar12 = (long)(int)uVar9;
          uVar10 = uVar6;
          do {
            puVar14 = puVar7 + lVar12;
            lVar12 = lVar12 + 1;
            uVar8 = uVar10 & 0xffff;
            uVar10 = uVar10 + 1;
            __src[uVar8] = *puVar14;
          } while (lVar12 < (long)(ulong)uVar1);
          uVar6 = (uVar6 + uVar1) - uVar9;
          uVar8 = uVar6 & 0xffff;
          uVar10 = uVar16 + uVar8;
        } while (uVar10 < uVar2);
      }
      else {
        uVar6 = 0;
      }
LAB_005093f4:
      uVar10 = uVar6 & 0xffff;
      if (uVar10 < (param_3 & 0xffff)) {
        memcpy(__src + uVar10,puVar7 + uVar10,((ulong)((param_3 - 1) - uVar6) & 0xffff) + 1);
      }
      uVar16 = (uVar16 & 0x7fff) << 1;
      puVar14 = puVar7;
    } while (uVar16 < uVar2);
  }
  if ((puVar7 == param_1) && ((param_3 & 0xffff) != 0)) {
    memcpy(param_1,__src,(ulong)uVar2);
  }
  return;
}


