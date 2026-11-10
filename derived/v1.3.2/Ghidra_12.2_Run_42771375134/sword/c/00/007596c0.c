/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007596c0; name: FUN_007596c0
 */


void FUN_007596c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
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
  
  puVar5 = PTR_DAT_02710860;
  plVar11 = *(long **)(param_1 + 8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x108,8);
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_00739060(lVar8,plVar11);
    *(long **)(lVar8 + 8) = plVar11;
    *(long *)(lVar8 + 0x10) = lVar8;
    *(undefined8 *)(lVar8 + 0x18) = 0x108;
    *(undefined8 *)(lVar8 + 0x20) = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x268) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    *(long *)(param_1 + 0x268) = lVar8;
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
    FUN_0010f980(&local_1b0,PTR_DAT_02710908,"shader/copy.bnsh",&DAT_01d38550);
    lVar7 = *(long *)PTR_DAT_02710788;
    lVar8 = *(long *)(lVar7 + 0x1e8);
    if (lVar8 == 0) {
      lVar8 = *(long *)(lVar7 + 8);
    }
    FUN_0010d7b0(local_70,lVar7,0,&local_1b0,0,lVar8,0);
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
    FUN_007299a0(&local_1b0,*(undefined8 *)(param_1 + 8),1);
    local_1b0 = PTR_DAT_02715e98 + 0x10;
    FUN_00798040(*(undefined8 *)(param_1 + 0x268),&local_180,&local_1b0);
    local_180 = PTR_DAT_02710800 + 0x10;
    if (local_178 == 0) {
      local_178 = 0;
      pcVar4 = local_e8;
    }
    else {
      FUN_006e2100(local_178,&local_180);
      lVar7 = local_178;
      local_178 = 0;
      pcVar4 = local_e8;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        pcVar4 = local_e8;
      }
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar4)(auStack_d0);
    }
    pcVar4 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar4)(&local_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
    local_1b0 = (undefined *)0xffffffff00000002;
    local_1a8 = local_1a8 & 0xffffff0000000000;
    local_198 = local_198 & 0xffffff0000000000;
    local_1a0 = (undefined1 *)0xffffffff00000001;
    *(undefined4 *)(*(long *)(param_1 + 0x268) + 0xf8) = 3;
    puVar6 = PTR_DAT_027154f0;
    lVar8 = *(long *)(param_1 + 0x268);
    plVar11 = *(long **)(lVar8 + 8);
    uVar12 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1b0,8);
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_00721450(lVar9,&local_1b0,2,4,1,uVar12);
      *(long **)(lVar9 + 8) = plVar11;
      *(long *)(lVar9 + 0x10) = lVar9;
      *(undefined8 *)(lVar9 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar9 + 0x20) = 8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar8 + 0xe8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar8 + 0xe8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar8 + 0xe8) = 0;
      }
      *(long *)(lVar8 + 0xe8) = lVar9;
      lVar8 = *(long *)(param_1 + 0x268);
      plVar11 = *(long **)(lVar8 + 8);
      uVar12 = *(undefined8 *)(*(long *)puVar6 + 0x10);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,0x140,8);
        if (lVar9 == 0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
        }
        FUN_0071dad0(lVar9,6,uVar12);
        *(long **)(lVar9 + 8) = plVar11;
        *(long *)(lVar9 + 0x10) = lVar9;
        *(undefined8 *)(lVar9 + 0x18) = 0x140;
        *(undefined8 *)(lVar9 + 0x20) = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar8 + 0xf0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar8 + 0xf0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar8 + 0xf0) = 0;
        }
        *(long *)(lVar8 + 0xf0) = lVar9;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x268) + 0xe8) + 0x98) + 0x58);
        puVar10 = (undefined8 *)thunk_FUN_0199c7e0(lVar7);
        *(undefined4 *)(puVar10 + 2) = 0;
        *puVar10 = 0xbf800000bf800000;
        puVar10[1] = 0;
        puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x68));
        *puVar10 = 0xbf8000003f800000;
        puVar10[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar10 + 2) = 0;
        puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x68));
        *puVar10 = 0x3f800000bf800000;
        puVar10[1] = 0;
        *(undefined4 *)(puVar10 + 2) = 0x3f800000;
        puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar7 + 0x68));
        *puVar10 = 0x3f8000003f800000;
        puVar10[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar10 + 2) = 0x3f800000;
        if (lVar7 != 0) {
          thunk_FUN_0199c800(lVar7);
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x268) + 0xf0) + 0x58;
        puVar10 = (undefined8 *)thunk_FUN_0199c7e0(lVar7);
        *puVar10 = 0x2000200010000;
        *(undefined4 *)(puVar10 + 1) = 0x30001;
        thunk_FUN_0199c800(lVar7);
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
        FUN_00739580(*(undefined8 *)(param_1 + 0x268),&local_180);
        uVar3 = (uint)*(byte *)(param_1 + 0x484) | (uint)*(byte *)(param_1 + 0x485) << 1;
        *(uint *)(param_1 + 0x488) = uVar3;
        *(uint *)(*(long *)(param_1 + 0x268) + 0xfc) = uVar3;
        lVar8 = *(long *)(param_1 + 0x268);
        uVar12 = *(undefined8 *)(param_1 + 0x138);
        uVar2 = *(undefined8 *)(param_1 + 0x140);
        uVar1 = *(undefined8 *)(param_1 + 0x148);
        lVar7 = *(long *)(param_1 + 0x150);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        *(undefined8 *)(lVar8 + 0x80) = uVar12;
        *(undefined8 *)(lVar8 + 0x88) = uVar2;
        *(undefined8 *)(lVar8 + 0x90) = uVar1;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        lVar9 = *(long *)(lVar8 + 0x98);
        *(long *)(lVar8 + 0x98) = lVar7;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
        FUN_00701e00(param_2,param_1);
        FUN_00702020(param_2,*(undefined8 *)(param_1 + 0x268));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


