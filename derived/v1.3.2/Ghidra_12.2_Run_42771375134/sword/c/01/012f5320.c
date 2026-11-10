/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f5320; name: FUN_012f5320
 */


void FUN_012f5320(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar10 = 0x555555555555555;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  plStack_68 = plVar2;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto LAB_012f53fc;
    }
  }
  local_70 = 0;
  lVar6 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar10 * 0x30,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_012f53fc:
  puVar3 = PTR_DAT_02710860;
  puVar11 = (undefined8 *)(lVar6 + lVar5 * 0x10);
  local_70 = lVar6 + uVar10 * 0x30;
  lVar12 = *plVar2;
  local_88 = lVar6;
  local_80 = puVar11;
  local_78 = puVar11;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_012f5568:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  *puVar11 = *param_2;
  lVar6 = lVar6 + lVar5 * 0x10;
  *(undefined8 *)(lVar6 + 8) = param_2[1];
  uVar8 = param_2[2];
  param_2[2] = 0;
  *(undefined8 *)(lVar6 + 0x10) = uVar8;
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  *(undefined8 *)(lVar6 + 0x18) = param_2[3];
  *(undefined8 *)(lVar6 + 0x20) = uVar8;
  *(undefined8 *)(lVar6 + 0x28) = uVar9;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  local_78 = local_78 + 6;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 != lVar5) {
    do {
      puVar11 = local_80;
      lVar12 = *plVar2;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_012f5568;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      puVar11[-6] = *(undefined8 *)(lVar6 + -0x30);
      puVar11[-5] = *(undefined8 *)(lVar6 + -0x28);
      uVar8 = *(undefined8 *)(lVar6 + -0x20);
      *(undefined8 *)(lVar6 + -0x20) = 0;
      puVar11[-4] = uVar8;
      uVar8 = *(undefined8 *)(lVar6 + -0x18);
      uVar9 = *(undefined8 *)(lVar6 + -8);
      puVar11[-2] = *(undefined8 *)(lVar6 + -0x10);
      puVar11[-1] = uVar9;
      puVar11[-3] = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar6 = lVar6 + -0x30;
      local_80 = local_80 + -6;
    } while (lVar5 != lVar6);
    lVar5 = *param_1;
    lVar6 = param_1[1];
  }
  *param_1 = (long)local_80;
  param_1[1] = (long)local_78;
  lVar4 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar5;
  local_80 = (undefined8 *)lVar5;
  local_78 = (undefined8 *)lVar6;
  local_70 = lVar4;
  FUN_012f4c10(&local_88);
  return;
}


