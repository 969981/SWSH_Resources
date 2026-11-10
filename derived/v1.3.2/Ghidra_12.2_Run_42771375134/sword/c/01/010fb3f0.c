/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fb3f0; name: FUN_010fb3f0
 */


void FUN_010fb3f0(long *param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined auStack_1b8 [8];
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  long local_70 [2];
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return;
  }
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  lVar9 = param_1[2];
  if (lVar9 == 0) {
    return;
  }
  lVar10 = param_1[4];
  if (lVar10 == 0) {
    return;
  }
  if (param_1[5] == 0) {
    return;
  }
  if (param_1[6] == 0) {
    return;
  }
  if (param_1[7] == 0) {
    return;
  }
  lVar12 = param_1[8];
  if (lVar12 == 0) {
    return;
  }
  lVar11 = param_1[3];
  if (lVar11 == 0) {
    return;
  }
  uVar5 = FUN_01547c10(lVar11);
  if (((uVar5 & 1) == 0) || (*(char *)(lVar11 + 0xd) == '\0')) {
    uVar5 = FUN_01547c00(lVar11);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_01547c20(param_1[3]);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_01547c30(param_1[3]);
        if ((uVar5 & 1) != 0) {
          lVar1 = param_1[9];
          lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
          if (lVar13 == 0) {
            FUN_00c58c10(local_70,0);
          }
          else {
            plVar14 = (long *)(lVar13 + 0x48);
            (**(code **)(*plVar14 + 0x10))(plVar14);
            FUN_00c58c10(local_70,lVar13);
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          if (local_70[0] == 0) {
LAB_010fb6d8:
            FUN_0077d660(lVar7);
            return;
          }
          bVar4 = (int)lVar1 != 0;
          if (*(int *)(lVar11 + 0x34) == -1) {
            iVar15 = 0;
            iVar2 = *(int *)(lVar11 + 0x3c);
          }
          else {
            local_1b0 = local_1b0 & 0xffffff00;
            uStack_1ac = 0;
            uStack_1a8 = 0x3ff;
            local_178 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_1a0 = 0;
            local_198 = 0;
            local_190 = 0;
            uVar5 = FUN_00cc41e0(local_70[0],bVar4,*(undefined4 *)(lVar11 + 0x30),
                                 *(int *)(lVar11 + 0x34),&local_1b0);
            if ((uVar5 & 1) == 0) {
              FUN_0077d660(lVar8);
            }
            else {
              FUN_0077eb10(lVar12,&local_198,lVar8);
            }
            FUN_014c7a10(lVar9,5,lVar8,bVar4,0);
            iVar15 = 1;
            iVar2 = *(int *)(lVar11 + 0x3c);
          }
          if (iVar2 != -1) {
            local_1b0 = local_1b0 & 0xffffff00;
            uStack_1ac = 0;
            uStack_1a8 = 0x3ff;
            local_178 = 0;
            local_1a0 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = 0;
            local_190 = 0;
            uVar5 = FUN_00cc41e0(local_70[0],bVar4,*(undefined4 *)(lVar11 + 0x38),iVar2,&local_1b0);
            if ((uVar5 & 1) == 0) {
              FUN_0077d660(lVar8);
            }
            else {
              FUN_0077eb10(lVar12,&local_198,lVar8);
            }
            FUN_014c7a10(lVar9,iVar15 + 5,lVar8,bVar4,0);
            iVar15 = iVar15 + 1;
          }
          if (*(int *)(lVar11 + 0x44) != -1) {
            local_1b0 = local_1b0 & 0xffffff00;
            uStack_1ac = 0;
            uStack_1a8 = 0x3ff;
            local_178 = 0;
            local_1a0 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = 0;
            local_190 = 0;
            uVar5 = FUN_00cc41e0(local_70[0],bVar4,*(undefined4 *)(lVar11 + 0x40),
                                 *(int *)(lVar11 + 0x44),&local_1b0);
            if ((uVar5 & 1) == 0) {
              FUN_0077d660(lVar8);
            }
            else {
              FUN_0077eb10(lVar12,&local_198,lVar8);
            }
            FUN_014c7a10(lVar9,iVar15 + 5,lVar8,bVar4,0);
            iVar15 = iVar15 + 1;
          }
          if (*(int *)(lVar11 + 0x4c) != -1) {
            local_1b0 = local_1b0 & 0xffffff00;
            uStack_1ac = 0;
            uStack_1a8 = 0x3ff;
            local_178 = 0;
            local_1a0 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = 0;
            local_190 = 0;
            uVar5 = FUN_00cc41e0(local_70[0],bVar4,*(undefined4 *)(lVar11 + 0x48),
                                 *(int *)(lVar11 + 0x4c),&local_1b0);
            if ((uVar5 & 1) == 0) {
              FUN_0077d660(lVar8);
            }
            else {
              FUN_0077eb10(lVar12,&local_198,lVar8);
            }
            FUN_014c7a10(lVar9,iVar15 + 5,lVar8,bVar4,0);
            iVar15 = iVar15 + 1;
          }
          if (*(int *)(lVar11 + 0x54) != -1) {
            local_1b0 = local_1b0 & 0xffffff00;
            uStack_1ac = 0;
            uStack_1a8 = 0x3ff;
            local_178 = 0;
            local_1a0 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = 0;
            local_190 = 0;
            uVar5 = FUN_00cc41e0(local_70[0],bVar4,*(undefined4 *)(lVar11 + 0x50),
                                 *(int *)(lVar11 + 0x54),&local_1b0);
            if ((uVar5 & 1) == 0) {
              FUN_0077d660(lVar8);
            }
            else {
              FUN_0077eb10(lVar12,&local_198,lVar8);
            }
            FUN_014c7a10(lVar9,iVar15 + 5,lVar8,bVar4,0);
            iVar15 = iVar15 + 1;
          }
          if (*(int *)(lVar11 + 0x5c) != -1) {
            local_1b0 = local_1b0 & 0xffffff00;
            uStack_1ac = 0;
            uStack_1a8 = 0x3ff;
            local_178 = 0;
            local_1a0 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = 0;
            local_190 = 0;
            uVar5 = FUN_00cc41e0(local_70[0],bVar4,*(undefined4 *)(lVar11 + 0x58),
                                 *(int *)(lVar11 + 0x5c),&local_1b0);
            if ((uVar5 & 1) == 0) {
              FUN_0077d660(lVar8);
            }
            else {
              FUN_0077eb10(lVar12,&local_198,lVar8);
            }
            FUN_014c7a10(lVar9,iVar15 + 5,lVar8,bVar4,0);
          }
          local_1b0 = (uint)DAT_02164eb8;
          uStack_1ac = (undefined4)((ulong)DAT_02164eb8 >> 0x20);
          uStack_1a8 = (undefined4)DAT_02164ec0;
          uStack_1a4 = (undefined4)((ulong)DAT_02164ec0 >> 0x20);
          local_190 = DAT_02164ed8;
          local_188 = DAT_02164ee0;
          local_1a0 = DAT_02164ec8;
          local_198 = DAT_02164ed0;
          bVar3 = *(byte *)(lVar11 + 0xd);
          if (((ulong)bVar3 == 0) || (6 < bVar3)) goto LAB_010fb9d4;
          FUN_0077eb10(lVar10,auStack_1b8 + (ulong)bVar3 * 8,lVar8);
          if (local_70[0] != 0) {
            (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
            local_70[0] = 0;
          }
          goto LAB_010fb59c;
        }
        uVar5 = FUN_01547c40(param_1[3]);
        if ((uVar5 & 1) == 0) goto LAB_010fb6d8;
        FUN_014ca220(lVar9,5,*(undefined4 *)(lVar11 + 0x30),7,0,1);
        puVar6 = &DAT_02164f08;
      }
      else {
        FUN_014ca220(lVar9,5,*(undefined4 *)(lVar11 + 0x30),5,0,1);
        puVar6 = &DAT_02164f00;
      }
    }
    else if (*(char *)(lVar11 + 0x12) == '\x01') {
      puVar6 = &DAT_02164ef0;
    }
    else {
      FUN_014c8280(lVar9,5,*(undefined2 *)(lVar11 + 0x30));
      puVar6 = &DAT_02164ef8;
    }
  }
  else {
    lVar12 = 0;
    uVar5 = 0;
    do {
      lVar1 = lVar11 + lVar12 * 2;
      FUN_014c9900(lVar9,(int)lVar12 + 5,*(undefined2 *)(lVar1 + 0x30),1);
      FUN_014ca220(lVar9,(int)lVar12 + 6,*(undefined2 *)(lVar1 + 0x32),3,0,1);
      uVar5 = uVar5 + 1;
      lVar12 = lVar12 + 2;
    } while (uVar5 < *(byte *)(lVar11 + 0xd));
    if ((*(byte *)(lVar11 + 0xd) == 1) && (*(short *)(lVar11 + 0x32) == 1)) {
      puVar6 = &DAT_02164ee8;
    }
    else {
      local_1b0 = (uint)DAT_02164e88;
      uStack_1ac = (undefined4)((ulong)DAT_02164e88 >> 0x20);
      uStack_1a8 = (undefined4)DAT_02164e90;
      uStack_1a4 = (undefined4)((ulong)DAT_02164e90 >> 0x20);
      local_190 = DAT_02164ea8;
      local_188 = DAT_02164eb0;
      local_1a0 = DAT_02164e98;
      local_198 = DAT_02164ea0;
      bVar3 = *(byte *)(lVar11 + 0xd);
      if (((ulong)bVar3 == 0) || (6 < bVar3)) {
LAB_010fb9d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      puVar6 = auStack_1b8 + (ulong)bVar3 * 8;
    }
  }
  FUN_0077eb10(lVar10,puVar6,lVar8);
LAB_010fb59c:
  FUN_014c62d0(lVar9,lVar7,lVar8);
  return;
}


