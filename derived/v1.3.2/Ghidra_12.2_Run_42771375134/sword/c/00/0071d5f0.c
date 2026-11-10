/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071d5f0; name: FUN_0071d5f0
 */


void FUN_0071d5f0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  lVar8 = param_1[1] - *param_1 >> 6;
  uVar9 = lVar8 + 1;
  if (uVar9 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  plStack_68 = plVar1;
  if ((ulong)(lVar6 >> 6) < 0x1ffffffffffffff) {
    uVar7 = lVar6 >> 5;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 == 0) {
      local_88 = 0;
      goto LAB_0071d6ac;
    }
  }
  else {
    uVar9 = 0x3ffffffffffffff;
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar9 << 6,8);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_0071d6ac:
  puVar4 = PTR_DAT_02710860;
  puVar2 = (undefined8 *)(local_88 + lVar8 * 0x40);
  local_70 = local_88 + uVar9 * 0x40;
  lVar6 = *plVar1;
  local_80 = puVar2;
  local_78 = puVar2;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_0071d834:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar6;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  puVar2[4] = lVar6;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined2 *)((long)puVar2 + 0x39) = 0;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  local_78 = local_78 + 8;
  lVar8 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 != lVar8) {
    do {
      puVar2 = local_80;
      lVar10 = *plVar1;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0071d834;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar10 = *(long *)(lVar6 + -0x40);
      lVar11 = lVar6 + -0x40;
      puVar2[-8] = lVar10;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      FUN_0071d490(puVar2 + -7,lVar6 + -0x38);
      uVar3 = *(undefined2 *)(lVar6 + -8);
      *(undefined1 *)((long)puVar2 + -6) = *(undefined1 *)(lVar6 + -6);
      *(undefined2 *)(puVar2 + -1) = uVar3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      local_80 = local_80 + -8;
      lVar6 = lVar11;
    } while (lVar8 != lVar11);
    lVar8 = *param_1;
    lVar6 = param_1[1];
  }
  *param_1 = (long)local_80;
  param_1[1] = (long)local_78;
  lVar5 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar8;
  local_80 = (undefined8 *)lVar8;
  local_78 = (undefined8 *)lVar6;
  local_70 = lVar5;
  FUN_0071d360(&local_88);
  return;
}


