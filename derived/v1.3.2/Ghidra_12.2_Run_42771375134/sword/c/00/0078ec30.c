/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078ec30; name: FUN_0078ec30
 */


void FUN_0078ec30(long *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  undefined *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  puVar5 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar5 = PTR_DAT_02710860;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar10 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar7 = PTR_DAT_02716490;
  puVar6 = PTR_DAT_02716488;
  *param_1 = (long)(PTR_DAT_02716488 + 0x10);
  param_1[1] = lVar10;
  param_1[9] = (long)(puVar6 + 0x48);
  param_1[0xb] = (long)(puVar7 + 0x10);
  param_1[0xd] = (long)(puVar7 + 0x10);
  plVar16 = param_1 + 0xf;
  *plVar16 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0xff;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  FUN_006cee90((long)param_1 + 0x4e4,1,0);
  param_1[0x9e] = 0;
  param_1[0x9f] = 0x3f00000000;
  param_1[0xa0] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  FUN_006cee90((long)param_1 + 0x61c,1,0);
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[200] = lVar8;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcb] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xcc] = lVar8;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xd3] = lVar8;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xd7] = lVar8;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0x3f800000;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xde] = lVar8;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xe2] = lVar8;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pbVar1 = (byte *)(param_1 + 0x2b9);
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0x3f800000;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xeb] = lVar8;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  FUN_006cee90((long)param_1 + 0x774,1,0);
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0xf4] = lVar8;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  FUN_0078f5b0(param_1 + 0xf9);
  plVar2 = param_1 + 0x2c3;
  plVar14 = param_1 + 0x2bd;
  *plVar14 = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2be] = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  param_1[0x2ba] = 0;
  FUN_019a44e0(plVar2);
  *(undefined1 *)(param_1 + 0x2d6) = 0;
  plVar15 = (long *)param_1[1];
  param_1[0x2cc] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2c8] = 0;
  param_1[0xc] = (long)plVar15;
  local_c0 = PTR_DAT_02716498 + 0x10;
  param_1[0xe] = param_3;
  uStack_a0 = *(undefined8 *)(param_2 + 0x20);
  local_98 = *(undefined8 *)(param_2 + 0x28);
  uStack_90 = *(undefined8 *)(param_2 + 0x30);
  local_88 = *(undefined8 *)(param_2 + 0x38);
  uStack_80 = *(undefined8 *)(param_2 + 0x40);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  local_b8 = PTR_DAT_027155e8;
  _local_78 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20),
                       *(int *)(param_2 + 0x48) * 3);
  local_b0 = param_1 + 0xb;
  local_a8 = param_1 + 0xd;
  lVar8 = (**(code **)(*plVar15 + 0x10))(plVar15,0x1708,8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar15;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_019f1f90(lVar8,&local_c0);
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    puVar17 = (undefined8 *)*plVar16;
    *plVar16 = lVar8;
    if (puVar17 != (undefined8 *)0x0) {
      (**(code **)*puVar17)(puVar17);
      (**(code **)(*(long *)param_1[0x10] + 0x18))
                ((long *)param_1[0x10],puVar17,param_1[0x11],param_1[0x12]);
      lVar8 = param_1[0xf];
    }
    param_1[0x10] = (long)plVar15;
    param_1[0x11] = 0x1708;
    param_1[0x12] = 8;
    FUN_019f4a30(lVar8,PTR_LAB_027164a0,param_1);
    FUN_019f4a50(param_1[0xf],PTR_LAB_027164a8,param_1);
    uVar11 = (ulong)*(int *)(param_2 + 0x48);
    uVar13 = param_1[0xf2] - param_1[0xf1] >> 3;
    if (uVar13 < uVar11) {
      FUN_007921e0(param_1 + 0xf1,uVar11 - uVar13);
    }
    else if (uVar13 != uVar11) {
      param_1[0xf2] = param_1[0xf1] + uVar11 * 8;
    }
    plVar16 = (long *)param_1[1];
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,800,0x10);
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0xb8))(plVar16);
      }
      FUN_006d6c90(lVar10,0);
      *(long **)(lVar10 + 8) = plVar16;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(undefined8 *)(lVar10 + 0x18) = 800;
      *(undefined8 *)(lVar10 + 0x20) = 0x10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      FUN_006d1120(lVar10);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      pcVar12 = *(code **)(lVar10 + 0x2a8);
      *(undefined4 *)(lVar10 + 0x298) = 0;
      if (pcVar12 != (code *)0x0) {
        *(undefined8 *)(lVar10 + 0x2b0) = 0;
        *(undefined8 *)(lVar10 + 0x2b8) = 0;
        *(undefined8 *)(lVar10 + 0x2a0) = 0;
        *(undefined8 *)(lVar10 + 0x2a8) = 0;
        (*pcVar12)(lVar10 + 0x2c0);
      }
      *(long **)(lVar10 + 0x2c0) = param_1;
      *(undefined1 **)(lVar10 + 0x2a0) = &LAB_00792400;
      *(undefined1 **)(lVar10 + 0x2b0) = &LAB_00792940;
      *(undefined1 **)(lVar10 + 0x2a8) = &LAB_007927b0;
      *(undefined1 **)(lVar10 + 0x2b8) = &LAB_00792950;
      lVar8 = nn::os::GetCurrentThread();
      plVar16 = (long *)(lVar10 + 0x158);
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x14c));
            while (*plVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *plVar16 = lVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0078f268;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0078f268:
      FUN_006d1640(lVar10,0,*(undefined8 *)(*(long *)PTR_DAT_027155f8 + 0x50));
      lVar8 = param_1[0xe7];
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        param_1[0xe7] = 0;
      }
      param_1[0xe7] = lVar10;
      FUN_0078fb10(param_1 + 0xe8,0x40);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x14c));
      uStack_cc = uStack_cc & 0xffffff00;
      local_100 = 0;
      local_f8 = 0x43800000780;
      local_f0 = 0x50000000b01;
      local_e8 = 0xb01000002d0;
      local_e0 = 0x800000008;
      local_d8 = 0x100000b01;
      local_d0 = 1;
      local_c8 = 0;
      plVar16 = (long *)param_1[1];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar8 + 0x80) < 0x10) {
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x4a8,8);
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0xb8))(plVar16);
        }
        FUN_006fdd90(lVar10,&local_100);
        *(long **)(lVar10 + 8) = plVar16;
        *(long *)(lVar10 + 0x10) = lVar10;
        *(undefined8 *)(lVar10 + 0x18) = 0x4a8;
        *(undefined8 *)(lVar10 + 0x20) = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        if (param_1[0x13] != 0) {
          (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
          param_1[0x13] = 0;
        }
        param_1[0x13] = lVar10;
        local_138 = local_f8;
        local_140 = local_100;
        local_108 = CONCAT44(uStack_c4,local_c8);
        local_110 = CONCAT44(uStack_cc,local_d0);
        local_118 = local_d8;
        local_120 = local_e0;
        _local_128 = CONCAT44(0x1307,(int)local_e8);
        _local_130 = CONCAT44((int)((ulong)local_f0 >> 0x20),0x1307);
        plVar16 = (long *)param_1[1];
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (*(ulong *)(lVar8 + 0x80) < 0x10) {
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x590,8);
          if (lVar10 == 0) {
            (**(code **)(*plVar16 + 0xb8))(plVar16);
          }
          FUN_006f1ba0(lVar10,&local_140);
          *(long **)(lVar10 + 8) = plVar16;
          *(long *)(lVar10 + 0x10) = lVar10;
          *(undefined8 *)(lVar10 + 0x18) = 0x590;
          *(undefined8 *)(lVar10 + 0x20) = 8;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
          }
          if (param_1[0x14] != 0) {
            (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
            param_1[0x14] = 0;
          }
          param_1[0x14] = lVar10;
          FUN_0199c080(pbVar1);
          *pbVar1 = *pbVar1 | 1;
          *(undefined4 *)((long)param_1 + 0x15c9) = 0x701;
          *(undefined2 *)((long)param_1 + 0x15cd) = 7;
          FUN_0199c0b0(plVar14);
          *(undefined1 *)(param_1 + 0x2bd) = 1;
          param_1[0x2c0] = (long)pbVar1;
          lVar8 = FUN_019a44d0(plVar14);
          plVar16 = (long *)param_1[1];
          lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,lVar8,8);
          lVar9 = param_1[0x2c8];
          param_1[0x2c8] = lVar10;
          if (lVar9 != 0) {
            (**(code **)(*(long *)param_1[0x2c9] + 0x18))
                      ((long *)param_1[0x2c9],lVar9,param_1[0x2ca],param_1[0x2cb]);
            lVar10 = param_1[0x2c8];
          }
          param_1[0x2c9] = (long)plVar16;
          param_1[0x2ca] = lVar8;
          param_1[0x2cb] = 8;
          FUN_019a4500(plVar2,lVar10,lVar8);
          FUN_019a4520(plVar2,PTR_DAT_027155e8,plVar14);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


