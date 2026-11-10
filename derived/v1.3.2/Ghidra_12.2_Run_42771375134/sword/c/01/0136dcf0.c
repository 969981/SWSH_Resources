/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136dcf0; name: FUN_0136dcf0
 */


void FUN_0136dcf0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long local_80;
  undefined1 auStack_78 [16];
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_027185f8;
  lVar8 = FUN_0120e640(*(undefined8 *)PTR_DAT_027185f8);
  if (lVar8 != param_2) {
    auStack_78 = FUN_0120e870(*(undefined8 *)puVar3,param_2);
    if (auStack_78._0_8_ == 0 && auStack_78._8_8_ == 0) {
      FUN_0136e130(param_1,param_2);
      return;
    }
    local_68 = *param_3;
    local_80 = param_2;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    local_60 = param_3[1];
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    local_58 = param_3[2];
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_50 = param_3[3];
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    local_48 = param_3[4];
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_40 = param_3[5];
    plVar1 = *(long **)(param_1 + 0x88);
    if (plVar1 < *(long **)(param_1 + 0x90)) {
      uVar11 = *(undefined8 *)(param_1 + 0x98);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar7 = local_48;
      lVar6 = local_50;
      lVar5 = local_58;
      lVar4 = local_60;
      lVar8 = local_68;
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar11;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar1 = local_80;
      *(undefined1 (*) [16])(plVar1 + 1) = auStack_78;
      local_68 = 0;
      plVar1[3] = lVar8;
      local_60 = 0;
      plVar1[4] = lVar4;
      local_58 = 0;
      plVar1[5] = lVar5;
      local_50 = 0;
      plVar1[6] = lVar6;
      local_48 = 0;
      plVar1[7] = lVar7;
      plVar1[8] = local_40;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 0x48;
    }
    else {
      FUN_0136ef00(param_1 + 0x80,&local_80);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0xb8);
    for (puVar10 = *(undefined8 **)(param_1 + 0xb0); puVar10 != puVar2; puVar10 = puVar10 + 0x10) {
      local_34 = 0;
      local_80 = param_2;
      (*(code *)*puVar10)(puVar10 + 4,&local_34,&local_80);
    }
  }
  return;
}


