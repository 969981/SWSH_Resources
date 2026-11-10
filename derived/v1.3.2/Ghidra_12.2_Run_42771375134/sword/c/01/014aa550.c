/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aa550; name: FUN_014aa550
 */


undefined8 FUN_014aa550(long param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  ushort uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  size_t sVar13;
  ulong uVar14;
  ulong *puVar15;
  code *pcVar16;
  ulong uVar17;
  uint *puVar18;
  int *piVar19;
  ushort *puVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  float fVar30;
  ulong local_150;
  ulong local_148;
  char *local_140;
  size_t local_138;
  ulong local_130;
  ulong local_128;
  char *local_120;
  size_t local_118;
  ulong local_110;
  ulong local_108;
  char *local_100;
  size_t local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined1 *local_e0;
  ulong local_d8;
  ulong local_d0 [2];
  undefined1 *local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined1 *local_80;
  ulong local_78;
  ulong local_70;
  
  lVar26 = *(long *)(param_2 + 8);
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar26;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  pcVar16 = *(code **)(param_1 + 0x78);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    (*pcVar16)(param_1 + 0x90);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
  }
  pcVar16 = *(code **)(param_1 + 0xf8);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (*pcVar16)(param_1 + 0x110);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x110);
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    uVar6 = *(undefined8 *)(param_2 + 0x98);
    uVar7 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x108) = uVar7;
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    *(undefined8 *)(param_1 + 0xf8) = uVar6;
  }
  plVar1 = (long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x1b8) != 0) {
    FUN_014ac000(plVar1,*(undefined8 *)(param_1 + 0x198));
    uVar23 = *(ulong *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x198) = 0;
    if (uVar23 != 0) {
      uVar17 = uVar23 & 3;
      if (uVar23 - 1 < 3) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        do {
          lVar12 = lVar26 * 8;
          lVar26 = lVar26 + 4;
          *(undefined8 *)(*plVar1 + lVar12) = 0;
          *(undefined8 *)(*plVar1 + lVar12 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar12 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar12 + 0x18) = 0;
        } while (uVar23 - uVar17 != lVar26);
      }
      if (uVar17 != 0) {
        lVar26 = lVar26 << 3;
        lVar12 = -uVar17;
        do {
          *(undefined8 *)(*plVar1 + lVar26) = 0;
          lVar26 = lVar26 + 8;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  piVar19 = (int *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar18 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
    piVar19 = (int *)((long)puVar18 + (ulong)*puVar18);
  }
  if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 7) ||
     (uVar23 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3], uVar23 == 0)) {
    puVar18 = (uint *)0x0;
  }
  else {
    puVar18 = (uint *)((long)piVar19 + uVar23);
    puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18);
  }
  fVar30 = (float)NEON_ucvtf(*puVar18);
  FUN_014ac350(plVar1,(long)(fVar30 / *(float *)(param_1 + 0x1c0)));
  if (*puVar18 != 0) {
    puVar27 = puVar18 + 1;
    do {
      piVar19 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar20 = (ushort *)((long)piVar19 - (long)*piVar19);
      uVar9 = *puVar20;
      if (uVar9 < 5) {
        piVar24 = (int *)0x0;
      }
      else {
        piVar24 = (int *)0x0;
        if ((ulong)puVar20[2] != 0) {
          puVar3 = (uint *)((long)piVar19 + (ulong)puVar20[2]);
          piVar24 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar23 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar23 == 0)) {
        uVar23 = 0;
        if (4 < uVar9) goto LAB_014aa814;
LAB_014aa800:
        piVar24 = (int *)0x0;
      }
      else {
        uVar23 = (ulong)*(ushort *)((long)piVar24 + uVar23);
        if (uVar9 < 5) goto LAB_014aa800;
LAB_014aa814:
        piVar24 = (int *)0x0;
        if ((ulong)puVar20[2] != 0) {
          puVar3 = (uint *)((long)piVar19 + (ulong)puVar20[2]);
          piVar24 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 7) ||
         (uVar17 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[3], uVar17 == 0)) {
        uVar17 = 0;
        if (4 < uVar9) goto LAB_014aa864;
LAB_014aa850:
        piVar24 = (int *)0x0;
      }
      else {
        uVar17 = (ulong)*(ushort *)((long)piVar24 + uVar17);
        if (uVar9 < 5) goto LAB_014aa850;
LAB_014aa864:
        piVar24 = (int *)0x0;
        if ((ulong)puVar20[2] != 0) {
          puVar3 = (uint *)((long)piVar19 + (ulong)puVar20[2]);
          piVar24 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 9) ||
         (uVar25 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[4], uVar25 == 0)) {
        uVar28 = 0;
        if (4 < uVar9) goto LAB_014aa8a4;
LAB_014aa8c8:
        piVar19 = (int *)0x0;
      }
      else {
        uVar28 = (uint)*(byte *)((long)piVar24 + uVar25);
        if (uVar9 < 5) goto LAB_014aa8c8;
LAB_014aa8a4:
        if ((ulong)puVar20[2] == 0) goto LAB_014aa8c8;
        puVar3 = (uint *)((long)piVar19 + (ulong)puVar20[2]);
        piVar19 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
      if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0xb) ||
         (uVar25 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[5], uVar25 == 0)) {
        uVar25 = 0;
      }
      else {
        uVar25 = (ulong)(*(char *)((long)piVar19 + uVar25) != '\0');
      }
      local_148 = 0xcbf29ce484222645;
      local_140 = "";
      local_138 = 0;
      local_130 = 0;
      local_128 = 0xcbf29ce484222645;
      local_120 = "";
      lVar26 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0xcbf29ce484222645;
      local_100 = "";
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0xcbf29ce484222645;
      local_e0 = &DAT_01d38550;
      local_d8 = 0;
      local_d0[0] = 0;
      local_d0[1] = 0xcbf29ce484222645;
      local_c0 = &DAT_01d38550;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0xcbf29ce484222645;
      local_a0 = &DAT_01d38550;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0xcbf29ce484222645;
      local_80 = &DAT_01d38550;
      local_78 = 0;
      local_70 = 0;
      piVar19 = (int *)((long)puVar27 + (ulong)*puVar27);
      if (10 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar21 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[5];
        if (uVar21 == 0) {
          lVar26 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar19 + uVar21);
          lVar26 = (long)puVar3 + (ulong)*puVar3;
        }
      }
      local_138 = strlen((char *)(lVar26 + 4));
      bVar8 = *(byte *)(lVar26 + 4);
      local_148 = 0xcbf29ce484222645;
      if (bVar8 != 0) {
        local_148 = 0xcbf29ce484222645;
        pbVar22 = (byte *)(lVar26 + 5);
        do {
          local_148 = (local_148 ^ bVar8) * 0x100000001b3;
          bVar8 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar8 != 0);
      }
      local_130 = 0;
      piVar19 = (int *)((long)puVar27 + (ulong)*puVar27);
      lVar12 = 0;
      if (6 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar21 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3];
        if (uVar21 == 0) {
          lVar12 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar19 + uVar21);
          lVar12 = (long)puVar3 + (ulong)*puVar3;
        }
      }
      local_140 = (char *)(lVar26 + 4);
      local_118 = strlen((char *)(lVar12 + 4));
      bVar8 = *(byte *)(lVar12 + 4);
      local_128 = 0xcbf29ce484222645;
      if (bVar8 != 0) {
        local_128 = 0xcbf29ce484222645;
        pbVar22 = (byte *)(lVar12 + 5);
        do {
          local_128 = (local_128 ^ bVar8) * 0x100000001b3;
          bVar8 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar8 != 0);
      }
      lVar26 = 0;
      local_110 = 0;
      piVar19 = (int *)((long)puVar27 + (ulong)*puVar27);
      if (8 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
        uVar21 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[4];
        if (uVar21 == 0) {
          lVar26 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar19 + uVar21);
          lVar26 = (long)puVar3 + (ulong)*puVar3;
        }
      }
      pcVar2 = (char *)(lVar26 + 4);
      local_120 = (char *)(lVar12 + 4);
      local_f8 = strlen(pcVar2);
      bVar8 = *(byte *)(lVar26 + 4);
      local_108 = 0xcbf29ce484222645;
      if (bVar8 != 0) {
        local_108 = 0xcbf29ce484222645;
        pbVar22 = (byte *)(lVar26 + 5);
        do {
          local_108 = (local_108 ^ bVar8) * 0x100000001b3;
          bVar8 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar8 != 0);
      }
      local_f0 = 0;
      piVar19 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar3 = (uint *)((long)piVar19 + (ulong)*(ushort *)((long)piVar19 + (0xc - (long)*piVar19)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      local_100 = pcVar2;
      if (*puVar3 != 0) {
        puVar29 = puVar3 + 1;
        do {
          puVar10 = PTR_PTR_0272a1f8;
          piVar19 = (int *)((long)puVar29 + (ulong)*puVar29);
          puVar20 = (ushort *)((long)piVar19 - (long)*piVar19);
          uVar9 = *puVar20;
          if (uVar9 < 5) {
            lVar26 = 0;
          }
          else {
            lVar26 = 0;
            if ((ulong)puVar20[2] != 0) {
              puVar4 = (uint *)((long)piVar19 + (ulong)puVar20[2]);
              lVar26 = (long)puVar4 + (ulong)*puVar4;
            }
          }
          pcVar2 = (char *)(lVar26 + 4);
          iVar11 = strcmp(pcVar2,*(char **)PTR_PTR_0272a1f8);
          if (iVar11 == 0) {
            lVar26 = 0;
joined_r0x014aabd0:
            if (6 < uVar9) goto LAB_014aabb0;
LAB_014aabf4:
            lVar12 = 0;
          }
          else {
            iVar11 = strcmp(pcVar2,*(char **)(puVar10 + 8));
            if (iVar11 == 0) {
              lVar26 = 1;
            }
            else {
              iVar11 = strcmp(pcVar2,*(char **)(puVar10 + 0x10));
              if (iVar11 == 0) {
                lVar26 = 2;
                goto joined_r0x014aabd0;
              }
              iVar11 = strcmp(pcVar2,*(char **)(puVar10 + 0x18));
              lVar26 = 3;
              if (iVar11 != 0) {
                lVar26 = 0xffffffff;
              }
            }
            if (uVar9 < 7) goto LAB_014aabf4;
LAB_014aabb0:
            if ((ulong)puVar20[3] == 0) goto LAB_014aabf4;
            puVar4 = (uint *)((long)piVar19 + (ulong)puVar20[3]);
            lVar12 = (long)puVar4 + (ulong)*puVar4;
          }
          sVar13 = strlen((char *)(lVar12 + 4));
          bVar8 = *(byte *)(lVar12 + 4);
          uVar21 = 0xcbf29ce484222645;
          if (bVar8 != 0) {
            uVar21 = 0xcbf29ce484222645;
            pbVar22 = (byte *)(lVar12 + 5);
            do {
              uVar21 = (uVar21 ^ bVar8) * 0x100000001b3;
              bVar8 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while (bVar8 != 0);
          }
          local_d0[lVar26 * 4 + -1] = sVar13;
          uVar14 = local_d0[lVar26 * 4];
          (&local_e8)[lVar26 * 4] = uVar21;
          local_d0[lVar26 * 4 + -2] = (ulong)(lVar12 + 4);
          local_d0[lVar26 * 4] = 0;
          if (uVar14 != 0) {
            (**(code **)(*(long *)(uVar14 + 0x48) + 0x18))();
          }
          puVar29 = puVar29 + 1;
        } while (puVar29 != puVar3 + 1 + *puVar3);
      }
      local_150 = uVar23 | uVar17 << 0x10 | (ulong)(uVar28 & 1) << 0x20 | uVar25 << 0x21;
      puVar15 = (ulong *)FUN_014ac100(plVar1,&local_150);
      uVar23 = local_130;
      *puVar15 = local_148;
      puVar15[1] = (ulong)local_140;
      puVar15[2] = local_138;
      if (local_130 != 0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
      }
      uVar17 = puVar15[3];
      puVar15[3] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      uVar23 = local_110;
      puVar15[4] = local_128;
      puVar15[5] = (ulong)local_120;
      puVar15[6] = local_118;
      if (local_110 != 0) {
        (**(code **)(*(long *)(local_110 + 0x48) + 0x10))();
      }
      uVar17 = puVar15[7];
      puVar15[7] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      uVar23 = local_f0;
      puVar15[8] = local_108;
      puVar15[9] = (ulong)local_100;
      puVar15[10] = local_f8;
      if (local_f0 != 0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
      }
      uVar17 = puVar15[0xb];
      puVar15[0xb] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      uVar23 = local_d0[0];
      puVar15[0xc] = local_e8;
      puVar15[0xd] = (ulong)local_e0;
      puVar15[0xe] = local_d8;
      if (local_d0[0] != 0) {
        (**(code **)(*(long *)(local_d0[0] + 0x48) + 0x10))();
      }
      uVar17 = puVar15[0xf];
      puVar15[0xf] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      uVar23 = local_b0;
      puVar15[0x10] = local_d0[1];
      puVar15[0x11] = (ulong)local_c0;
      puVar15[0x12] = local_b8;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
      }
      uVar17 = puVar15[0x13];
      puVar15[0x13] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      uVar23 = local_90;
      puVar15[0x14] = local_a8;
      puVar15[0x15] = (ulong)local_a0;
      puVar15[0x16] = local_98;
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
      }
      uVar17 = puVar15[0x17];
      puVar15[0x17] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      uVar23 = local_70;
      puVar15[0x18] = local_88;
      puVar15[0x19] = (ulong)local_80;
      puVar15[0x1a] = local_78;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      uVar17 = puVar15[0x1b];
      puVar15[0x1b] = uVar23;
      if (uVar17 != 0) {
        (**(code **)(*(long *)(uVar17 + 0x48) + 0x18))();
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
        local_b0 = 0;
      }
      if (local_d0[0] != 0) {
        (**(code **)(*(long *)(local_d0[0] + 0x48) + 0x18))();
        local_d0[0] = 0;
      }
      if (local_f0 != 0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        local_f0 = 0;
      }
      if (local_110 != 0) {
        (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
        local_110 = 0;
      }
      if (local_130 != 0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      }
      puVar27 = puVar27 + 1;
    } while (puVar27 != puVar18 + 1 + *puVar18);
  }
  return 1;
}


