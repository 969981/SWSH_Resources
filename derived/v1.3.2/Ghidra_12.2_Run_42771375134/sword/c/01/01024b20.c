/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01024b20; name: FUN_01024b20
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01024b20(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  lVar5 = param_1[1] - *param_1 >> 6;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  plVar7 = param_1 + 3;
  local_68 = plVar7;
  if ((ulong)(lVar3 >> 6) < 0x1ffffffffffffff) {
    uVar4 = lVar3 >> 5;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      local_88 = 0;
      goto LAB_01024be8;
    }
  }
  else {
    uVar6 = 0x3ffffffffffffff;
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar6 << 6,8);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar7 + 0xb8))();
  }
LAB_01024be8:
  puVar1 = (undefined8 *)(local_88 + lVar5 * 0x40);
  local_70 = local_88 + uVar6 * 0x40;
  lVar3 = *plVar7;
  local_80 = puVar1;
  local_78 = puVar1;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar3;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *puVar1 = *param_2;
  puVar8 = puVar1 + 6;
  *(undefined4 *)puVar8 = 0;
  plVar7 = puVar1 + 1;
  *plVar7 = 0;
  puVar1[2] = 0xcbf29ce484222645;
  puVar1[3] = &DAT_01d38550;
  puVar1[4] = 0;
  plVar9 = puVar1 + 5;
  *plVar9 = 0;
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  lVar3 = param_2[5];
  if (lVar3 == 0) {
    *plVar9 = 0;
    *(undefined4 *)puVar8 = *(undefined4 *)(param_2 + 6);
    lVar3 = param_2[4];
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *plVar9;
    *plVar9 = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined4 *)puVar8 = *(undefined4 *)(param_2 + 6);
    lVar3 = param_2[4];
  }
  if (lVar3 == 0) {
    *plVar7 = param_2[1];
  }
  else {
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *plVar7;
    *plVar7 = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  puVar1[7] = param_2[7];
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_78 = local_78 + 8;
  FUN_01024960(param_1,&local_88);
  puVar8 = local_80;
  puVar1 = local_78;
  while (puVar1 != puVar8) {
    local_78 = puVar1 + -8;
    if ((puVar1[-4] != 0) && (puVar1[-7] != 0)) {
      (**(code **)(*(long *)(puVar1[-7] + 0x48) + 0x18))();
      puVar1[-7] = 0;
    }
    puVar1[-7] = 0;
    puVar1[-6] = 0xcbf29ce484222645;
    puVar1[-5] = &DAT_01d38550;
    puVar1[-4] = 0;
    if (puVar1[-3] != 0) {
      (**(code **)(*(long *)(puVar1[-3] + 0x48) + 0x18))();
      puVar1[-3] = 0;
    }
    puVar1[-3] = 0;
    *(undefined4 *)(puVar1 + -2) = 0;
    puVar1 = local_78;
  }
  if (local_88 != 0) {
    local_78 = puVar1;
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
  }
  return;
}


