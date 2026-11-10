/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010679a0; name: FUN_010679a0
 */


void FUN_010679a0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_e0 [2];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined4 local_68;
  
  *param_1 = (long)(PTR_DAT_02723b38 + 0x10);
  param_1[1] = param_2;
  plVar4 = param_1 + 2;
  *plVar4 = 0;
  param_1[6] = (long)(PTR_DAT_02710810 + 0x10);
  param_1[7] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[3] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x41] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x42) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = PTR_DAT_02710860;
  local_88 = 0x2d0;
  uStack_84 = 0xb06;
  uStack_70 = 1;
  local_6c = 0;
  local_68 = 0;
  local_90 = 0xb06;
  uStack_8c = 0x500;
  local_b8 = 0x100000b01;
  local_b0 = 1;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0x780;
  uStack_94 = 0x438;
  local_e0[0] = 0;
  local_e0[1] = 0x43800000780;
  local_80 = 8;
  uStack_7c = 8;
  uStack_78 = 0xb01;
  local_74 = 1;
  local_c8 = 0x2d0;
  uStack_c4 = 0x1307;
  local_c0 = 0x800000008;
  local_d0 = 0x1307;
  uStack_cc = 0x500;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x4a8,8);
    if (lVar3 == 0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    FUN_006fdd90(lVar3,&local_a0);
    *(long **)(lVar3 + 8) = param_3;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x4a8;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *plVar4 = lVar3;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x590,8);
      if (lVar3 == 0) {
        (**(code **)(*param_3 + 0xb8))(param_3);
      }
      FUN_006f1ba0(lVar3,local_e0);
      *(long **)(lVar3 + 8) = param_3;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x590;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (param_1[3] != 0) {
        (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
        param_1[3] = 0;
      }
      param_1[3] = lVar3;
      uStack_c4 = local_d0;
      uStack_cc = (undefined4)local_e0[1];
      local_c8 = (undefined4)((ulong)local_e0[1] >> 0x20);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x590,8);
        if (lVar3 == 0) {
          (**(code **)(*param_3 + 0xb8))(param_3);
        }
        FUN_006f1ba0(lVar3,local_e0);
        *(long **)(lVar3 + 8) = param_3;
        *(long *)(lVar3 + 0x10) = lVar3;
        *(undefined8 *)(lVar3 + 0x18) = 0x590;
        *(undefined8 *)(lVar3 + 0x20) = 8;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (param_1[4] != 0) {
          (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
          param_1[4] = 0;
        }
        lVar2 = param_1[2];
        param_1[4] = lVar3;
        *(undefined8 *)(lVar2 + 0x98) = 0;
        *(undefined8 *)(lVar2 + 0xa0) = 0;
        uStack_7c = 8;
        uStack_78 = 0xb01;
        local_98 = 0x400;
        uStack_94 = 0x400;
        local_90 = 0x1407;
        uStack_84 = 0x1407;
        local_80 = 8;
        local_a0 = 0;
        local_6c = 0;
        local_68 = 0;
        uStack_8c = 0x400;
        local_88 = 0x400;
        local_74 = 2;
        uStack_70 = 1;
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar2 + 0x80) < 0x10) {
          *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
          lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x590,8);
          if (lVar3 == 0) {
            (**(code **)(*param_3 + 0xb8))(param_3);
          }
          FUN_006f1ba0(lVar3,&local_a0);
          *(long **)(lVar3 + 8) = param_3;
          *(long *)(lVar3 + 0x10) = lVar3;
          *(undefined8 *)(lVar3 + 0x18) = 0x590;
          *(undefined8 *)(lVar3 + 0x20) = 8;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (param_1[5] != 0) {
            (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
            param_1[5] = 0;
          }
          param_1[5] = lVar3;
          local_80 = 8;
          uStack_7c = 8;
          uStack_78 = 0xb01;
          local_74 = 1;
          uStack_70 = 1;
          local_88 = 0x168;
          uStack_84 = 0x1505;
          local_6c = 0;
          local_a0 = 0;
          local_98 = 0x3c0;
          uStack_94 = 0x21c;
          local_90 = 0x1505;
          uStack_8c = 0x280;
          local_68 = 0;
          lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar2 + 0x80) < 0x10) {
            *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
            *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
            lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x4a8,8);
            if (lVar3 == 0) {
              (**(code **)(*param_3 + 0xb8))(param_3);
            }
            plVar4 = param_1 + 0x28;
            FUN_006fdd90(lVar3,&local_a0);
            *(long **)(lVar3 + 8) = param_3;
            *(long *)(lVar3 + 0x10) = lVar3;
            *(undefined8 *)(lVar3 + 0x18) = 0x4a8;
            *(undefined8 *)(lVar3 + 0x20) = 8;
            *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
            }
            if (*plVar4 != 0) {
              (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
              *plVar4 = 0;
            }
            *plVar4 = lVar3;
            *(undefined8 *)(lVar3 + 0x98) = 0;
            *(undefined8 *)(lVar3 + 0xa0) = 0;
            local_c0 = 0x800000008;
            local_b8 = 0x100000b01;
            local_b0 = 1;
            local_c8 = 0x168;
            uStack_c4 = 0x1307;
            local_ac = 0;
            local_d0 = 0x1307;
            uStack_cc = 0x280;
            local_a8 = 0;
            local_e0[0] = 0;
            local_e0[1] = 0x21c000003c0;
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar2 + 0x80) < 0x10) {
              *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
              lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x590,8);
              if (lVar3 == 0) {
                (**(code **)(*param_3 + 0xb8))(param_3);
              }
              FUN_006f1ba0(lVar3,local_e0);
              *(long **)(lVar3 + 8) = param_3;
              *(long *)(lVar3 + 0x10) = lVar3;
              *(undefined8 *)(lVar3 + 0x18) = 0x590;
              *(undefined8 *)(lVar3 + 0x20) = 8;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
              if (lVar3 != 0) {
                (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
              }
              if (param_1[0x29] != 0) {
                (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
                param_1[0x29] = 0;
              }
              param_1[0x29] = lVar3;
              *(undefined4 *)(lVar3 + 0x580) = 0x3f800000;
              FUN_00a75320(&local_a0,"system_resource/shader/primitive_renderer_shader.bnsh");
              lVar2 = *(long *)PTR_DAT_02710788;
              lVar3 = *(long *)(lVar2 + 0x1e8);
              if (lVar3 == 0) {
                lVar3 = *(long *)(lVar2 + 8);
              }
              FUN_0010d7b0(local_e0,lVar2,0,&local_a0,0,lVar3,0);
              if (param_1[7] != 0) {
                (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
                param_1[7] = 0;
              }
              lVar2 = local_e0[0];
              param_1[7] = local_e0[0];
              if (local_e0[0] != 0) {
                plVar4 = (long *)(local_e0[0] + 0x48);
                (**(code **)(*plVar4 + 0x10))(plVar4);
                if ((param_1[8] != 0) || (param_1[0x18] != 0)) {
                  FUN_006e1e70(lVar2,param_1 + 6,1);
                }
                FUN_006e1be0(lVar2);
                (**(code **)(*plVar4 + 0x18))(plVar4);
              }
              if ((CONCAT44(uStack_84,local_88) != 0) && (local_a0 != 0)) {
                (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
              }
              local_a0 = 0;
              local_98 = 0x84222645;
              uStack_94 = 0xcbf29ce4;
              local_90 = 0x1d38550;
              uStack_8c = 0;
              local_88 = 0;
              uStack_84 = 0;
              if (CONCAT44(uStack_7c,local_80) != 0) {
                (**(code **)(*(long *)(CONCAT44(uStack_7c,local_80) + 0x48) + 0x18))();
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


