/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f1ba0; name: FUN_006f1ba0
 */


void FUN_006f1ba0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
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
  
  FUN_006f8200();
  puVar1 = PTR_DAT_02715788 + 0x58;
  *param_1 = (long)(PTR_DAT_02715788 + 0x10);
  param_1[9] = (long)puVar1;
  plVar12 = param_1 + 0x13;
  *plVar12 = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = -1;
  FUN_019a5700(param_1 + 0x17);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_019a5860(param_1 + 0x36);
  FUN_019a5860(param_1 + 0x3f);
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  FUN_019a5700(param_1 + 0x4a);
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  FUN_019a5860(param_1 + 0x69);
  FUN_019a5860(param_1 + 0x72);
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  FUN_019a5700(param_1 + 0x7d);
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  FUN_019a5860(param_1 + 0x9c);
  FUN_019a5860(param_1 + 0xa5);
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xb0] = 0x3f800000;
  lVar2 = param_2[6];
  *(int *)(param_1 + 0xb1) = (int)lVar2;
  uVar9 = *(int *)((long)param_2 + 0x2c) * (int)lVar2;
  uVar16 = (ulong)uVar9;
  plVar15 = (long *)param_1[1];
  *(int *)((long)param_1 + 0x58c) = *(int *)((long)param_2 + 0x2c);
  lVar17 = uVar16 * 0x48;
  lVar2 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar17,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar15;
    lVar8 = *(long *)(lVar3 + 0x80) + 1;
    *(long *)(lVar3 + 0x80) = lVar8;
    if (uVar9 != 0) {
      lVar8 = lVar2;
      do {
        FUN_019a5b00(lVar8);
        uVar16 = uVar16 - 1;
        lVar8 = lVar8 + 0x48;
      } while (uVar16 != 0);
      lVar8 = *(long *)(lVar3 + 0x80);
    }
    *(long *)(lVar3 + 0x80) = lVar8 + -1;
    lVar3 = param_1[0x32];
    param_1[0x32] = lVar2;
    if (lVar3 != 0) {
      uVar16 = param_1[0x34];
      if (0x47 < uVar16) {
        uVar13 = 0;
        lVar2 = lVar3;
        do {
          FUN_019a5b20(lVar2);
          uVar13 = uVar13 + 1;
          lVar2 = lVar2 + 0x48;
        } while (uVar13 < uVar16 / 0x48);
        uVar16 = param_1[0x34];
      }
      (**(code **)(*(long *)param_1[0x33] + 0x18))((long *)param_1[0x33],lVar3,uVar16,param_1[0x35])
      ;
    }
    param_1[0x35] = 8;
    uVar9 = (int)param_1[0xb1] * *(int *)((long)param_1 + 0x58c);
    uVar16 = (ulong)uVar9;
    param_1[0x33] = (long)plVar15;
    param_1[0x34] = lVar17;
    plVar15 = (long *)param_1[1];
    lVar17 = uVar16 * 0x48;
    lVar2 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar17,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar15;
      lVar8 = *(long *)(lVar3 + 0x80) + 1;
      *(long *)(lVar3 + 0x80) = lVar8;
      if (uVar9 != 0) {
        lVar8 = lVar2;
        do {
          FUN_019a5b00(lVar8);
          uVar16 = uVar16 - 1;
          lVar8 = lVar8 + 0x48;
        } while (uVar16 != 0);
        lVar8 = *(long *)(lVar3 + 0x80);
      }
      *(long *)(lVar3 + 0x80) = lVar8 + -1;
      lVar3 = param_1[0x65];
      param_1[0x65] = lVar2;
      if (lVar3 != 0) {
        uVar16 = param_1[0x67];
        if (0x47 < uVar16) {
          uVar13 = 0;
          lVar2 = lVar3;
          do {
            FUN_019a5b20(lVar2);
            uVar13 = uVar13 + 1;
            lVar2 = lVar2 + 0x48;
          } while (uVar13 < uVar16 / 0x48);
          uVar16 = param_1[0x67];
        }
        (**(code **)(*(long *)param_1[0x66] + 0x18))
                  ((long *)param_1[0x66],lVar3,uVar16,param_1[0x68]);
      }
      param_1[0x68] = 8;
      uVar9 = (int)param_1[0xb1] * *(int *)((long)param_1 + 0x58c);
      uVar16 = (ulong)uVar9;
      param_1[0x66] = (long)plVar15;
      plVar15 = (long *)param_1[1];
      param_1[0x67] = lVar17;
      lVar17 = uVar16 * 0x48;
      lVar2 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar17,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar15;
        lVar8 = *(long *)(lVar3 + 0x80) + 1;
        *(long *)(lVar3 + 0x80) = lVar8;
        if (uVar9 != 0) {
          lVar8 = lVar2;
          do {
            FUN_019a5b00(lVar8);
            uVar16 = uVar16 - 1;
            lVar8 = lVar8 + 0x48;
          } while (uVar16 != 0);
          lVar8 = *(long *)(lVar3 + 0x80);
        }
        *(long *)(lVar3 + 0x80) = lVar8 + -1;
        lVar3 = param_1[0x98];
        param_1[0x98] = lVar2;
        if (lVar3 != 0) {
          uVar16 = param_1[0x9a];
          if (0x47 < uVar16) {
            uVar13 = 0;
            lVar2 = lVar3;
            do {
              FUN_019a5b20(lVar2);
              uVar13 = uVar13 + 1;
              lVar2 = lVar2 + 0x48;
            } while (uVar13 < uVar16 / 0x48);
            uVar16 = param_1[0x9a];
          }
          (**(code **)(*(long *)param_1[0x99] + 0x18))
                    ((long *)param_1[0x99],lVar3,uVar16,param_1[0x9b]);
        }
        param_1[0x99] = (long)plVar15;
        param_1[0x9a] = lVar17;
        param_1[0x9b] = 8;
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN_0199c200(&local_a0);
        puVar1 = PTR_DAT_027155e8;
        local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)((long)param_1 + 0x58c));
        local_a0 = CONCAT26((short)param_1[0xb1],(undefined6)local_a0);
        local_98 = CONCAT62(local_98._2_6_,(short)param_2[7]);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),0x100);
        local_98 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_98);
        local_88._0_4_ = (int)param_2[3];
        uVar16 = FUN_019a56a0(PTR_DAT_027155e8,&local_a0);
        local_90 = CONCAT44((int)param_2[1],(int)local_90);
        local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0xc));
        local_98 = CONCAT44((int)param_2[2],(undefined4)local_98);
        uVar13 = FUN_019a56a0(puVar1,&local_a0);
        lVar2 = *param_2;
        if (uVar16 <= uVar13) {
          uVar16 = uVar13;
        }
        if (lVar2 == 0) {
          lVar2 = *(long *)(*(long *)PTR_DAT_027154f0 + 0x10);
          uVar4 = FUN_019a5640(PTR_DAT_027155e8,&local_a0);
        }
        else {
          uVar4 = FUN_019a5640(PTR_DAT_027155e8,&local_a0);
        }
        FUN_006f1b70(&local_c0,lVar2,1,uVar16,uVar4);
        param_1[0x13] = local_c0;
        if (param_1[0x14] != 0) {
          (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
          param_1[0x14] = 0;
        }
        param_1[0x14] = local_b8;
        param_1[0x15] = local_b0;
        param_1[0x16] = local_a8;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xffffffffffffffff;
        local_a8 = 0;
        FUN_006f6820(&local_c0);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
          local_b8 = 0;
        }
        uVar4 = FUN_006f6880(plVar12);
        puVar1 = PTR_DAT_027155e8;
        FUN_019a5750(param_1 + 0x4a,PTR_DAT_027155e8,&local_a0,uVar4,param_1[0x15],param_1[0x16]);
        local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),(int)local_90);
        local_88._0_4_ = (int)param_2[3];
        uVar4 = FUN_006f6880(plVar12);
        FUN_019a5750(param_1 + 0x17,puVar1,&local_a0,uVar4,param_1[0x15],param_1[0x16]);
        local_90 = CONCAT44((int)param_2[4],(int)local_90);
        local_88 = (long *)CONCAT44(local_88._4_4_,*(undefined4 *)((long)param_2 + 0x24));
        uVar4 = FUN_006f6880(plVar12);
        FUN_019a5750(param_1 + 0x7d,puVar1,&local_a0,uVar4,param_1[0x15],param_1[0x16]);
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        local_a0 = 0;
        local_98 = 0;
        FUN_0199c280(&local_a0);
        puVar1 = PTR_DAT_027155e8;
        uVar5 = 6;
        if ((int)param_2[7] < 2) {
          uVar5 = 1;
        }
        local_a0 = CONCAT71(local_a0._1_7_,uVar5);
        uVar9 = *(uint *)(param_1 + 0xb1);
        if (uVar9 != 0) {
          uVar7 = *(uint *)((long)param_1 + 0x58c);
          uVar14 = 0;
          uVar11 = uVar7;
          do {
            if (uVar11 != 0) {
              uVar9 = 0;
              uVar11 = uVar7;
              do {
                local_98 = CONCAT44(local_98._4_4_,uVar9);
                local_a0._0_4_ = CONCAT22((short)uVar14,(ushort)local_a0);
                local_88 = param_1 + 0x17;
                FUN_019a5b30(param_1[0x32] + (ulong)(uVar9 + uVar14 * uVar11) * 0x48,puVar1,
                             &local_a0);
                local_88 = param_1 + 0x4a;
                FUN_019a5b30(param_1[0x65] +
                             (ulong)(uVar9 + uVar14 * *(int *)((long)param_1 + 0x58c)) * 0x48,puVar1
                             ,&local_a0);
                local_88 = param_1 + 0x7d;
                FUN_019a5b30(param_1[0x98] +
                             (ulong)(uVar9 + uVar14 * *(int *)((long)param_1 + 0x58c)) * 0x48,puVar1
                             ,&local_a0);
                uVar11 = *(uint *)((long)param_1 + 0x58c);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar11);
              uVar9 = *(uint *)(param_1 + 0xb1);
              uVar7 = uVar11;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar9);
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
        uVar16 = (ulong)local_90 >> 0x20;
        local_90._0_4_ = (int)param_2[6] << 0x10;
        local_90 = CONCAT44((int)uVar16,(int)local_90);
        bVar10 = 6;
        if (1 < *(uint *)((long)param_1 + 0x58c)) {
          bVar10 = 7;
        }
        bVar6 = 5;
        if (*(uint *)((long)param_1 + 0x58c) < 2) {
          bVar6 = 1;
        }
        if ((int)param_2[7] < 2) {
          bVar10 = bVar6;
        }
        local_a0 = CONCAT71(local_a0._1_7_,bVar10);
        local_a0 = CONCAT44((int)param_2[2],(undefined4)local_a0);
        local_a0._0_2_ = (ushort)bVar10;
        local_70 = param_1 + 0x4a;
        FUN_019a5890(param_1 + 0x69,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x69);
        if (param_1[0x7b] != 0) {
          (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
          param_1[0x7b] = 0;
        }
        param_1[0x7b] = local_c0;
        local_a0._0_2_ = CONCAT11(1,(byte)local_a0);
        FUN_019a5890(param_1 + 0x72,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x72);
        if (param_1[0x7c] != 0) {
          (**(code **)(*(long *)(param_1[0x7c] + 0x48) + 0x18))();
          param_1[0x7c] = 0;
        }
        uVar4 = local_a0;
        param_1[0x7c] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_a0._0_1_ = (byte)uVar4;
        local_a0._0_2_ = (ushort)(byte)local_a0;
        local_70 = param_1 + 0x17;
        FUN_019a5890(param_1 + 0x36,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x36);
        if (param_1[0x48] != 0) {
          (**(code **)(*(long *)(param_1[0x48] + 0x48) + 0x18))();
          param_1[0x48] = 0;
        }
        param_1[0x48] = local_c0;
        local_a0._0_2_ = CONCAT11(1,(byte)local_a0);
        FUN_019a5890(param_1 + 0x3f,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x3f);
        if (param_1[0x49] != 0) {
          (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
          param_1[0x49] = 0;
        }
        uVar4 = local_a0;
        param_1[0x49] = local_c0;
        local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 0x1c),(undefined4)local_a0);
        local_a0._0_1_ = (byte)uVar4;
        local_a0._0_2_ = (ushort)(byte)local_a0;
        local_70 = param_1 + 0x7d;
        FUN_019a5890(param_1 + 0x9c,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0x9c);
        if (param_1[0xae] != 0) {
          (**(code **)(*(long *)(param_1[0xae] + 0x48) + 0x18))();
          param_1[0xae] = 0;
        }
        param_1[0xae] = local_c0;
        local_a0._0_2_ = CONCAT11(1,(byte)local_a0);
        FUN_019a5890(param_1 + 0xa5,PTR_DAT_027155e8,&local_a0);
        thunk_FUN_006fd800(&local_c0,param_1 + 0xa5);
        if (param_1[0xaf] != 0) {
          (**(code **)(*(long *)(param_1[0xaf] + 0x48) + 0x18))();
          param_1[0xaf] = 0;
        }
        param_1[0xaf] = local_c0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


