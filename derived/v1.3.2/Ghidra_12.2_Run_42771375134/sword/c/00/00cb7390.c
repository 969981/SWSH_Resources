/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb7390; name: FUN_00cb7390
 */


void FUN_00cb7390(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar7 = 0x555555555555555;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  local_68 = plVar2;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
      goto LAB_00cb746c;
    }
  }
  local_70 = 0;
  lVar5 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar7 * 0x30,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00cb746c:
  plVar9 = (long *)(lVar5 + lVar4 * 0x10);
  local_70 = lVar5 + uVar7 * 0x30;
  lVar10 = *plVar2;
  local_88 = lVar5;
  local_80 = plVar9;
  local_78 = plVar9;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar5 = lVar5 + lVar4 * 0x10;
  *(undefined8 *)(lVar5 + 8) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar5 + 0x10) = &DAT_01d38550;
  *plVar9 = 0;
  *(undefined4 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(long *)(lVar5 + 8) = param_2[1];
  *(long *)(lVar5 + 0x10) = param_2[2];
  *(long *)(lVar5 + 0x18) = param_2[3];
  lVar4 = param_2[4];
  param_2[4] = 0;
  *(long *)(lVar5 + 0x20) = lVar4;
  *(int *)(lVar5 + 0x28) = (int)param_2[5];
  if (*(long *)(lVar5 + 0x18) == 0) {
    lVar4 = *param_2;
  }
  else {
    if (*plVar9 != 0) {
      (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    lVar4 = *param_2;
    *param_2 = 0;
  }
  *plVar9 = lVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_78 = local_78 + 6;
  FUN_00cb7630(param_1,&local_88);
  plVar9 = local_80;
  plVar2 = local_78;
  while (plVar2 != plVar9) {
    plVar8 = plVar2 + -6;
    local_78 = plVar8;
    if ((plVar2[-3] != 0) && (*plVar8 != 0)) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
    }
    plVar2[-6] = 0;
    plVar2[-5] = -0x340d631b7bddd9bb;
    plVar2[-4] = (long)&DAT_01d38550;
    plVar2[-3] = 0;
    if (plVar2[-2] != 0) {
      (**(code **)(*(long *)(plVar2[-2] + 0x48) + 0x18))();
      plVar2[-2] = 0;
    }
    plVar2[-2] = 0;
    *(undefined4 *)(plVar2 + -1) = 0;
    plVar2 = local_78;
  }
  if (local_88 != 0) {
    local_78 = plVar2;
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
  }
  return;
}


