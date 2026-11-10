/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b7af0; name: FUN_011b7af0
 */


void FUN_011b7af0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar13 = 0x1e1e1e1e1e1e1e1;
  uVar2 = lVar9 * -0xf0f0f0f0f0f0f0f + 1;
  if (0x1e1e1e1e1e1e1e1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - *param_1 >> 3;
  plVar3 = param_1 + 3;
  local_58 = plVar3;
  if ((ulong)(lVar10 * -0xf0f0f0f0f0f0f0f) < 0xf0f0f0f0f0f0f0) {
    uVar11 = lVar10 * -0x1e1e1e1e1e1e1e1e;
    uVar13 = uVar2;
    if (uVar2 <= uVar11) {
      uVar13 = uVar11;
    }
    if (uVar13 == 0) {
      lVar10 = 0;
      goto LAB_011b7bc8;
    }
  }
  local_60 = 0;
  lVar10 = (**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,uVar13 * 0x88,8);
  if (lVar10 == 0) {
    (**(code **)(*(long *)*plVar3 + 0xb8))();
  }
LAB_011b7bc8:
  puVar15 = (undefined8 *)(lVar10 + lVar9 * 8);
  local_60 = lVar10 + uVar13 * 0x88;
  lVar14 = *plVar3;
  local_78 = lVar10;
  local_70 = puVar15;
  local_68 = puVar15;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  uVar12 = param_2[2];
  uVar4 = param_2[1];
  uVar5 = *(undefined2 *)(param_2 + 3);
  *puVar15 = *param_2;
  *(undefined2 *)(puVar15 + 3) = uVar5;
  puVar15[1] = uVar4;
  puVar15[2] = uVar12;
  lVar10 = lVar10 + lVar9 * 8;
  *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x40) = param_2[8];
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined4 *)(lVar10 + 0x50) = 0;
  *(undefined8 *)(lVar10 + 0x28) = param_2[5];
  *(undefined8 *)(lVar10 + 0x30) = param_2[6];
  *(undefined8 *)(lVar10 + 0x38) = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  *(undefined8 *)(lVar10 + 0x58) = param_2[0xb];
  *(undefined8 *)(lVar10 + 0x60) = param_2[0xc];
  *(undefined8 *)(lVar10 + 0x68) = param_2[0xd];
  *(undefined8 *)(lVar10 + 0x70) = param_2[0xe];
  *(undefined8 *)(lVar10 + 0x78) = 0;
  *(undefined4 *)(lVar10 + 0x80) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xb] = 0;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  local_68 = local_68 + 0x11;
  FUN_011b7d70(param_1,&local_78);
  puVar15 = local_70;
  while (puVar6 = local_68, local_68 != puVar15) {
    plVar3 = local_68 + -6;
    puVar7 = local_68 + -0x11;
    if (*plVar3 != 0) {
      plVar1 = local_68 + -4;
      puVar7 = local_68 + -3;
      local_68 = local_68 + -0x11;
      (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,*plVar3,*plVar1 << 3,1);
      puVar7 = local_68;
    }
    local_68 = puVar7;
    lVar9 = puVar6[-0xc];
    if (lVar9 != 0) {
      puVar6[-0xb] = lVar9;
      (**(code **)(*(long *)puVar6[-9] + 0x18))((long *)puVar6[-9],lVar9,puVar6[-10] - lVar9,1);
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,8);
  }
  return;
}


