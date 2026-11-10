/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00747410; name: FUN_00747410
 */


void FUN_00747410(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  ulong local_1a8;
  undefined1 *local_1a0;
  ulong local_198;
  long local_190;
  undefined *local_180;
  long local_178;
  long local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  long local_70 [2];
  
  puVar3 = PTR_DAT_02710860;
  plVar11 = *(long **)(param_1 + 8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x108,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_00739060(lVar6,plVar11);
    *(long **)(lVar6 + 8) = plVar11;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x108;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x270) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x270) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x270) = 0;
    }
    *(long *)(param_1 + 0x270) = lVar6;
    uVar9 = *(undefined8 *)(param_1 + 8);
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
    FUN_0010fda0(&local_1b0,PTR_DAT_02710908,"shader/blend_cubemap.bnsh",&DAT_01d38550);
    puVar4 = PTR_DAT_027154f0;
    lVar5 = *(long *)PTR_DAT_02710788;
    lVar6 = *(long *)(lVar5 + 0x1e8);
    if (lVar6 == 0) {
      lVar6 = *(long *)(lVar5 + 8);
    }
    local_1b8 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    FUN_0073f8c0(local_70,lVar5,0,&local_1b0,0,lVar6,0,&local_1b8);
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    }
    local_178 = local_70[0];
    if (local_70[0] != 0) {
      plVar11 = (long *)(local_70[0] + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      if ((local_170 != 0) || (local_f0 != 0)) {
        FUN_006e1e70(local_70[0],&local_180,1);
      }
      FUN_006e1be0(local_70[0]);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if ((local_198 != 0) && (local_1b0 != (undefined *)0x0)) {
      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    }
    local_1b0 = (undefined *)0x0;
    local_1a8 = 0xcbf29ce484222645;
    local_1a0 = &DAT_01d38550;
    local_198 = 0;
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
    FUN_007299a0(&local_1b0,uVar9,1);
    local_1b0 = PTR_DAT_02715d78 + 0x10;
    FUN_00798040(*(undefined8 *)(param_1 + 0x270),&local_180,&local_1b0);
    iVar1 = *(int *)(param_1 + 0x268);
    plVar11 = *(long **)(param_1 + 8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      iVar1 = iVar1 * 6;
      lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x118,8);
      if (lVar6 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_007340f0(lVar6,iVar1);
      *(long **)(lVar6 + 8) = plVar11;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 0x118;
      *(undefined8 *)(lVar6 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x278) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x278) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x278) = 0;
      }
      *(long *)(param_1 + 0x278) = lVar6;
      if (iVar1 != 0) {
        iVar10 = 0;
        do {
          local_1c0 = **(long **)(*(long *)(param_1 + 0x270) + 0xb0);
          if (local_1c0 != 0) {
            (**(code **)(*(long *)(local_1c0 + 0x48) + 0x10))();
          }
          FUN_00734610(lVar6,iVar10,&local_1c0);
          if (local_1c0 != 0) {
            (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
            local_1c0 = 0;
          }
          lVar6 = *(long *)(param_1 + 0x278);
          iVar10 = iVar10 + 1;
        } while (iVar1 != iVar10);
      }
      FUN_00734980(lVar6,&local_1b0);
      local_180 = PTR_DAT_02710800 + 0x10;
      if (local_178 == 0) {
        local_178 = 0;
        pcVar2 = local_e8;
      }
      else {
        FUN_006e2100(local_178,&local_180);
        lVar5 = local_178;
        local_178 = 0;
        pcVar2 = local_e8;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          pcVar2 = local_e8;
        }
      }
      local_e8 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar2)(auStack_d0);
      }
      pcVar2 = local_168;
      if (local_168 != (code *)0x0) {
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        local_168 = (code *)0x0;
        (*pcVar2)(&local_150);
      }
      if (local_178 != 0) {
        (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
        local_178 = 0;
      }
      local_1b0 = (undefined *)0xffffffff00000002;
      local_1a8 = local_1a8 & 0xffffff0000000000;
      local_198 = local_198 & 0xffffff0000000000;
      local_1a0 = (undefined1 *)0xffffffff00000001;
      *(undefined4 *)(*(long *)(param_1 + 0x270) + 0xf8) = 3;
      lVar6 = *(long *)(param_1 + 0x270);
      plVar11 = *(long **)(lVar6 + 8);
      uVar9 = *(undefined8 *)(*(long *)puVar4 + 0x10);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1b0,8);
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
        }
        FUN_00721450(lVar7,&local_1b0,2,4,1,uVar9);
        *(long **)(lVar7 + 8) = plVar11;
        *(long *)(lVar7 + 0x10) = lVar7;
        *(undefined8 *)(lVar7 + 0x18) = 0x1b0;
        *(undefined8 *)(lVar7 + 0x20) = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar6 + 0xe8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar6 + 0xe8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar6 + 0xe8) = 0;
        }
        *(long *)(lVar6 + 0xe8) = lVar7;
        lVar6 = *(long *)(param_1 + 0x270);
        plVar11 = *(long **)(lVar6 + 8);
        uVar9 = *(undefined8 *)(*(long *)puVar4 + 0x10);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (*(ulong *)(lVar5 + 0x80) < 0x10) {
          *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x140,8);
          if (lVar7 == 0) {
            (**(code **)(*plVar11 + 0xb8))(plVar11);
          }
          FUN_0071dad0(lVar7,6,uVar9);
          *(long **)(lVar7 + 8) = plVar11;
          *(long *)(lVar7 + 0x10) = lVar7;
          *(undefined8 *)(lVar7 + 0x18) = 0x140;
          *(undefined8 *)(lVar7 + 0x20) = 8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          if (*(long *)(lVar6 + 0xf0) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar6 + 0xf0) + 0x48) + 0x18))();
            *(undefined8 *)(lVar6 + 0xf0) = 0;
          }
          *(long *)(lVar6 + 0xf0) = lVar7;
          lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x270) + 0xe8) + 0x98) + 0x58);
          puVar8 = (undefined8 *)thunk_FUN_0199c7e0(lVar5);
          *(undefined4 *)(puVar8 + 2) = 0;
          *puVar8 = 0xbf800000bf800000;
          puVar8[1] = 0;
          puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x68));
          *puVar8 = 0xbf8000003f800000;
          puVar8[1] = 0x3f80000000000000;
          *(undefined4 *)(puVar8 + 2) = 0;
          puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x68));
          *puVar8 = 0x3f800000bf800000;
          puVar8[1] = 0;
          *(undefined4 *)(puVar8 + 2) = 0x3f800000;
          puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x68));
          *puVar8 = 0x3f8000003f800000;
          puVar8[1] = 0x3f80000000000000;
          *(undefined4 *)(puVar8 + 2) = 0x3f800000;
          if (lVar5 != 0) {
            thunk_FUN_0199c800(lVar5);
          }
          lVar5 = *(long *)(*(long *)(param_1 + 0x270) + 0xf0) + 0x58;
          puVar8 = (undefined8 *)thunk_FUN_0199c7e0(lVar5);
          *puVar8 = 0x2000200010000;
          *(undefined4 *)(puVar8 + 1) = 0x30001;
          thunk_FUN_0199c800(lVar5);
          local_150 = 0;
          uStack_148 = 0;
          local_160 = 0;
          uStack_158 = 0;
          local_170 = 0;
          local_168 = (code *)0x0;
          local_180 = (undefined *)0x0;
          local_178 = 0;
          FUN_0199c0f0(&local_180);
          local_180 = (undefined *)((ulong)local_180 & 0xfffffffcffffffff);
          FUN_00739580(*(undefined8 *)(param_1 + 0x270),&local_180);
          FUN_00701e00(param_2,param_1);
          FUN_00708890(param_1,*(undefined8 *)(param_1 + 0x270));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


