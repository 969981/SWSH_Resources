/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f1fc0; name: FUN_007f1fc0
 */


void FUN_007f1fc0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  byte *local_110;
  uint local_108;
  void *local_100;
  byte *local_e0;
  undefined8 local_d8;
  void *local_d0;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar12 = FUN_0084ad30();
    *(undefined8 *)(param_2 + 0x20) = uVar12;
    iVar3 = *(int *)(param_2 + 0x48);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x48);
  }
  if (0 < iVar3) {
    lVar13 = 0;
    lVar8 = 0;
    do {
      FUN_007f1fc0(param_1,*(long *)(param_2 + 0x50) + lVar13,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0xa8;
    } while (lVar8 < *(int *)(param_2 + 0x48));
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar8 = 0;
    do {
      lVar13 = *(long *)(param_2 + 0x60);
      plVar9 = (long *)(lVar13 + lVar8 * 0x38 + 0x20);
      if (*plVar9 == 0) {
        lVar7 = FUN_0084fe30();
        *plVar9 = lVar7;
        piVar10 = (int *)(lVar13 + lVar8 * 0x38 + 0x2c);
        iVar3 = *piVar10;
      }
      else {
        piVar10 = (int *)(lVar13 + lVar8 * 0x38 + 0x2c);
        iVar3 = *piVar10;
      }
      if (0 < iVar3) {
        lVar7 = 0;
        lVar14 = 0x20;
        do {
          while (lVar15 = *(long *)(lVar13 + lVar8 * 0x38 + 0x30), *(long *)(lVar15 + lVar14) != 0)
          {
            lVar7 = lVar7 + 1;
            lVar14 = lVar14 + 0x28;
            if (iVar3 <= lVar7) goto LAB_007f20ec;
          }
          uVar12 = FUN_00850fb0();
          *(undefined8 *)(lVar15 + lVar14) = uVar12;
          iVar3 = *piVar10;
          lVar7 = lVar7 + 1;
          lVar14 = lVar14 + 0x28;
        } while (lVar7 < iVar3);
      }
LAB_007f20ec:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_2 + 0x58));
  }
  uVar4 = (ulong)*(uint *)(param_2 + 0x2c);
  if (0 < (int)*(uint *)(param_2 + 0x2c)) {
    lVar13 = 0;
    lVar8 = 0;
    do {
      FUN_007f2560(param_1,*(long *)(param_2 + 0x30) + lVar13,
                   *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar8 * 8 + 8));
      uVar4 = (ulong)*(int *)(param_2 + 0x2c);
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar8 < (long)uVar4);
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar13 = 0;
    lVar8 = 0;
    do {
      FUN_007f2560(param_1,*(long *)(param_2 + 0x80) + lVar13,
                   *(undefined8 *)(*(long *)(param_3 + 0x48) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar8 < *(int *)(param_2 + 0x78));
    uVar4 = (ulong)*(uint *)(param_2 + 0x2c);
  }
  if (0 < (int)uVar4) {
    lVar13 = 0;
    lVar8 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x30) + lVar13;
      puVar11 = *(undefined8 **)(lVar7 + 0x58);
      if (puVar11 != (undefined8 *)0x0) {
        if ((0 < *(int *)((long)puVar11 + 0x1c)) && (*(undefined8 **)(lVar7 + -0x38) != puVar11)) {
          std::operator+(*(string **)(param_2 + 8),".");
          pbVar5 = *(byte **)(*(long *)(param_2 + 0x30) + lVar13 + -0x90);
          pbVar6 = *(byte **)(pbVar5 + 0x10);
          if ((*pbVar5 & 1) == 0) {
            pbVar6 = pbVar5 + 1;
          }
          puVar2 = (ulong *)std::string::append((char *)local_98,(ulong)pbVar6);
          local_80 = *puVar2;
          local_78 = puVar2[1];
          local_70 = (void *)puVar2[2];
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          pbVar6 = *(byte **)(*(long *)(param_2 + 0x30) + lVar13 + -0x90);
          local_e0 = *(byte **)(pbVar6 + 0x10);
          uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar8 * 8);
          if ((*pbVar6 & 1) == 0) {
            local_e0 = pbVar6 + 1;
          }
          uVar1 = (uint)(*pbVar6 >> 1);
          if ((*pbVar6 & 1) != 0) {
            uVar1 = (uint)*(undefined8 *)(pbVar6 + 8);
          }
          local_d8 = CONCAT44(local_d8._4_4_,uVar1);
          pbVar6 = (byte *)*puVar11;
          local_110 = *(byte **)(pbVar6 + 0x10);
          if ((*pbVar6 & 1) == 0) {
            local_110 = pbVar6 + 1;
          }
          local_140 = 0;
          local_138 = 0xffffffff;
          local_170 = 0;
          local_168 = 0xffffffff;
          local_1a0 = 0;
          local_198 = 0xffffffff;
          local_1d0 = 0;
          local_1c8 = 0xffffffff;
          local_200 = 0;
          local_1f8 = 0xffffffff;
          local_230 = 0;
          local_228 = 0xffffffff;
          local_260 = 0;
          local_258 = 0xffffffff;
          local_290 = 0;
          local_288 = 0xffffffff;
          local_108 = (uint)(*pbVar6 >> 1);
          if ((*pbVar6 & 1) != 0) {
            local_108 = (uint)*(undefined8 *)(pbVar6 + 8);
          }
          FUN_00863000(local_b0,
                       "Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion of the \"$1\" oneof definition."
                       ,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,
                       &local_230,&local_260,&local_290);
          FUN_007eaaf0(param_1,&local_80,uVar12,9,local_b0);
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
        }
        lVar7 = *(long *)(param_2 + 0x40) +
                (long)((int)((ulong)((long)puVar11 - *(long *)(puVar11[2] + 0x40)) >> 4) *
                      -0x55555555) * 0x30;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        uVar4 = (ulong)*(uint *)(param_2 + 0x2c);
      }
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar8 < (int)uVar4);
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar13 = 0;
    lVar8 = 0;
    do {
      lVar14 = *(long *)(param_2 + 0x40);
      lVar7 = lVar14 + lVar13;
      iVar3 = *(int *)(lVar7 + 0x1c);
      if (iVar3 == 0) {
        std::operator+(*(string **)(param_2 + 8),".");
        pbVar5 = *(byte **)(lVar14 + lVar13);
        pbVar6 = *(byte **)(pbVar5 + 0x10);
        if ((*pbVar5 & 1) == 0) {
          pbVar6 = pbVar5 + 1;
        }
        puVar11 = (undefined8 *)std::string::append((char *)&local_110,(ulong)pbVar6);
        local_e0 = (byte *)*puVar11;
        local_d8 = puVar11[1];
        local_d0 = (void *)puVar11[2];
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        FUN_007eac10(param_1,&local_e0,*(undefined8 *)(*(long *)(param_3 + 0xa8) + lVar8 * 8 + 8),0,
                     "Oneof must have at least one field.");
        if (((ulong)local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if (((ulong)local_110 & 1) != 0) {
          operator_delete(local_100);
        }
        iVar3 = *(int *)(lVar7 + 0x1c);
      }
      uVar12 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),iVar3 << 3);
      *(undefined8 *)(lVar7 + 0x20) = uVar12;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      if (*(long *)(lVar7 + 0x28) == 0) {
        uVar12 = FUN_0084f0d0();
        *(undefined8 *)(lVar7 + 0x28) = uVar12;
      }
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0x30;
    } while (lVar8 < *(int *)(param_2 + 0x38));
    uVar4 = (ulong)*(uint *)(param_2 + 0x2c);
  }
  if (0 < (int)uVar4) {
    lVar13 = 0;
    lVar8 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x30) + lVar13;
      lVar14 = *(long *)(lVar7 + 0x58);
      if (lVar14 != 0) {
        lVar14 = *(long *)(param_2 + 0x40) +
                 (long)((int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x10) + 0x40)) >> 4) *
                       -0x55555555) * 0x30;
        *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(lVar14 + 0x1c);
        lVar7 = *(long *)(param_2 + 0x30);
        iVar3 = *(int *)(lVar14 + 0x1c);
        *(int *)(lVar14 + 0x1c) = iVar3 + 1;
        *(long *)(*(long *)(lVar14 + 0x20) + (long)iVar3 * 8) = lVar7 + lVar13;
        uVar4 = (ulong)*(uint *)(param_2 + 0x2c);
      }
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar8 < (int)uVar4);
  }
  return;
}


