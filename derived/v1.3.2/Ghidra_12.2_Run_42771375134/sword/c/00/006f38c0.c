/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f38c0; name: FUN_006f38c0
 */


void FUN_006f38c0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  lVar6 = param_1[1] - *param_1 >> 5;
  uVar7 = lVar6 + 1;
  if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  local_48 = plVar1;
  if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
    uVar5 = lVar4 >> 4;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      local_68 = 0;
      goto LAB_006f3974;
    }
  }
  else {
    uVar7 = 0x7ffffffffffffff;
  }
  local_50 = 0;
  local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 << 5,8);
  if (local_68 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_006f3974:
  puVar2 = (undefined8 *)(local_68 + lVar6 * 0x20);
  local_50 = local_68 + uVar7 * 0x20;
  lVar4 = *plVar1;
  local_60 = puVar2;
  local_58 = puVar2;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  local_58 = local_58 + 4;
  FUN_006f3a70(param_1,&local_68);
  puVar2 = local_60;
  while (puVar3 = local_58, local_58 != puVar2) {
    local_58 = local_58 + -4;
    FUN_006f6820();
    lVar6 = puVar3[-3];
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      puVar3[-3] = 0;
    }
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)*local_48 + 0x18))((long *)*local_48,local_68,local_50 - local_68,8);
  }
  return;
}


