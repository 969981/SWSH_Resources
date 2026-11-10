/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734d80; name: FUN_00734d80
 */


void FUN_00734d80(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  lVar7 = param_1[1] - *param_1 >> 6;
  uVar8 = lVar7 + 1;
  if (uVar8 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  plVar2 = param_1 + 3;
  local_68 = plVar2;
  if ((ulong)(lVar4 >> 6) < 0x1ffffffffffffff) {
    uVar5 = lVar4 >> 5;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      local_88 = 0;
      goto LAB_00734e48;
    }
  }
  else {
    uVar8 = 0x3ffffffffffffff;
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar8 << 6,8);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00734e48:
  plVar3 = (long *)(local_88 + lVar7 * 0x40);
  local_70 = local_88 + uVar8 * 0x40;
  lVar4 = *plVar2;
  local_80 = plVar3;
  local_78 = plVar3;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar4;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  FUN_00723a70(plVar3,param_2,*param_3,*param_4);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  local_78 = local_78 + 8;
  FUN_00734f70(param_1,&local_88);
  plVar2 = local_80;
  while (plVar3 = local_78, local_78 != plVar2) {
    plVar6 = local_78 + -8;
    plVar1 = local_78 + -4;
    local_78 = plVar6;
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      plVar3[-4] = 0;
    }
    if (*plVar6 != 0) {
      (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
      *plVar6 = 0;
    }
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
  }
  return;
}


