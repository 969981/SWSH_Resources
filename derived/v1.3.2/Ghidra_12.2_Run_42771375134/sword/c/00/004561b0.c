/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004561b0; name: FUN_004561b0
 */


int FUN_004561b0(long *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  int local_54;
  byte *local_48;
  
  local_54 = param_3;
  local_48 = param_2;
  iVar15 = (**(code **)(*param_1 + 0x88))();
  if (iVar15 != 0 && iVar15 != 10) {
    FUN_00449c90(*(undefined8 *)PTR_DAT_02712ae0,(int)param_1[2],0,iVar15);
    return 0x5a;
  }
  local_48 = param_2 + 8;
  if (*(int *)(param_2 + 4) == 0) {
    local_48 = param_2 + 0xc;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 8);
    bVar12 = true;
LAB_004562a0:
    iVar15 = (**(code **)(*param_1 + 0x200))(param_1,&local_48,&local_54);
    if (iVar15 == 1) {
      auVar11 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)*(int *)local_48)) *
                SEXT816(0x20c49ba5e353f7cf);
      uVar22 = (int)(auVar11._8_8_ >> 7) - (auVar11._12_4_ >> 0x1f);
      if (uVar22 <= *(ushort *)PTR_DAT_02712ac0) {
        uVar22 = 0;
      }
      *(uint *)(param_1 + 0x19) = uVar22;
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(local_48 + 4);
      uVar22 = *(uint *)(local_48 + 8);
      local_48 = local_48 + 0xc;
      if (uVar22 != 0) {
        uVar21 = 1;
        while( true ) {
          uVar7 = *(undefined4 *)local_48;
          pbVar3 = local_48 + 4;
          pbVar4 = local_48 + 8;
          pbVar5 = local_48 + 0xc;
          pbVar1 = local_48 + 0x10;
          pbVar2 = local_48 + 0x11;
          local_48 = local_48 + 0x12;
          iVar15 = FUN_00455240(*(undefined4 *)pbVar3,param_1,uVar7,*(undefined4 *)pbVar4,
                                *(undefined4 *)pbVar5,*pbVar1,*pbVar2);
          if (iVar15 != 1 || uVar22 <= uVar21) break;
          uVar21 = uVar21 + 1;
        }
        if (iVar15 != 1) goto LAB_004563b0;
      }
      iVar15 = (**(code **)(*param_1 + 0x208))(param_1,&local_48,&local_54,0);
    }
  }
  else {
    plVar16 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(int *)(param_2 + 4),1);
    if (plVar16 == (long *)0x0) {
      iVar15 = 2;
      bVar12 = false;
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1);
      iVar15 = (**(code **)(*plVar16 + 0x50))(plVar16,param_1);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      bVar12 = false;
      if (iVar15 == 1) goto LAB_004562a0;
    }
  }
LAB_004563b0:
  *(uint *)((long)param_1 + 0x9c) =
       *(uint *)((long)param_1 + 0x9c) & 0xffffc000 |
       *(uint *)((long)param_1 + 0x9c) & 0x1fff | (*local_48 & 1) << 0xd;
  if (iVar15 != 1) {
    return iVar15;
  }
  uVar9 = *(ushort *)(local_48 + 1);
  local_48 = local_48 + 3;
  if (uVar9 != 0) {
    uVar22 = 0;
    do {
      uVar7 = *(undefined4 *)local_48;
      pbVar1 = local_48 + 4;
      pbVar2 = local_48 + 5;
      bVar8 = local_48[6];
      uVar21 = bVar8 & 0x7f;
      pbVar3 = local_48 + 7;
      while ((char)bVar8 < '\0') {
        bVar8 = *pbVar3;
        uVar21 = bVar8 & 0x7f | uVar21 << 7;
        pbVar3 = pbVar3 + 1;
      }
      local_48 = pbVar3 + 7;
      uVar10 = *(ushort *)(pbVar3 + 5);
      iVar15 = (**(code **)(*param_1 + 0x1d8))
                         (param_1,uVar7,*pbVar1,*pbVar2,uVar21,*(undefined4 *)pbVar3,pbVar3[4],
                          local_48,uVar10,1);
      if (iVar15 != 1) {
        return iVar15;
      }
      lVar19 = (ulong)uVar10 * 0xc;
      uVar22 = uVar22 + 1;
      local_48 = local_48 + lVar19;
      local_54 = local_54 - (int)lVar19;
    } while (uVar22 < uVar9);
  }
  iVar15 = (**(code **)(param_1[3] + 0x70))(param_1 + 3,&local_48,&local_54);
  if (iVar15 != 1) {
    return iVar15;
  }
  if (!bVar12) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1[0x10] + 0x160);
    return 1;
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  puVar14 = PTR_DAT_02712fe8;
  puVar13 = PTR_DAT_02712a90;
  puVar20 = *(undefined8 **)PTR_DAT_02712fe8;
  uVar22 = *(uint *)(PTR_DAT_02712fe8 + 8);
  puVar17 = puVar20;
  if (uVar22 != 0) {
    lVar19 = (ulong)uVar22 << 3;
    do {
      if ((long *)*puVar17 == param_1) goto LAB_0045653c;
      lVar19 = lVar19 + -8;
      puVar17 = puVar17 + 1;
    } while (lVar19 != 0);
    puVar17 = puVar20 + uVar22;
  }
LAB_0045653c:
  if ((puVar17 == (undefined8 *)0x0) || (puVar20 + uVar22 == puVar17)) {
    uVar21 = *(uint *)(PTR_DAT_02712fe8 + 0xc);
    if (uVar22 < uVar21) {
LAB_004565d8:
      if (uVar22 < uVar21) {
        uVar22 = *(uint *)(puVar14 + 8);
        *(uint *)(puVar14 + 8) = uVar22 + 1;
        if (puVar20 + uVar22 != (long *)0x0) {
          puVar20[uVar22] = param_1;
          goto LAB_004565f8;
        }
      }
    }
    else {
      uVar21 = uVar21 + 1;
      puVar20 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar21 << 3);
      if (puVar20 != (undefined8 *)0x0) {
        puVar17 = *(undefined8 **)puVar14;
        if ((puVar17 != (undefined8 *)0x0) && (puVar17 != puVar20)) {
          uVar6 = *(uint *)(puVar14 + 8);
          if (uVar6 != 0) {
            *puVar20 = *puVar17;
            if (uVar6 != 1) {
              if (uVar6 == 2) {
                lVar18 = 1;
              }
              else {
                lVar19 = 0;
                do {
                  lVar18 = lVar19;
                  puVar20[lVar18 + 1] = *(undefined8 *)(*(long *)puVar14 + lVar18 * 8 + 8);
                  puVar20[lVar18 + 2] = *(undefined8 *)(*(long *)puVar14 + lVar18 * 8 + 0x10);
                  lVar19 = lVar18 + 2;
                } while (((ulong)uVar6 - 1) - (ulong)(~uVar6 & 1) != lVar18 + 2);
                lVar18 = lVar18 + 3;
                if ((~uVar6 & 1) == 0) goto LAB_004565c4;
              }
              puVar20[lVar18] = *(undefined8 *)(*(long *)puVar14 + lVar18 * 8);
            }
LAB_004565c4:
            puVar17 = *(undefined8 **)puVar14;
          }
          FUN_00404870(*(undefined4 *)puVar13,puVar17);
        }
        *(undefined8 **)puVar14 = puVar20;
        *(uint *)(puVar14 + 0xc) = uVar21;
        goto LAB_004565d8;
      }
    }
    iVar15 = 0x34;
  }
  else {
LAB_004565f8:
    iVar15 = 1;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return iVar15;
}


