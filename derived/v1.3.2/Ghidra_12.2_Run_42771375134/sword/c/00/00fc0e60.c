/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc0e60; name: FUN_00fc0e60
 */


void FUN_00fc0e60(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar8 = 0x63e7063e7063e7;
  uVar1 = lVar5 * -0x7063e7063e7063e7 + 1;
  if (0x63e7063e7063e7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  plStack_68 = plVar2;
  if ((ulong)(lVar6 * -0x7063e7063e7063e7) < 0x31f3831f3831f3) {
    uVar7 = lVar6 * 0x1f3831f3831f3832;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      local_88 = 0;
      goto LAB_00fc0f54;
    }
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar8 * 0x290,0x10);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00fc0f54:
  puVar3 = PTR_DAT_02710860;
  lVar6 = local_88 + lVar5 * 0x10;
  local_70 = local_88 + uVar8 * 0x290;
  lVar9 = *plVar2;
  local_80 = lVar6;
  local_78 = lVar6;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00fc1080:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  FUN_00fc07b0(lVar6,param_2);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_78 = local_78 + 0x290;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 != lVar5) {
    do {
      lVar9 = local_80;
      lVar10 = *plVar2;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00fc1080;
      lVar6 = lVar6 + -0x290;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_00fc07b0(lVar9 + -0x290,lVar6);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      local_80 = local_80 + -0x290;
    } while (lVar5 != lVar6);
    lVar5 = *param_1;
    lVar6 = param_1[1];
  }
  *param_1 = local_80;
  param_1[1] = local_78;
  lVar9 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar5;
  local_80 = lVar5;
  local_78 = lVar6;
  local_70 = lVar9;
  FUN_00fc0660(&local_88);
  return;
}


