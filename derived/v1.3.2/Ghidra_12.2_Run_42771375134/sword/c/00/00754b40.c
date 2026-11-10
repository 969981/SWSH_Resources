/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00754b40; name: FUN_00754b40
 */


void FUN_00754b40(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar8 = param_1[1] - *param_1 >> 7;
  uVar9 = lVar8 + 1;
  if (uVar9 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  local_58 = plVar1;
  if ((ulong)(lVar6 >> 7) < 0xffffffffffffff) {
    uVar7 = lVar6 >> 6;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 == 0) {
      local_78 = 0;
      goto LAB_00754bfc;
    }
  }
  else {
    uVar9 = 0x1ffffffffffffff;
  }
  local_60 = 0;
  local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar9 << 7,0x10);
  if (local_78 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_00754bfc:
  puVar2 = (undefined8 *)(local_78 + lVar8 * 0x80);
  local_60 = local_78 + uVar9 * 0x80;
  lVar6 = *plVar1;
  local_70 = puVar2;
  local_68 = puVar2;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar6;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  uVar5 = *param_2;
  *puVar2 = 0xcbf29ce484222645;
  puVar2[1] = &DAT_01d38550;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 8) = 1;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = uVar5;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  local_68 = local_68 + 0x10;
  FUN_00754630(param_1,&local_78);
  puVar2 = local_70;
  while (puVar3 = local_68, local_68 != puVar2) {
    puVar4 = local_68 + -7;
    local_68 = local_68 + -0x10;
    FUN_00754520(puVar4);
    lVar8 = puVar3[-0xd];
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      puVar3[-0xd] = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,0x10);
  }
  return;
}


