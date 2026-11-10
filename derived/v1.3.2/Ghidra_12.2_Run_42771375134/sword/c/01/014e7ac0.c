/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e7ac0; name: FUN_014e7ac0
 */


void FUN_014e7ac0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar10 = 0xbe82fa0be82fa0;
  uVar1 = lVar4 * -0x7d05f417d05f417d + 1;
  if (0xbe82fa0be82fa0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  plVar9 = param_1 + 3;
  local_58 = plVar9;
  if ((ulong)(lVar6 * -0x7d05f417d05f417d) < 0x5f417d05f417d0) {
    uVar7 = lVar6 * 0x5f417d05f417d06;
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto LAB_014e7bb0;
    }
  }
  local_60 = 0;
  lVar6 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar10 * 0x158,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)*plVar9 + 0xb8))();
  }
LAB_014e7bb0:
  puVar12 = (undefined8 *)(lVar6 + lVar4 * 8);
  local_60 = lVar6 + uVar10 * 0x158;
  lVar11 = *plVar9;
  local_78 = lVar6;
  local_70 = puVar12;
  local_68 = puVar12;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar12 = *param_2;
  lVar6 = lVar6 + lVar4 * 8;
  uVar8 = param_2[1];
  param_2[1] = 0;
  *(undefined8 *)(lVar6 + 8) = uVar8;
  *(undefined8 *)(lVar6 + 0x10) = param_2[2];
  uVar8 = param_2[3];
  param_2[3] = 0;
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  memcpy((void *)(lVar6 + 0x20),param_2 + 4,0x136);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_68 = local_68 + 0x2b;
  FUN_01604750(param_1,&local_78);
  puVar12 = local_70;
  while (puVar2 = local_68, local_68 != puVar12) {
    puVar5 = local_68 + -0x2b;
    plVar9 = local_68 + -0x28;
    lVar4 = *plVar9;
    local_68 = puVar5;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    lVar4 = puVar2[-0x2a];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      puVar2[-0x2a] = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,8);
  }
  return;
}


