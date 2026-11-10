/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00782060; name: FUN_00782060
 */


void FUN_00782060(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar10 = 0x333333333333333;
  uVar1 = lVar5 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  local_58 = plVar2;
  if ((ulong)(lVar7 * -0x3333333333333333) < 0x199999999999999) {
    uVar8 = lVar7 * -0x6666666666666666;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
      goto LAB_00782138;
    }
  }
  local_60 = 0;
  lVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar10 * 0x50,8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00782138:
  puVar12 = (undefined8 *)(lVar7 + lVar5 * 0x10);
  local_60 = lVar7 + uVar10 * 0x50;
  lVar11 = *plVar2;
  local_78 = lVar7;
  local_70 = puVar12;
  local_68 = puVar12;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  *puVar12 = *param_2;
  lVar7 = lVar7 + lVar5 * 0x10;
  *(undefined8 *)(lVar7 + 8) = param_2[1];
  *(undefined8 *)(lVar7 + 0x10) = param_2[2];
  *(undefined8 *)(lVar7 + 0x18) = param_2[3];
  uVar9 = param_2[4];
  param_2[4] = 0;
  *(undefined8 *)(lVar7 + 0x20) = uVar9;
  *(undefined8 *)(lVar7 + 0x28) = param_2[5];
  *(undefined8 *)(lVar7 + 0x30) = param_2[6];
  *(undefined8 *)(lVar7 + 0x38) = param_2[7];
  uVar9 = param_2[8];
  param_2[8] = 0;
  *(undefined8 *)(lVar7 + 0x40) = uVar9;
  *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(param_2 + 9);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  local_68 = local_68 + 10;
  FUN_00781f00(param_1,&local_78);
  puVar12 = local_70;
  while (puVar3 = local_68, local_68 != puVar12) {
    puVar6 = local_68 + -10;
    plVar2 = local_68 + -2;
    local_68 = puVar6;
    if (*plVar2 != 0) {
      (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
      puVar3[-2] = 0;
    }
    if (puVar3[-6] != 0) {
      (**(code **)(*(long *)(puVar3[-6] + 0x48) + 0x18))();
      puVar3[-6] = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,8);
  }
  return;
}


