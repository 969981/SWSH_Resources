/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136ef00; name: FUN_0136ef00
 */


void FUN_0136ef00(long *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar11 = 0x38e38e38e38e38e;
  uVar1 = lVar5 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  plVar2 = param_1 + 3;
  local_58 = plVar2;
  if ((ulong)(lVar7 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 == 0) {
      lVar7 = 0;
      goto LAB_0136eff0;
    }
  }
  local_60 = 0;
  lVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar11 * 0x48,8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_0136eff0:
  puVar13 = (undefined8 *)(lVar7 + lVar5 * 8);
  local_60 = lVar7 + uVar11 * 0x48;
  lVar12 = *plVar2;
  local_78 = lVar7;
  local_70 = puVar13;
  local_68 = puVar13;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar10 = param_2[2];
  uVar9 = param_2[1];
  *puVar13 = *param_2;
  puVar13[1] = uVar9;
  puVar13[2] = uVar10;
  lVar7 = lVar7 + lVar5 * 8;
  uVar9 = param_2[3];
  param_2[3] = 0;
  *(undefined8 *)(lVar7 + 0x18) = uVar9;
  uVar9 = param_2[4];
  param_2[4] = 0;
  *(undefined8 *)(lVar7 + 0x20) = uVar9;
  uVar9 = param_2[5];
  param_2[5] = 0;
  *(undefined8 *)(lVar7 + 0x28) = uVar9;
  uVar9 = param_2[6];
  param_2[6] = 0;
  *(undefined8 *)(lVar7 + 0x30) = uVar9;
  uVar9 = param_2[7];
  param_2[7] = 0;
  *(undefined8 *)(lVar7 + 0x38) = uVar9;
  *(undefined8 *)(lVar7 + 0x40) = param_2[8];
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  local_68 = local_68 + 9;
  FUN_0136e9f0(param_1,&local_78);
  puVar13 = local_70;
  while (puVar3 = local_68, local_68 != puVar13) {
    puVar6 = local_68 + -9;
    plVar2 = local_68 + -2;
    local_68 = puVar6;
    if (*plVar2 != 0) {
      (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
      puVar3[-2] = 0;
    }
    if (puVar3[-3] != 0) {
      (**(code **)(*(long *)(puVar3[-3] + 0x48) + 0x18))();
      puVar3[-3] = 0;
    }
    if (puVar3[-4] != 0) {
      (**(code **)(*(long *)(puVar3[-4] + 0x48) + 0x18))();
      puVar3[-4] = 0;
    }
    if (puVar3[-5] != 0) {
      (**(code **)(*(long *)(puVar3[-5] + 0x48) + 0x18))();
      puVar3[-5] = 0;
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


