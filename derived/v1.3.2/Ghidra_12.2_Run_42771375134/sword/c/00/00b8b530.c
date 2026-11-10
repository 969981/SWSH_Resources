/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8b530; name: FUN_00b8b530
 */


void FUN_00b8b530(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 *local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  undefined1 auStack_150 [96];
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [14];
  
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  puVar10 = (undefined8 *)(param_1 + 8);
  *puVar10 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288);
  plVar8 = (long *)*puVar10;
  local_f0 = &LAB_00b8c7c0;
  local_e8 = FUN_00b8c7e0;
  local_e0 = FUN_00b8c7f0;
  local_d8 = &LAB_00b8c800;
  alStack_d0[0] = param_1;
  plVar3 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xb0,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_016acf20(plVar3,uVar7);
    puVar2 = PTR_DAT_02719678;
    plVar3[0x14] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    plVar9 = *(long **)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = plVar3;
    if (plVar9 != (long *)0x0) {
      *plVar9 = (long)(puVar2 + 0x10);
      if (plVar9[0x14] != 0) {
        (**(code **)(*(long *)(plVar9[0x14] + 0x48) + 0x18))();
        plVar9[0x14] = 0;
      }
      pcVar5 = (code *)plVar9[5];
      if (pcVar5 != (code *)0x0) {
        plVar9[6] = 0;
        plVar9[7] = 0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        (*pcVar5)(plVar9 + 8);
      }
      *plVar9 = (long)(PTR_DAT_02719670 + 0x10);
      if (plVar9[2] != 0) {
        (**(code **)(*(long *)(plVar9[2] + 0x48) + 0x18))();
        plVar9[2] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),plVar9,*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50));
      plVar3 = *(long **)(param_1 + 0x38);
    }
    *(long **)(param_1 + 0x40) = plVar8;
    *(undefined8 *)(param_1 + 0x48) = 0xb0;
    *(undefined8 *)(param_1 + 0x50) = 0x10;
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    if (local_e0 != (code *)0x0) {
      (*local_e0)(alStack_d0,auStack_150);
      local_160 = local_e0;
      local_158 = local_d8;
      local_170 = local_f0;
      local_168 = local_e8;
    }
    pcVar5 = (code *)plVar3[5];
    if (pcVar5 != (code *)0x0) {
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      (*pcVar5)(plVar3 + 8);
    }
    if (local_160 != (code *)0x0) {
      (*local_160)(auStack_150,plVar3 + 8);
      plVar3[7] = (long)local_158;
      plVar3[5] = (long)local_168;
      plVar3[6] = (long)local_160;
      plVar3[4] = (long)local_170;
    }
    if (local_168 != (code *)0x0) {
      (*local_168)(auStack_150);
    }
    FUN_016ad270(*(undefined8 *)(param_1 + 0x38));
    pcVar5 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar5)(alStack_d0);
    }
    plVar8 = (long *)*puVar10;
    plVar3 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_016acf20(plVar3,uVar7);
      puVar1 = PTR_DAT_02719668;
      plVar3[3] = 0;
      *plVar3 = (long)(puVar1 + 0x10);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar9 = *(long **)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar3;
      if (plVar9 != (long *)0x0) {
        *plVar9 = (long)(puVar1 + 0x10);
        if (plVar9[3] != 0) {
          (**(code **)(*(long *)(plVar9[3] + 0x48) + 0x18))();
          plVar9[3] = 0;
        }
        *plVar9 = (long)(PTR_DAT_02719670 + 0x10);
        if (plVar9[2] != 0) {
          (**(code **)(*(long *)(plVar9[2] + 0x48) + 0x18))();
          plVar9[2] = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                  (*(long **)(param_1 + 0x60),plVar9,*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x70));
        plVar3 = *(long **)(param_1 + 0x58);
      }
      *(long **)(param_1 + 0x60) = plVar8;
      *(undefined8 *)(param_1 + 0x68) = 0x20;
      *(undefined8 *)(param_1 + 0x70) = 8;
      FUN_016ae380(plVar3);
      FUN_016ae300(&local_f0,*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(local_f0 + 0x728) = *(undefined8 *)(param_1 + 0x18);
      if (local_f0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        local_f0 = (undefined1 *)0x0;
      }
      FUN_016ae700(&local_f0,*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(local_f0 + 0x700) = *(undefined8 *)(param_1 + 0x18);
      if (local_f0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


