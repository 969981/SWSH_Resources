/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012e2d0; name: FUN_0012e2d0
 */


void FUN_0012e2d0(long param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  undefined2 uVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined1 auStack_160 [256];
  
  uVar9 = *(ushort *)(param_2 + 0x30);
  if ((uVar9 >> 9 & 1) != 0) {
    lVar21 = *(long *)(*(long *)(param_1 + 0x1c00) + 8);
    bVar8 = *(byte *)(param_2 + 0x36);
    uVar6 = *(uint *)(param_2 + 0x40);
    uVar7 = *(uint *)(param_2 + 0x44);
    lVar2 = lVar21 + (ulong)uVar6 * 0x20;
    lVar21 = lVar21 + (ulong)uVar7 * 0x20;
    uVar29 = (uint)*(byte *)(param_2 + 0x37);
    if (((uVar9 >> 7 & 1) == 0) && ((*(byte *)((long)param_4 + 0x1a) >> 5 & 1) == 0)) {
      if ((uVar9 >> 5 & 1) == 0) {
        bVar13 = false;
        uVar9 = (ushort)((*(uint *)(lVar21 + 0x1c) & 1) == 0) & uVar9 >> 6;
      }
      else {
        bVar13 = (*(byte *)(lVar2 + 0x1c) & 1) == 0;
        uVar9 = (ushort)((*(uint *)(lVar21 + 0x1c) & 1) == 0) & uVar9 >> 6;
      }
      if ((uVar9 == 0) && (!bVar13)) {
        uVar6 = (uint)bVar8;
        if (bVar8 <= *(byte *)(param_2 + 0x37)) {
          uVar6 = uVar29;
        }
        if (*(char *)(param_4 + 3) != '\0') {
          *(int *)(param_1 + 0x1c1c) = *(int *)(param_1 + 0x1c1c) + 1;
        }
        FUN_0012e8d0(param_4,param_3,param_1,0,4 < uVar6);
        return;
      }
    }
    *(byte *)((long)param_4 + 0x1a) = *(byte *)((long)param_4 + 0x1a) & 0xdf;
    bVar13 = uVar29 <= bVar8;
    uVar28 = (uint)bVar8;
    bVar14 = uVar28 == uVar29;
    lVar5 = lVar2;
    if (!bVar13 || bVar14) {
      lVar5 = lVar21;
      lVar21 = lVar2;
    }
    *(float *)(param_1 + 0x1be0) =
         *(float *)(*(long *)(param_1 + 0x1c08) + (ulong)uVar6 * 4) +
         *(float *)(*(long *)(param_1 + 0x1c08) + (ulong)uVar7 * 4);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18);
    if (!bVar13 || bVar14) {
      lVar2 = *(long *)(param_2 + 0x18);
      lVar11 = *(long *)(param_2 + 0x10);
    }
    puVar3 = (undefined8 *)(param_1 + 0x1240);
    uVar6 = uVar28;
    if (bVar13) {
      uVar6 = uVar29;
    }
    if (!bVar13 || bVar14) {
      uVar28 = uVar29;
    }
    if ((*(byte *)((long)param_3 + 0xb) >> 1 & 1) == 0) {
      if ((*(byte *)((long)param_3 + 0xb) & 1) != 0) {
        uVar16 = *param_3;
        uVar17 = uVar16 >> 6;
        uVar23 = uVar16 + 0x7f >> 6;
        uVar22 = (1 - uVar17) + uVar23;
        Hint_Prefetch(uVar16,0,0,0);
        uVar19 = uVar16;
        if ((uVar22 & 3) != 0) {
          lVar25 = -(uVar22 & 3);
          do {
            Hint_Prefetch(uVar19,0,0,0);
            uVar19 = uVar19 + 0x40;
            uVar22 = uVar22 - 1;
            lVar25 = lVar25 + 1;
          } while (lVar25 != 0);
        }
        if (2 < uVar23 - uVar17) {
          do {
            Hint_Prefetch(uVar19,0,0,0);
            Hint_Prefetch(uVar19 + 0x40,0,0,0);
            uVar22 = uVar22 - 4;
            Hint_Prefetch(uVar19 + 0x80,0,0,0);
            Hint_Prefetch(uVar19 + 0xc0,0,0,0);
            uVar19 = uVar19 + 0x100;
          } while (uVar22 != 0);
        }
        uVar22 = uVar16 + 0xff >> 6;
        uVar19 = (1 - uVar17) + uVar22;
        if ((uVar19 & 3) != 0) {
          lVar25 = -(uVar19 & 3);
          do {
            Hint_Prefetch(uVar16,0,0,0);
            uVar16 = uVar16 + 0x40;
            uVar19 = uVar19 - 1;
            lVar25 = lVar25 + 1;
          } while (lVar25 != 0);
        }
        if (2 < uVar22 - uVar17) {
          do {
            Hint_Prefetch(uVar16,0,0,0);
            Hint_Prefetch(uVar16 + 0x40,0,0,0);
            uVar19 = uVar19 - 4;
            Hint_Prefetch(uVar16 + 0x80,0,0,0);
            Hint_Prefetch(uVar16 + 0xc0,0,0,0);
            uVar16 = uVar16 + 0x100;
          } while (uVar19 != 0);
        }
      }
      bVar13 = false;
    }
    else {
      FUN_00293780(puVar3,*param_3,lVar21,lVar5);
      *(byte *)((long)param_3 + 0xb) = *(byte *)((long)param_3 + 0xb) | 3;
      *param_3 = (ulong)puVar3;
      bVar13 = true;
    }
    lVar25 = param_1 + (ulong)uVar6 * 0x1c + (ulong)uVar28 * 4;
    *(int *)(lVar25 + 0x78) = *(int *)(lVar25 + 0x78) + 1;
    *(undefined4 *)(param_1 + 0x1230) = 0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    *(undefined2 *)(param_4 + 3) = 0;
    puVar12 = PTR_PTR_02710bd8;
    *(undefined1 *)((long)param_4 + 0x1a) = 0;
    lVar25 = (ulong)uVar28 * 8;
    (**(code **)(puVar12 + lVar25 + (ulong)uVar6 * 0x38))
              (lVar11 + 0x28,lVar2 + 0x28,lVar21,lVar5,param_1 + 0x1be0,param_3,param_1 + 0x230,
               param_1 + 8);
    (**(code **)(PTR_PTR_02710c98 + lVar25 + (ulong)uVar6 * 0x38))(lVar11,lVar2,param_1,auStack_160)
    ;
    if ((uVar29 < bVar8) &&
       (uVar19 = (ulong)*(uint *)(param_1 + 0x1230), *(uint *)(param_1 + 0x1230) != 0)) {
      puVar18 = (undefined2 *)((ulong)auStack_160 | 2);
      pfVar20 = (float *)(param_1 + 0x238);
      do {
        pfVar20[-2] = -pfVar20[-2];
        pfVar20[-1] = -pfVar20[-1];
        uVar19 = uVar19 - 1;
        *pfVar20 = -*pfVar20;
        uVar10 = puVar18[-1];
        puVar18[-1] = *puVar18;
        *puVar18 = uVar10;
        puVar18 = puVar18 + 2;
        pfVar20 = pfVar20 + 0x10;
      } while (uVar19 != 0);
    }
    if (bVar13) {
      pbVar4 = (byte *)(param_1 + 0x127e);
      sVar1 = (ushort)*(byte *)(param_1 + 0x127f) * 0x30 + (ushort)*pbVar4 * 0x10 + 0x30;
      puVar15 = (undefined8 *)FUN_0011c940(param_1 + 0x218,sVar1);
      bVar8 = *pbVar4;
      uVar19 = (ulong)bVar8;
      *(uint *)(puVar15 + 4) = (uint)bVar8;
      puVar15[3] = *(undefined8 *)(param_1 + 0x1258);
      puVar15[2] = *(undefined8 *)(param_1 + 0x1250);
      puVar15[1] = *(undefined8 *)(param_1 + 0x1248);
      *puVar15 = *puVar3;
      if (bVar8 != 0) {
        bVar8 = *pbVar4;
        uVar16 = 0;
        puVar26 = (uint *)(puVar15 + 6);
        do {
          uVar22 = (ulong)*(byte *)(param_1 + 0x1240 + uVar16 + 0x38);
          uVar6 = *(uint *)(param_1 + 0x1240 + uVar22 * 400 + 0x1c0);
          *puVar26 = uVar6;
          if (uVar6 != 0) {
            puVar24 = puVar26 + 7;
            puVar27 = (uint *)(param_1 + 0x12b0 + uVar22 * 400);
            uVar19 = (ulong)uVar6;
            do {
              uVar30 = *(undefined8 *)(puVar27 + -0xc);
              *(undefined8 *)(puVar24 + -1) = *(undefined8 *)(puVar27 + -10);
              *(undefined8 *)(puVar24 + -3) = uVar30;
              uVar30 = *(undefined8 *)(puVar27 + -8);
              *(undefined8 *)(puVar24 + 3) = *(undefined8 *)(puVar27 + -6);
              *(undefined8 *)(puVar24 + 1) = uVar30;
              uVar30 = *(undefined8 *)(puVar27 + -4);
              *(undefined8 *)(puVar24 + 7) = *(undefined8 *)(puVar27 + -2);
              *(undefined8 *)(puVar24 + 5) = uVar30;
              uVar19 = uVar19 - 1;
              *puVar24 = *puVar27;
              puVar24 = puVar24 + 0xc;
              puVar27 = puVar27 + 0x10;
            } while (uVar19 != 0);
            uVar19 = (ulong)bVar8;
          }
          puVar26 = puVar26 + (ulong)uVar6 * 0xc + 4;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar19);
      }
      *param_3 = (ulong)puVar15;
      *(short *)(param_3 + 1) = sVar1;
      *(byte *)((long)param_3 + 0xb) = *(byte *)((long)param_3 + 0xb) | 3;
    }
    FUN_0012e780(*(undefined2 *)(param_2 + 0x30),param_4,param_1,auStack_160,4 < uVar28);
  }
  return;
}


