/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004606f0; name: FUN_004606f0
 */


undefined8
FUN_004606f0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6,undefined4 param_7,void *param_8,uint param_9,byte param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  void *__dest;
  long lVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  
  puVar3 = PTR_DAT_02712a90;
  uVar16 = *(uint *)(param_1 + 0x58);
  if (uVar16 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x50);
    puVar14 = puVar6;
    do {
      if (((uint)*(ushort *)((long)puVar14 + 6) == (param_5 & 0xffff)) &&
         (*(int *)(puVar14 + 1) == param_6)) {
        if (puVar14[2] != 0) {
          FUN_00404870(*(undefined4 *)puVar3);
          puVar14[2] = 0;
        }
        puVar14[3] = 0;
        puVar6 = *(undefined8 **)(param_1 + 0x50);
        uVar16 = *(uint *)(param_1 + 0x58);
        if (puVar14 < puVar6 + (ulong)uVar16 * 4 + -4) {
          uVar9 = (long)puVar6 + ((ulong)uVar16 * 0x20 - (long)puVar14) + -0x21;
          uVar15 = ((uint)(uVar9 >> 5) & 0x7ffffff) + 1;
          puVar12 = puVar14;
          if ((uVar15 & 7) != 0) {
            lVar11 = -((ulong)uVar15 & 7);
            puVar13 = puVar14;
            do {
              puVar12 = puVar13 + 4;
              lVar11 = lVar11 + 1;
              puVar13[2] = puVar13[6];
              puVar13[3] = puVar13[7];
              *puVar13 = *puVar12;
              puVar13[1] = puVar13[5];
              puVar13 = puVar12;
            } while (lVar11 != 0);
          }
          if (0xdf < uVar9) {
            do {
              puVar12[2] = puVar12[6];
              puVar12[3] = puVar12[7];
              *puVar12 = puVar12[4];
              puVar12[1] = puVar12[5];
              puVar12[4] = puVar12[8];
              puVar12[5] = puVar12[9];
              puVar12[6] = puVar12[10];
              puVar12[7] = puVar12[0xb];
              puVar12[8] = puVar12[0xc];
              puVar12[9] = puVar12[0xd];
              puVar12[10] = puVar12[0xe];
              puVar12[0xb] = puVar12[0xf];
              puVar12[0xe] = puVar12[0x12];
              puVar12[0xf] = puVar12[0x13];
              puVar12[0xc] = puVar12[0x10];
              puVar12[0xd] = puVar12[0x11];
              puVar12[0x12] = puVar12[0x16];
              puVar12[0x13] = puVar12[0x17];
              puVar12[0x10] = puVar12[0x14];
              puVar12[0x11] = puVar12[0x15];
              puVar12[0x16] = puVar12[0x1a];
              puVar12[0x17] = puVar12[0x1b];
              puVar12[0x14] = puVar12[0x18];
              puVar12[0x15] = puVar12[0x19];
              puVar12[0x1a] = puVar12[0x1e];
              puVar12[0x1b] = puVar12[0x1f];
              puVar12[0x18] = puVar12[0x1c];
              puVar12[0x19] = puVar12[0x1d];
              puVar12[0x1e] = puVar12[0x22];
              puVar12[0x1f] = puVar12[0x23];
              puVar12[0x1c] = puVar12[0x20];
              puVar12[0x1d] = puVar12[0x21];
              puVar12 = puVar12 + 0x20;
            } while (puVar12 < puVar6 + (ulong)uVar16 * 4 + -4);
          }
          uVar16 = *(uint *)(param_1 + 0x58);
          puVar6 = *(undefined8 **)(param_1 + 0x50);
        }
        uVar16 = uVar16 - 1;
        *(uint *)(param_1 + 0x58) = uVar16;
      }
      else {
        puVar14 = puVar14 + 4;
      }
    } while (puVar6 + (ulong)uVar16 * 4 != puVar14);
  }
  puVar3 = PTR_DAT_02712a90;
  uVar15 = *(uint *)(param_1 + 0x5c);
  if (uVar15 <= uVar16) {
    uVar15 = uVar15 + 2;
    lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 5);
    if (lVar11 == 0) {
      return 0x34;
    }
    lVar4 = *(long *)(param_1 + 0x50);
    if ((lVar4 != 0) && (lVar4 != lVar11)) {
      uVar9 = (ulong)*(uint *)(param_1 + 0x58);
      if (*(uint *)(param_1 + 0x58) != 0) {
        lVar4 = 0;
        do {
          puVar14 = (undefined8 *)(lVar11 + lVar4);
          if (puVar14 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar11 + lVar4 + 0x10) = 0;
            *(undefined8 *)(lVar11 + lVar4 + 0x18) = 0;
          }
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar4);
          lVar4 = lVar4 + 0x20;
          puVar14[3] = puVar6[3];
          puVar14[2] = puVar6[2];
          puVar14[1] = puVar6[1];
          uVar9 = uVar9 - 1;
          *puVar14 = *puVar6;
        } while (uVar9 != 0);
        lVar4 = *(long *)(param_1 + 0x50);
      }
      FUN_00404870(*(undefined4 *)puVar3,lVar4);
    }
    *(long *)(param_1 + 0x50) = lVar11;
    *(uint *)(param_1 + 0x5c) = uVar15;
  }
  if (uVar16 < uVar15) {
    uVar16 = *(uint *)(param_1 + 0x58);
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x50) + (ulong)uVar16 * 0x20);
    *(uint *)(param_1 + 0x58) = uVar16 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      lVar11 = *(long *)(param_1 + 0x50) + (ulong)uVar16 * 0x20;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 8) = param_6;
      *puVar1 = param_2;
      *(short *)(lVar11 + 6) = (short)param_5;
      *(char *)(lVar11 + 4) = (char)param_3;
      *(char *)(lVar11 + 5) = (char)param_4;
      if ((param_8 != (void *)0x0) && (param_9 != 0)) {
        uVar2 = *(undefined4 *)PTR_DAT_02712a90;
        puVar17 = (uint *)(lVar11 + 0x18);
        puVar17[0] = 0;
        puVar17[1] = 0;
        __dest = (void *)FUN_00404690(uVar2,(ulong)param_9 * 0xc);
        *(undefined8 *)(lVar11 + 0x10) = __dest;
        if (__dest == (void *)0x0) {
          *puVar17 = 0;
          return 0x34;
        }
        memcpy(__dest,param_8,(ulong)(param_9 * 0xc));
        *puVar17 = param_9;
        *(undefined4 *)(lVar11 + 0x1c) = param_7;
      }
      if (*(uint *)(param_1 + 0x68) != 0) {
        puVar7 = (undefined1 *)(*(long *)(param_1 + 0x60) + 2);
        lVar11 = (ulong)*(uint *)(param_1 + 0x68) << 3;
        do {
          if (*(ushort *)(puVar7 + -2) == param_5) {
            *puVar7 = (char)param_4;
            break;
          }
          puVar7 = puVar7 + 8;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      if ((param_10 & 1) != 0) {
        lVar11 = *(long *)(param_1 + 0x70);
        if (lVar11 == 0) {
          return 1;
        }
        do {
          FUN_0049b200(*(undefined8 *)PTR_DAT_02712b50,lVar11,*puVar1,param_3,param_4,param_5,
                       param_6,param_7,param_8,param_9,lVar11 + 0x18,1,1);
          lVar11 = *(long *)(lVar11 + 0x58);
        } while (lVar11 != 0);
        for (lVar11 = *(long *)(param_1 + 0x70); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x58)) {
          uVar9 = (ulong)*(uint *)(lVar11 + 0x50);
          if (*(uint *)(lVar11 + 0x50) != 0) {
            puVar12 = *(undefined8 **)(lVar11 + 0x48);
            puVar14 = puVar12 + uVar9 * 2;
            puVar6 = puVar12;
            do {
              while (iVar8 = (int)uVar9, (uint)*(ushort *)(puVar6 + 1) == (param_5 & 0xffff)) {
                if (puVar6 < puVar14 + -2) {
                  uVar9 = (long)puVar14 + (-0x11 - (long)puVar6);
                  uVar16 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
                  puVar12 = puVar6;
                  if ((uVar16 & 7) != 0) {
                    lVar4 = -((ulong)uVar16 & 7);
                    puVar13 = puVar6;
                    do {
                      puVar12 = puVar13 + 2;
                      *puVar13 = *puVar12;
                      puVar13[1] = puVar13[3];
                      lVar4 = lVar4 + 1;
                      puVar13 = puVar12;
                    } while (lVar4 != 0);
                  }
                  if (0x6f < uVar9) {
                    do {
                      *puVar12 = puVar12[2];
                      puVar12[1] = puVar12[3];
                      puVar12[2] = puVar12[4];
                      puVar12[3] = puVar12[5];
                      puVar12[4] = puVar12[6];
                      puVar12[5] = puVar12[7];
                      puVar12[6] = puVar12[8];
                      puVar12[7] = puVar12[9];
                      puVar12[8] = puVar12[10];
                      puVar12[9] = puVar12[0xb];
                      puVar12[10] = puVar12[0xc];
                      puVar12[0xb] = puVar12[0xd];
                      puVar12[0xc] = puVar12[0xe];
                      puVar12[0xd] = puVar12[0xf];
                      puVar13 = puVar12 + 0x10;
                      puVar12[0xe] = *puVar13;
                      puVar12[0xf] = puVar12[0x11];
                      puVar12 = puVar13;
                    } while (puVar13 < puVar14 + -2);
                  }
                  iVar8 = *(int *)(lVar11 + 0x50);
                  puVar12 = *(undefined8 **)(lVar11 + 0x48);
                }
                uVar16 = iVar8 - 1;
                uVar9 = (ulong)uVar16;
                *(uint *)(lVar11 + 0x50) = uVar16;
                puVar14 = puVar12 + (ulong)uVar16 * 2;
                if (puVar14 == puVar6) goto LAB_00460bac;
              }
              puVar6 = puVar6 + 2;
              puVar14 = puVar12 + uVar9 * 2;
            } while (puVar14 != puVar6);
          }
LAB_00460bac:
          puVar5 = *(ushort **)(*(long *)(lVar11 + 0x10) + 0x60);
          uVar16 = *(uint *)(*(long *)(lVar11 + 0x10) + 0x68);
          puVar10 = puVar5;
          if (uVar16 == 0) {
LAB_00460bec:
            if (puVar10 != puVar5 + (ulong)uVar16 * 4) {
              FUN_00462050(*(undefined4 *)(puVar10 + 2),lVar11,param_5);
            }
          }
          else {
            lVar4 = (ulong)uVar16 << 3;
            do {
              if ((uint)*puVar10 == (param_5 & 0xffff)) goto LAB_00460bec;
              lVar4 = lVar4 + -8;
              puVar10 = puVar10 + 4;
            } while (lVar4 != 0);
          }
        }
      }
      return 1;
    }
  }
  return 0x34;
}


