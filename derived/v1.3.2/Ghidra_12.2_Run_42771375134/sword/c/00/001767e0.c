/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001767e0; name: FUN_001767e0
 */


void FUN_001767e0(long param_1,int *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  bool bVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  int iVar24;
  ulong uVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined1 auStack_870 [64];
  undefined8 local_830;
  undefined4 local_828;
  long local_820;
  undefined4 *local_818;
  undefined4 *local_810;
  uint local_808;
  uint local_804;
  undefined8 local_800;
  undefined4 local_7f8;
  int local_7f4;
  uint local_7f0;
  uint local_7ec;
  undefined1 local_7e8;
  uint local_7e4;
  undefined4 local_788;
  undefined4 local_180;
  long local_178;
  undefined2 *local_170;
  undefined4 local_168;
  undefined2 local_160 [128];
  
  uVar10 = *(ushort *)(param_2 + 1);
  uVar25 = 0;
  local_168 = 0;
  if (uVar10 != 0) {
    lVar16 = *(long *)(param_1 + 0xc0);
    uVar21 = 0;
    iVar3 = *param_2;
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x2d50);
    lVar18 = *(long *)(lVar16 + 0x20);
    do {
      uVar22 = *(uint *)(*(long *)(*(long *)(lVar14 + (ulong)(iVar3 + uVar21) * 8) + 0x18) + 0x6c);
      plVar1 = (long *)(lVar18 + (ulong)(*(int *)(lVar16 + ((ulong)uVar22 & 7) * 4) + (uVar22 >> 3))
                                 * 0x20);
      lVar17 = *plVar1;
      bVar7 = *(byte *)((long)plVar1 + 0x19);
      local_830 = 0;
      local_828 = 0;
      if (lVar17 == 0) {
        uVar19 = 0;
        local_7e4 = 0;
        local_7f0 = 0;
        local_7ec = 1;
      }
      else {
        bVar8 = *(byte *)(lVar17 + 0x2b);
        local_810 = (undefined4 *)(plVar1[2] + (ulong)*(byte *)(plVar1 + 3) * 4);
        local_820 = lVar17;
        local_818 = (undefined4 *)plVar1[1];
        local_7e4 = bVar8 & 1;
        uVar22 = 0x10;
        if ((bVar8 & 2) != 0) {
          uVar22 = 0x40;
        }
        local_7ec = bVar8 >> 2 & 1;
        bVar13 = (bVar8 & 0x80) == 0;
        uVar20 = 0x20;
        if (bVar13) {
          uVar20 = uVar22;
        }
        uVar19 = (ulong)uVar20;
        local_7f0 = 2;
        if (bVar13) {
          local_7f0 = bVar8 >> 1 & 1;
        }
      }
      local_7f8 = 0x30;
      local_7f4 = (int)uVar19;
      local_800 = 0;
      local_804 = (uint)*(byte *)(plVar1 + 3);
      local_808 = (uint)bVar7;
      local_7e8 = 0;
      if ((local_7ec == 0) && (bVar7 != 0)) {
        bVar13 = false;
        local_7e8 = 0;
        uVar20 = 0;
        uVar22 = 0;
        do {
          while( true ) {
            if (uVar22 != 0) {
              if (uVar20 < *(byte *)(local_820 + 0x29)) {
                local_818 = (undefined4 *)
                            ((long)local_818 +
                            (ulong)((*(byte *)(local_820 + 0x29) - uVar20) * (int)uVar19));
              }
              local_820 = local_820 + 0x30;
            }
            uVar22 = uVar22 + 1;
            local_800 = (ulong)uVar22 << 0x20;
            bVar8 = *(byte *)(local_820 + 0x29);
            if (bVar8 != 0) break;
            uVar20 = 0;
joined_r0x00176b90:
            if (bVar7 <= uVar22) goto LAB_00176cf0;
          }
          uVar27 = (uint)bVar8;
          iVar24 = (int)uVar25;
          if (local_7e4 != 0) {
            if (bVar13) {
              local_810 = local_810 + 1;
              local_818 = (undefined4 *)((long)local_818 + uVar19);
            }
            local_800 = CONCAT44(uVar22,1);
            uVar4 = *(undefined4 *)(local_820 + 0x20);
            lVar17 = param_3 + uVar25 * 0x40;
            *(undefined4 *)(lVar17 + 0x48) = uVar4;
            uVar5 = *(undefined4 *)(local_820 + 0x24);
            *(undefined4 *)(lVar17 + 0x3c) = uVar5;
            uVar6 = *(undefined4 *)(local_820 + 0x1c);
            *(undefined4 *)(lVar17 + 0x4c) = uVar6;
            *(undefined4 *)(lVar17 + 0x44) = *local_810;
            uVar9 = *(undefined1 *)(local_820 + 0x2a);
            *(undefined1 *)(lVar17 + 0x40) = uVar9;
            if (local_7f0 == 0) {
              *(undefined4 *)(lVar17 + 0x2c) = 0x7f7fffff;
              puVar23 = &local_830;
            }
            else {
              *(undefined4 *)(lVar17 + 0x2c) = local_818[7];
              puVar23 = (undefined8 *)(local_818 + 4);
            }
            *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)puVar23;
            *(undefined4 *)(lVar17 + 0x34) = *(undefined4 *)((long)puVar23 + 4);
            *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(puVar23 + 1);
            *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(local_820 + 0x10);
            *(undefined4 *)(lVar17 + 0x14) = *(undefined4 *)(local_820 + 0x14);
            *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(local_820 + 0x18);
            *(undefined4 *)(lVar17 + 0x20) = *local_818;
            *(undefined4 *)(lVar17 + 0x24) = local_818[1];
            *(undefined4 *)(lVar17 + 0x28) = local_818[2];
            *(undefined4 *)(lVar17 + 0x1c) = local_818[3];
            uVar11 = *(undefined2 *)(local_820 + 0x2c);
            local_160[uVar25 * 2] = uVar11;
            uVar12 = *(undefined2 *)(local_820 + 0x2e);
            local_160[uVar25 * 2 + 1] = uVar12;
            if (uVar27 < 2) goto LAB_00176cdc;
            lVar17 = 0;
            puVar26 = local_810;
            do {
              uVar25 = (ulong)(uint)(iVar24 + 1 + (int)lVar17);
              local_800 = CONCAT44(local_800._4_4_,(int)lVar17 + 2);
              lVar2 = param_3 + uVar25 * 0x40;
              *(undefined4 *)(lVar2 + 0x48) = uVar4;
              *(undefined4 *)(lVar2 + 0x4c) = uVar6;
              *(undefined4 *)(lVar2 + 0x3c) = uVar5;
              local_818 = (undefined4 *)((long)local_818 + uVar19);
              puVar26 = puVar26 + 1;
              *(undefined4 *)(lVar2 + 0x44) = local_810[lVar17 + 1];
              *(undefined1 *)(lVar2 + 0x40) = uVar9;
              if (local_7f0 == 0) {
                puVar23 = &local_830;
                *(undefined4 *)(lVar2 + 0x2c) = 0x7f7fffff;
              }
              else {
                *(undefined4 *)(lVar2 + 0x2c) = local_818[7];
                puVar23 = (undefined8 *)(local_818 + 4);
              }
              *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)puVar23;
              *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)((long)puVar23 + 4);
              *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(puVar23 + 1);
              *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(local_820 + 0x10);
              *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(local_820 + 0x14);
              *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(local_820 + 0x18);
              *(undefined4 *)(lVar2 + 0x20) = *local_818;
              *(undefined4 *)(lVar2 + 0x24) = local_818[1];
              *(undefined4 *)(lVar2 + 0x28) = local_818[2];
              lVar17 = lVar17 + 1;
              *(undefined4 *)(lVar2 + 0x1c) = local_818[3];
              iVar15 = (int)lVar17;
              local_160[uVar25 * 2] = uVar11;
              local_160[uVar25 * 2 + 1] = uVar12;
            } while (iVar15 + 1U < uVar27);
            uVar27 = iVar24 + 1 + iVar15;
            uVar20 = iVar15 + 1;
            local_810 = puVar26;
joined_r0x00176b90:
            bVar13 = true;
            local_7e8 = 1;
            uVar25 = (ulong)uVar27;
            goto joined_r0x00176b90;
          }
          if (bVar13) {
            local_810 = local_810 + 1;
            local_818 = (undefined4 *)((long)local_818 + uVar19);
          }
          local_800 = CONCAT44(uVar22,1);
          uVar4 = *(undefined4 *)(local_820 + 0x20);
          lVar17 = param_3 + uVar25 * 0x40;
          *(undefined4 *)(lVar17 + 0x48) = uVar4;
          uVar5 = *(undefined4 *)(local_820 + 0x24);
          *(undefined4 *)(lVar17 + 0x3c) = uVar5;
          uVar6 = *(undefined4 *)(local_820 + 0x1c);
          *(undefined4 *)(lVar17 + 0x4c) = uVar6;
          *(undefined4 *)(lVar17 + 0x44) = 0xffffffff;
          uVar9 = *(undefined1 *)(local_820 + 0x2a);
          *(undefined1 *)(lVar17 + 0x40) = uVar9;
          if (local_7f0 == 0) {
            *(undefined4 *)(lVar17 + 0x2c) = 0x7f7fffff;
            puVar23 = &local_830;
          }
          else {
            *(undefined4 *)(lVar17 + 0x2c) = local_818[7];
            puVar23 = (undefined8 *)(local_818 + 4);
          }
          *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)puVar23;
          *(undefined4 *)(lVar17 + 0x34) = *(undefined4 *)((long)puVar23 + 4);
          *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(puVar23 + 1);
          *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(local_820 + 0x10);
          *(undefined4 *)(lVar17 + 0x14) = *(undefined4 *)(local_820 + 0x14);
          *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(local_820 + 0x18);
          *(undefined4 *)(lVar17 + 0x20) = *local_818;
          *(undefined4 *)(lVar17 + 0x24) = local_818[1];
          *(undefined4 *)(lVar17 + 0x28) = local_818[2];
          *(undefined4 *)(lVar17 + 0x1c) = local_818[3];
          uVar11 = *(undefined2 *)(local_820 + 0x2c);
          local_160[uVar25 * 2] = uVar11;
          uVar12 = *(undefined2 *)(local_820 + 0x2e);
          local_160[uVar25 * 2 + 1] = uVar12;
          if (bVar8 < 2) {
LAB_00176cdc:
            local_800 = CONCAT44(uVar22,1);
            uVar27 = iVar24 + 1;
            uVar20 = 1;
            goto joined_r0x00176b90;
          }
          uVar20 = 1;
          do {
            uVar25 = (ulong)(iVar24 + uVar20);
            uVar20 = uVar20 + 1;
            lVar17 = param_3 + uVar25 * 0x40;
            local_818 = (undefined4 *)((long)local_818 + uVar19);
            local_810 = local_810 + 1;
            *(undefined4 *)(lVar17 + 0x44) = 0xffffffff;
            *(undefined4 *)(lVar17 + 0x48) = uVar4;
            *(undefined4 *)(lVar17 + 0x3c) = uVar5;
            *(undefined4 *)(lVar17 + 0x4c) = uVar6;
            *(undefined1 *)(lVar17 + 0x40) = uVar9;
            if (local_7f0 == 0) {
              puVar23 = &local_830;
              *(undefined4 *)(lVar17 + 0x2c) = 0x7f7fffff;
            }
            else {
              *(undefined4 *)(lVar17 + 0x2c) = local_818[7];
              puVar23 = (undefined8 *)(local_818 + 4);
            }
            *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)puVar23;
            *(undefined4 *)(lVar17 + 0x34) = *(undefined4 *)((long)puVar23 + 4);
            *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(puVar23 + 1);
            *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(local_820 + 0x10);
            *(undefined4 *)(lVar17 + 0x14) = *(undefined4 *)(local_820 + 0x14);
            *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(local_820 + 0x18);
            *(undefined4 *)(lVar17 + 0x20) = *local_818;
            *(undefined4 *)(lVar17 + 0x24) = local_818[1];
            *(undefined4 *)(lVar17 + 0x28) = local_818[2];
            *(undefined4 *)(lVar17 + 0x1c) = local_818[3];
            local_160[uVar25 * 2] = uVar11;
            local_160[uVar25 * 2 + 1] = uVar12;
          } while (uVar20 < uVar27);
          uVar25 = (ulong)(iVar24 + uVar20);
          local_7e8 = 1;
          bVar13 = true;
          local_800 = CONCAT44(uVar22,uVar20);
        } while (uVar22 < bVar7);
LAB_00176cf0:
      }
      local_168 = (undefined4)uVar25;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar10);
  }
  local_178 = param_3 + 0x10;
  local_170 = local_160;
  local_788 = 0;
  local_180 = 0;
  FUN_00177020(&local_830);
                    /* WARNING: Subroutine does not return */
  memset(auStack_870,0,0x40);
}


