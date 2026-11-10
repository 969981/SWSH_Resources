/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01062050; name: FUN_01062050
 */


void FUN_01062050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 *local_200;
  long local_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined *local_1a0 [4];
  undefined *local_180;
  long local_178;
  long local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  long local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = PTR_DAT_02710810 + 0x10;
  local_178 = 0;
  FUN_00105f80(&local_210,"bin/graphics/mask_shader/mask_path.bnsh");
  lVar7 = *(long *)PTR_DAT_02710788;
  lVar10 = *(long *)(lVar7 + 0x1e8);
  if (lVar10 == 0) {
    lVar10 = *(long *)(lVar7 + 8);
  }
  FUN_0010d7b0(&local_1d0,lVar7,0,&local_210,0,lVar10,0);
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
  }
  lVar7 = local_1d0;
  local_178 = local_1d0;
  if (local_1d0 != 0) {
    plVar11 = (long *)(local_1d0 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    if ((local_170 != 0) || (local_f0 != 0)) {
      FUN_006e1e70(lVar7,&local_180,1);
    }
    FUN_006e1be0(lVar7);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if ((local_1f8 != 0) && (local_210 != 0)) {
    (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
  }
  local_210 = 0;
  uStack_208 = 0xcbf29ce484222645;
  local_200 = &DAT_01d38550;
  local_1f8 = 0;
  if (local_1f0 != 0) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    local_1f0 = 0;
  }
  FUN_007299a0(local_1a0,*(undefined8 *)(param_1 + 8),1);
  local_1a0[0] = PTR_DAT_02723ab0 + 0x10;
  FUN_00701e00(param_2,param_1);
  puVar4 = PTR_DAT_02710860;
  plVar11 = *(long **)(param_1 + 8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar11 + 0x10))(plVar11,0x108,8);
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_00739060(lVar10,plVar11);
    *(long **)(lVar10 + 8) = plVar11;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x108;
    *(undefined8 *)(lVar10 + 0x20) = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x268) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    *(long *)(param_1 + 0x268) = lVar10;
    FUN_00798040(lVar10,&local_180,local_1a0);
    local_1d0 = -0xfffffffe;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_1c0 = 0xffffffff00000001;
    local_1b0 = 0xffffffff00000001;
    *(undefined4 *)(*(long *)(param_1 + 0x268) + 0xf8) = 3;
    puVar5 = PTR_DAT_027154f0;
    lVar10 = *(long *)(param_1 + 0x268);
    plVar11 = *(long **)(lVar10 + 8);
    uVar12 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1b0,8);
      if (lVar8 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_00721450(lVar8,&local_1d0,3,4,1,uVar12);
      *(long **)(lVar8 + 8) = plVar11;
      *(long *)(lVar8 + 0x10) = lVar8;
      *(undefined8 *)(lVar8 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar8 + 0x20) = 8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar10 + 0xe8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar10 + 0xe8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar10 + 0xe8) = 0;
      }
      *(long *)(lVar10 + 0xe8) = lVar8;
      lVar10 = *(long *)(param_1 + 0x268);
      plVar11 = *(long **)(lVar10 + 8);
      uVar12 = *(undefined8 *)(*(long *)puVar5 + 0x10);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x140,8);
        if (lVar8 == 0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
        }
        FUN_0071dad0(lVar8,6,uVar12);
        *(long **)(lVar8 + 8) = plVar11;
        *(long *)(lVar8 + 0x10) = lVar8;
        *(undefined8 *)(lVar8 + 0x18) = 0x140;
        *(undefined8 *)(lVar8 + 0x20) = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar10 + 0xf0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar10 + 0xf0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar10 + 0xf0) = 0;
        }
        *(long *)(lVar10 + 0xf0) = lVar8;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x268) + 0xe8) + 0x98) + 0x58);
        puVar9 = (undefined8 *)thunk_FUN_0199c7e0(lVar7);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *(undefined4 *)(puVar9 + 3) = 0x3f800000;
        *puVar9 = 0xbf800000bf800000;
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x68));
        *puVar9 = 0xbf8000003f800000;
        puVar9[1] = 0x3f80000000000000;
        puVar9[2] = 0x3f80000000000000;
        *(undefined4 *)(puVar9 + 3) = 0x3f800000;
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x68));
        *puVar9 = 0x3f800000bf800000;
        puVar9[1] = 0;
        puVar9[2] = 0x3f800000;
        *(undefined4 *)(puVar9 + 3) = 0;
        puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x68));
        *puVar9 = 0x3f8000003f800000;
        puVar9[1] = 0x3f80000000000000;
        puVar9[2] = 0x3f8000003f800000;
        *(undefined4 *)(puVar9 + 3) = 0;
        if (lVar7 != 0) {
          thunk_FUN_0199c800(lVar7);
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x268) + 0xf0) + 0x58;
        puVar9 = (undefined8 *)thunk_FUN_0199c7e0(lVar7);
        *puVar9 = 0x2000200010000;
        *(undefined4 *)(puVar9 + 1) = 0x30001;
        thunk_FUN_0199c800(lVar7);
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        local_200 = (undefined1 *)0x0;
        local_1f8 = 0;
        local_210 = 0;
        uStack_208 = 0;
        FUN_0199c0f0(&local_210);
        uVar12 = local_210;
        uVar6 = local_210._4_2_;
        local_210 = CONCAT71(local_210._1_7_,7);
        uVar1 = local_210;
        local_210._6_2_ = SUB82(uVar12,6);
        local_210._0_4_ = (undefined4)uVar1;
        local_210 = CONCAT26(local_210._6_2_,CONCAT24(uVar6,(undefined4)local_210)) | 0x300000000;
        FUN_00739580(*(undefined8 *)(param_1 + 0x268),&local_210);
        lVar10 = *(long *)(param_1 + 0x268);
        uVar12 = *(undefined8 *)(param_1 + 0x138);
        uVar2 = *(undefined8 *)(param_1 + 0x140);
        uVar1 = *(undefined8 *)(param_1 + 0x148);
        lVar7 = *(long *)(param_1 + 0x150);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        *(undefined8 *)(lVar10 + 0x80) = uVar12;
        *(undefined8 *)(lVar10 + 0x88) = uVar2;
        *(undefined8 *)(lVar10 + 0x90) = uVar1;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(lVar10 + 0x98);
        *(long *)(lVar10 + 0x98) = lVar7;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
        FUN_00702020(param_2,*(undefined8 *)(param_1 + 0x268));
        *(undefined4 *)(*(long *)(param_1 + 0x268) + 0xfc) = *(undefined4 *)(param_1 + 0x270);
        local_180 = PTR_DAT_02710800 + 0x10;
        if (local_178 == 0) {
          local_178 = 0;
          pcVar3 = local_e8;
        }
        else {
          FUN_006e2100(local_178,&local_180);
          lVar7 = local_178;
          local_178 = 0;
          pcVar3 = local_e8;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            pcVar3 = local_e8;
          }
        }
        local_e8 = pcVar3;
        if (pcVar3 != (code *)0x0) {
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          local_e8 = (code *)0x0;
          (*pcVar3)(auStack_d0);
        }
        pcVar3 = local_168;
        if (local_168 != (code *)0x0) {
          local_160 = 0;
          uStack_158 = 0;
          local_170 = 0;
          local_168 = (code *)0x0;
          (*pcVar3)(auStack_150);
        }
        if (local_178 != 0) {
          (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


