/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106b050; name: FUN_0106b050
 */


void FUN_0106b050(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *local_2e0;
  long local_2d8;
  long local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [96];
  long local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [328];
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  long local_88;
  char *local_80;
  undefined8 local_78;
  long local_70;
  
  puVar4 = PTR_DAT_02710860;
  plVar10 = *(long **)(param_1 + 8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x108,8);
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0xb8))(plVar10);
    }
    FUN_00739060(lVar7,plVar10);
    *(long **)(lVar7 + 8) = plVar10;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x108;
    *(undefined8 *)(lVar7 + 0x20) = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x268) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    *(long *)(param_1 + 0x268) = lVar7;
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    local_2c8 = (code *)0x0;
    local_2e0 = PTR_DAT_02710810 + 0x10;
    local_2d8 = 0;
    FUN_001060b0(&local_e8,"bin/graphics/blend_shader/blend_path.bnsh");
    lVar6 = *(long *)PTR_DAT_02710788;
    lVar7 = *(long *)(lVar6 + 0x1e8);
    if (lVar7 == 0) {
      lVar7 = *(long *)(lVar6 + 8);
    }
    FUN_0010d7b0(&local_88,lVar6,0,&local_e8,0,lVar7,0);
    if (local_2d8 != 0) {
      (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
    }
    local_2d8 = local_88;
    if (local_88 != 0) {
      plVar10 = (long *)(local_88 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      if ((local_2d0 != 0) || (local_250 != 0)) {
        FUN_006e1e70(local_88,&local_2e0,1);
      }
      FUN_006e1be0(local_88);
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    if ((local_d0 != 0) && (local_e8 != (undefined *)0x0)) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    }
    local_e8 = (undefined *)0x0;
    uStack_e0 = 0xcbf29ce484222645;
    local_d8 = &DAT_01d38550;
    local_d0 = 0;
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      local_c8 = 0;
    }
    FUN_007299a0(&local_e8,*(undefined8 *)(param_1 + 8),1);
    local_e8 = PTR_DAT_02723bc8 + 0x10;
    FUN_00798040(*(undefined8 *)(param_1 + 0x268),&local_2e0,&local_e8);
    local_2e0 = PTR_DAT_02710800 + 0x10;
    if (local_2d8 == 0) {
      local_2d8 = 0;
      pcVar3 = local_248;
    }
    else {
      FUN_006e2100(local_2d8,&local_2e0);
      lVar6 = local_2d8;
      local_2d8 = 0;
      pcVar3 = local_248;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        pcVar3 = local_248;
      }
    }
    local_248 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      local_240 = 0;
      uStack_238 = 0;
      local_250 = 0;
      local_248 = (code *)0x0;
      (*pcVar3)(auStack_230);
    }
    pcVar3 = local_2c8;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = 0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(auStack_2b0);
    }
    if (local_2d8 != 0) {
      (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
      local_2d8 = 0;
    }
    local_a8 = 0xffffffff00000002;
    local_a0 = 0;
    local_9c = 0;
    local_90 = 0;
    local_8c = 0;
    local_98 = 0xffffffff00000001;
    *(undefined4 *)(*(long *)(param_1 + 0x268) + 0xf8) = 3;
    puVar5 = PTR_DAT_027154f0;
    lVar7 = *(long *)(param_1 + 0x268);
    plVar10 = *(long **)(lVar7 + 8);
    uVar11 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x1b0,8);
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0xb8))(plVar10);
      }
      FUN_00721450(lVar8,&local_a8,2,4,1,uVar11);
      *(long **)(lVar8 + 8) = plVar10;
      *(long *)(lVar8 + 0x10) = lVar8;
      *(undefined8 *)(lVar8 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar8 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar7 + 0xe8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar7 + 0xe8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar7 + 0xe8) = 0;
      }
      *(long *)(lVar7 + 0xe8) = lVar8;
      lVar7 = *(long *)(param_1 + 0x268);
      plVar10 = *(long **)(lVar7 + 8);
      uVar11 = *(undefined8 *)(*(long *)puVar5 + 0x10);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (*(ulong *)(lVar6 + 0x80) < 0x10) {
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x140,8);
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0xb8))(plVar10);
        }
        FUN_0071dad0(lVar8,6,uVar11);
        *(long **)(lVar8 + 8) = plVar10;
        *(long *)(lVar8 + 0x10) = lVar8;
        *(undefined8 *)(lVar8 + 0x18) = 0x140;
        *(undefined8 *)(lVar8 + 0x20) = 8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar7 + 0xf0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar7 + 0xf0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar7 + 0xf0) = 0;
        }
        *(long *)(lVar7 + 0xf0) = lVar8;
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x268) + 0xe8) + 0x98) + 0x58);
        puVar9 = (undefined8 *)thunk_FUN_0199c7e0(lVar6);
        *(undefined4 *)(puVar9 + 2) = 0;
        *puVar9 = 0xbf800000bf800000;
        puVar9[1] = 0;
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x68));
        *puVar9 = 0xbf8000003f800000;
        puVar9[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar9 + 2) = 0;
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x68));
        *puVar9 = 0x3f800000bf800000;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0x3f800000;
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x68));
        *puVar9 = 0x3f8000003f800000;
        puVar9[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar9 + 2) = 0x3f800000;
        if (lVar6 != 0) {
          thunk_FUN_0199c800(lVar6);
        }
        lVar6 = *(long *)(*(long *)(param_1 + 0x268) + 0xf0) + 0x58;
        puVar9 = (undefined8 *)thunk_FUN_0199c7e0(lVar6);
        *puVar9 = 0x2000200010000;
        *(undefined4 *)(puVar9 + 1) = 0x30001;
        thunk_FUN_0199c800(lVar6);
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = (undefined1 *)0x0;
        local_d0 = 0;
        local_e8 = (undefined *)0x0;
        uStack_e0 = 0;
        FUN_0199c0f0(&local_e8);
        local_e8 = (undefined *)((ulong)local_e8 & 0xfffffffcffffffff);
        FUN_00739580(*(undefined8 *)(param_1 + 0x268),&local_e8);
        lVar7 = *(long *)(param_1 + 0x268);
        uVar11 = *(undefined8 *)(param_1 + 0x138);
        uVar2 = *(undefined8 *)(param_1 + 0x140);
        uVar1 = *(undefined8 *)(param_1 + 0x148);
        lVar6 = *(long *)(param_1 + 0x150);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        *(undefined8 *)(lVar7 + 0x80) = uVar11;
        *(undefined8 *)(lVar7 + 0x88) = uVar2;
        *(undefined8 *)(lVar7 + 0x90) = uVar1;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(lVar7 + 0x98);
        *(long *)(lVar7 + 0x98) = lVar6;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        FUN_00701e00(param_2,param_1);
        FUN_00702020(param_2,*(undefined8 *)(param_1 + 0x268));
        if (param_3 != 0) {
          FUN_00784060(&local_2e0,param_3);
          local_88 = 0x5751149dfc7f9d61;
          local_80 = "u_ColorBuffer1";
          local_78 = 0xe;
          local_70 = 0;
          FUN_007394b0(*(undefined8 *)(param_1 + 0x268),&local_88,&local_2e0,4);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          FUN_00784490(&local_2e0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


