/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d32a20; name: FUN_00d32a20
 */


void FUN_00d32a20(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar10 = lVar9 + 1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  plStack_58 = plVar1;
  if ((ulong)(lVar6 >> 5) < 0x3ffffffffffffff) {
    uVar7 = lVar6 >> 4;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      local_78 = 0;
      goto LAB_00d32adc;
    }
  }
  else {
    uVar10 = 0x7ffffffffffffff;
  }
  local_60 = 0;
  local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar10 << 5,8);
  if (local_78 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_00d32adc:
  puVar3 = PTR_DAT_02710860;
  puVar2 = (undefined8 *)(local_78 + lVar9 * 0x20);
  local_60 = local_78 + uVar10 * 0x20;
  lVar6 = *plVar1;
  local_70 = puVar2;
  local_68 = puVar2;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00d32c18:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar6;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  uVar5 = *param_2;
  *param_2 = 0;
  *puVar2 = uVar5;
  uVar8 = param_2[3];
  uVar5 = param_2[2];
  puVar2[1] = param_2[1];
  puVar2[2] = uVar5;
  puVar2[3] = uVar8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  local_68 = local_68 + 4;
  lVar9 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 != lVar9) {
    do {
      puVar2 = local_70;
      lVar11 = *plVar1;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00d32c18;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar5 = *(undefined8 *)(lVar6 + -0x20);
      *(undefined8 *)(lVar6 + -0x20) = 0;
      puVar2[-4] = uVar5;
      uVar8 = *(undefined8 *)(lVar6 + -8);
      uVar5 = *(undefined8 *)(lVar6 + -0x10);
      puVar2[-3] = *(undefined8 *)(lVar6 + -0x18);
      puVar2[-2] = uVar5;
      puVar2[-1] = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar6 = lVar6 + -0x20;
      local_70 = local_70 + -4;
    } while (lVar9 != lVar6);
    lVar9 = *param_1;
    lVar6 = param_1[1];
  }
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  lVar4 = param_1[2];
  param_1[2] = local_60;
  local_78 = lVar9;
  local_70 = (undefined8 *)lVar9;
  local_68 = (undefined8 *)lVar6;
  local_60 = lVar4;
  FUN_00d32c30(&local_78);
  return;
}


