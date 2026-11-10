/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdf4a0; name: FUN_00bdf4a0
 */


void FUN_00bdf4a0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar9 = 0xaaaaaaaaaaaaaaa;
  uVar2 = lVar5 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  plVar3 = param_1 + 3;
  local_58 = plVar3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar9 = uVar2;
    if (uVar2 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
      goto LAB_00bdf578;
    }
  }
  local_60 = 0;
  lVar6 = (**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,uVar9 * 0x18,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)*plVar3 + 0xb8))();
  }
LAB_00bdf578:
  plVar11 = (long *)(lVar6 + lVar5 * 8);
  local_60 = lVar6 + uVar9 * 0x18;
  lVar10 = *plVar3;
  local_78 = lVar6;
  local_70 = plVar11;
  local_68 = plVar11;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar10 = *param_2;
  *plVar11 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar10 = param_2[1];
  *(long *)(lVar6 + lVar5 * 8 + 8) = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar10 = param_2[2];
  *(long *)(lVar6 + lVar5 * 8 + 0x10) = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  local_68 = local_68 + 3;
  FUN_00bdf700(param_1,&local_78);
  plVar3 = local_70;
  while (plVar11 = local_68, local_68 != plVar3) {
    plVar8 = local_68 + -3;
    plVar1 = local_68 + -1;
    local_68 = plVar8;
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      plVar11[-1] = 0;
    }
    if (plVar11[-2] != 0) {
      (**(code **)(*(long *)(plVar11[-2] + 0x48) + 0x18))();
      plVar11[-2] = 0;
    }
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,8);
  }
  return;
}


