/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fdd90; name: FUN_006fdd90
 */


void FUN_006fdd90(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  
  FUN_006f1a40();
  puVar2 = PTR_DAT_02715878;
  *param_1 = (long)(PTR_DAT_02715878 + 0x10);
  param_1[9] = (long)(puVar2 + 0x70);
  plVar17 = param_1 + 0x15;
  *plVar17 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = -1;
  param_1[0x18] = 0;
  FUN_019a5700(param_1 + 0x19);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_019a5860(param_1 + 0x38);
  param_1[0x41] = 0;
  FUN_019a5700(param_1 + 0x42);
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  FUN_019a5860(param_1 + 0x61);
  param_1[0x6a] = 0;
  FUN_019a5700(param_1 + 0x6b);
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  FUN_019a5860(param_1 + 0x8a);
  param_1[0x93] = 0;
  iVar7 = *(int *)((long)param_2 + 0x2c);
  *(int *)(param_1 + 0x94) = iVar7;
  lVar3 = param_2[6];
  *(int *)((long)param_1 + 0x4a4) = (int)lVar3;
  if (*(char *)((long)param_2 + 0x34) != '\0') {
    iVar7 = 6;
    *(undefined4 *)(param_1 + 0x94) = 6;
  }
  uVar10 = iVar7 * (int)lVar3;
  uVar15 = (ulong)uVar10;
  plVar11 = (long *)param_1[1];
  lVar12 = uVar15 * 0x48;
  lVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar12,8);
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar11;
    lVar9 = *(long *)(lVar4 + 0x80) + 1;
    *(long *)(lVar4 + 0x80) = lVar9;
    if (uVar10 != 0) {
      lVar9 = lVar3;
      do {
        FUN_019a59e0(lVar9);
        uVar15 = uVar15 - 1;
        lVar9 = lVar9 + 0x48;
      } while (uVar15 != 0);
      lVar9 = *(long *)(lVar4 + 0x80);
    }
    *(long *)(lVar4 + 0x80) = lVar9 + -1;
    lVar4 = param_1[0x34];
    param_1[0x34] = lVar3;
    if (lVar4 != 0) {
      uVar15 = param_1[0x36];
      if (0x47 < uVar15) {
        uVar14 = 0;
        lVar3 = lVar4;
        do {
          FUN_019a5a00(lVar3);
          uVar14 = uVar14 + 1;
          lVar3 = lVar3 + 0x48;
        } while (uVar14 < uVar15 / 0x48);
        uVar15 = param_1[0x36];
      }
      (**(code **)(*(long *)param_1[0x35] + 0x18))((long *)param_1[0x35],lVar4,uVar15,param_1[0x37])
      ;
    }
    param_1[0x37] = 8;
    uVar10 = *(int *)((long)param_1 + 0x4a4) * (int)param_1[0x94];
    uVar15 = (ulong)uVar10;
    param_1[0x35] = (long)plVar11;
    param_1[0x36] = lVar12;
    plVar11 = (long *)param_1[1];
    lVar12 = uVar15 * 0x48;
    lVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar12,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar11;
      lVar9 = *(long *)(lVar4 + 0x80) + 1;
      *(long *)(lVar4 + 0x80) = lVar9;
      if (uVar10 != 0) {
        lVar9 = lVar3;
        do {
          FUN_019a59e0(lVar9);
          uVar15 = uVar15 - 1;
          lVar9 = lVar9 + 0x48;
        } while (uVar15 != 0);
        lVar9 = *(long *)(lVar4 + 0x80);
      }
      *(long *)(lVar4 + 0x80) = lVar9 + -1;
      lVar4 = param_1[0x5d];
      param_1[0x5d] = lVar3;
      if (lVar4 != 0) {
        uVar15 = param_1[0x5f];
        if (0x47 < uVar15) {
          uVar14 = 0;
          lVar3 = lVar4;
          do {
            FUN_019a5a00(lVar3);
            uVar14 = uVar14 + 1;
            lVar3 = lVar3 + 0x48;
          } while (uVar14 < uVar15 / 0x48);
          uVar15 = param_1[0x5f];
        }
        (**(code **)(*(long *)param_1[0x5e] + 0x18))
                  ((long *)param_1[0x5e],lVar4,uVar15,param_1[0x60]);
      }
      param_1[0x60] = 8;
      uVar10 = *(int *)((long)param_1 + 0x4a4) * (int)param_1[0x94];
      uVar15 = (ulong)uVar10;
      param_1[0x5e] = (long)plVar11;
      plVar11 = (long *)param_1[1];
      param_1[0x5f] = lVar12;
      lVar12 = uVar15 * 0x48;
      lVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar12,8);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (*(ulong *)(lVar4 + 0x80) < 0x10) {
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar11;
        lVar9 = *(long *)(lVar4 + 0x80) + 1;
        *(long *)(lVar4 + 0x80) = lVar9;
        if (uVar10 != 0) {
          lVar9 = lVar3;
          do {
            FUN_019a59e0(lVar9);
            uVar15 = uVar15 - 1;
            lVar9 = lVar9 + 0x48;
          } while (uVar15 != 0);
          lVar9 = *(long *)(lVar4 + 0x80);
        }
        *(long *)(lVar4 + 0x80) = lVar9 + -1;
        lVar4 = param_1[0x86];
        param_1[0x86] = lVar3;
        if (lVar4 != 0) {
          uVar15 = param_1[0x88];
          if (0x47 < uVar15) {
            uVar14 = 0;
            lVar3 = lVar4;
            do {
              FUN_019a5a00(lVar3);
              uVar14 = uVar14 + 1;
              lVar3 = lVar3 + 0x48;
            } while (uVar14 < uVar15 / 0x48);
            uVar15 = param_1[0x88];
          }
          (**(code **)(*(long *)param_1[0x87] + 0x18))
                    ((long *)param_1[0x87],lVar4,uVar15,param_1[0x89]);
        }
        param_1[0x87] = (long)plVar11;
        param_1[0x88] = lVar12;
        param_1[0x89] = 8;
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN_0199c200(&local_a0);
        puVar2 = PTR_DAT_027155e8;
        local_80 = CONCAT44(local_80._4_4_,(int)param_1[0x94]);
        local_a0 = CONCAT26((short)*(undefined4 *)((long)param_1 + 0x4a4),(undefined6)local_a0);
        local_98 = CONCAT62(local_98._2_6_,(short)param_2[7]);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),0x80);
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        local_88._0_4_ = (int)param_2[3];
        uVar15 = FUN_019a56a0(PTR_DAT_027155e8,&local_a0);
        local_90 = CONCAT44((int)param_2[1],(int)local_90);
        local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0xc));
        local_98 = CONCAT44((int)param_2[2],(undefined4)local_98);
        uVar14 = FUN_019a56a0(puVar2,&local_a0);
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        lVar3 = *param_2;
        if (lVar3 == 0) {
          lVar3 = *(long *)(*(long *)PTR_DAT_027154f0 + 0x10);
        }
        uVar5 = FUN_019a5640(PTR_DAT_027155e8,&local_a0);
        FUN_006f1b70(&local_c0,lVar3,1,uVar15,uVar5);
        param_1[0x15] = local_c0;
        if (param_1[0x16] != 0) {
          (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
          param_1[0x16] = 0;
        }
        param_1[0x16] = local_b8;
        param_1[0x17] = local_b0;
        param_1[0x18] = local_a8;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xffffffffffffffff;
        local_a8 = 0;
        FUN_006f6820(&local_c0);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
          local_b8 = 0;
        }
        plVar11 = param_1 + 0x19;
        plVar16 = param_1 + 0x42;
        uVar5 = FUN_006f6880(plVar17);
        puVar2 = PTR_DAT_027155e8;
        FUN_019a5750(plVar16,PTR_DAT_027155e8,&local_a0,uVar5,param_1[0x17],param_1[0x18],in_x6,
                     in_x7,plVar16);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),(int)local_90);
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        local_88._0_4_ = (int)param_2[3];
        uVar5 = FUN_006f6880(plVar17);
        FUN_019a5750(plVar11,puVar2,&local_a0,uVar5,param_1[0x17],param_1[0x18]);
        local_90 = CONCAT44((int)param_2[4],(int)local_90);
        local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0x24));
        plVar1 = param_1 + 0x6b;
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        uVar5 = FUN_006f6880(plVar17);
        FUN_019a5750(plVar1,puVar2,&local_a0,uVar5,param_1[0x17],param_1[0x18]);
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN_0199c260(&local_a0);
        puVar2 = PTR_DAT_027155e8;
        uVar6 = 6;
        if ((int)param_2[7] < 2) {
          uVar6 = 1;
        }
        local_a0 = CONCAT71(local_a0._1_7_,uVar6);
        uVar10 = *(uint *)((long)param_1 + 0x4a4);
        plVar17 = plVar16;
        if (uVar10 != 0) {
          uVar8 = *(uint *)(param_1 + 0x94);
          uVar13 = 0;
          do {
            if (uVar8 != 0) {
              uVar10 = 0;
              do {
                local_98 = CONCAT44(1,uVar10);
                local_a0._0_4_ = CONCAT22((short)uVar13,(undefined2)local_a0);
                uVar8 = uVar10 + uVar13 * uVar8;
                local_a0 = CONCAT44((int)param_2[2],(undefined4)local_a0);
                local_88 = plVar16;
                FUN_019a5a10(param_1[0x5d] + (ulong)uVar8 * 0x48,puVar2,&local_a0);
                local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
                local_88 = plVar11;
                FUN_019a5a10(param_1[0x34] + (ulong)uVar8 * 0x48,puVar2,&local_a0);
                local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
                local_88 = plVar1;
                FUN_019a5a10(param_1[0x86] + (ulong)uVar8 * 0x48,puVar2,&local_a0);
                uVar8 = *(uint *)(param_1 + 0x94);
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar8);
              uVar10 = *(uint *)((long)param_1 + 0x4a4);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar10);
        }
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN_0199c230(&local_a0);
        local_80 = (ulong)*(uint *)((long)param_2 + 0x2c) << 0x20;
        uVar15 = (ulong)local_90 >> 0x20;
        local_90._0_4_ = (int)param_2[6] << 0x10;
        local_90 = CONCAT44((int)uVar15,(int)local_90);
        if (*(char *)((long)param_2 + 0x34) == '\0') {
          if (*(uint *)(param_1 + 0x94) < 2) {
            uVar6 = 6;
            if ((int)param_2[7] < 2) {
              uVar6 = 1;
            }
          }
          else {
            uVar6 = 7;
            if ((int)param_2[7] < 2) {
              uVar6 = 5;
            }
          }
        }
        else {
          uVar6 = 3;
        }
        local_a0 = CONCAT71(local_a0._1_7_,uVar6);
        local_a0 = CONCAT44((int)param_2[2],(undefined4)local_a0);
        local_70 = plVar17;
        FUN_019a5890(param_1 + 0x61,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x61);
        if (param_1[0x6a] != 0) {
          (**(code **)(*(long *)(param_1[0x6a] + 0x48) + 0x18))();
          param_1[0x6a] = 0;
        }
        param_1[0x6a] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_70 = plVar11;
        FUN_019a5890(param_1 + 0x38,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x38);
        if (param_1[0x41] != 0) {
          (**(code **)(*(long *)(param_1[0x41] + 0x48) + 0x18))();
          param_1[0x41] = 0;
        }
        param_1[0x41] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_70 = plVar1;
        FUN_019a5890(param_1 + 0x8a,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x8a);
        if (param_1[0x93] != 0) {
          (**(code **)(*(long *)(param_1[0x93] + 0x48) + 0x18))();
          param_1[0x93] = 0;
        }
        param_1[0x93] = local_c0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


