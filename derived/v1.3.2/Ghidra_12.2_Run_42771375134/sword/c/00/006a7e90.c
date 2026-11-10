/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a7e90; name: FUN_006a7e90
 */


void FUN_006a7e90(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar9 = 0x2e8ba2e8ba2e8ba;
  uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  plVar2 = param_1 + 3;
  local_58 = plVar2;
  if ((ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
    uVar8 = lVar7 * 0x5d1745d1745d1746;
    uVar9 = uVar1;
    if (uVar1 <= uVar8) {
      uVar9 = uVar8;
    }
    if (uVar9 == 0) {
      lVar7 = 0;
      goto LAB_006a7f7c;
    }
  }
  local_60 = 0;
  lVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar9 * 0x58,8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_006a7f7c:
  puVar11 = (undefined8 *)(lVar7 + lVar5 * 8);
  local_60 = lVar7 + uVar9 * 0x58;
  lVar10 = *plVar2;
  local_78 = lVar7;
  local_70 = puVar11;
  local_68 = puVar11;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  lVar7 = lVar7 + lVar5 * 8;
  puVar11[7] = 0;
  puVar11[8] = 0;
  *puVar11 = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar7 + 0x18) = &DAT_01d38550;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar7 + 0x38) = &DAT_01d38550;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  local_68 = local_68 + 0xb;
  FUN_006a7980(param_1,&local_78);
  puVar11 = local_70;
  while (puVar3 = local_68, local_68 != puVar11) {
    puVar6 = local_68 + -0xb;
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


