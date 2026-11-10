/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1ec20; name: FUN_00e1ec20
 */


void FUN_00e1ec20(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar10 = 0x276276276276276;
  uVar1 = lVar6 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  plVar2 = param_1 + 3;
  local_68 = plVar2;
  if ((ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5) < 0x13b13b13b13b13b) {
    uVar8 = lVar7 * -0x6276276276276276;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
      goto LAB_00e1ed14;
    }
  }
  local_70 = 0;
  lVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar10 * 0x68,8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00e1ed14:
  puVar12 = (undefined8 *)(lVar7 + lVar6 * 8);
  local_70 = lVar7 + uVar10 * 0x68;
  lVar11 = *plVar2;
  local_88 = lVar7;
  local_80 = puVar12;
  local_78 = puVar12;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  uVar9 = param_2[1];
  *puVar12 = *param_2;
  puVar12[1] = uVar9;
  uVar3 = param_2[3];
  uVar9 = param_2[4];
  uVar4 = param_2[5];
  puVar12[2] = param_2[2];
  puVar12[3] = uVar3;
  puVar12[4] = uVar9;
  puVar12[5] = uVar4;
  lVar7 = lVar7 + lVar6 * 8;
  *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(param_2 + 6);
  *(undefined2 *)(lVar7 + 0x34) = *(undefined2 *)((long)param_2 + 0x34);
  *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)(lVar7 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined1 *)(lVar7 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
  *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(lVar7 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(param_2 + 9);
  uVar9 = param_2[10];
  *(undefined1 *)(lVar7 + 0x58) = *(undefined1 *)(param_2 + 0xb);
  *(undefined8 *)(lVar7 + 0x50) = uVar9;
  *(undefined8 *)(lVar7 + 0x60) = param_2[0xc];
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_78 = local_78 + 0xd;
  FUN_00e1cb30(param_1,&local_88);
  if (local_78 != local_80) {
    local_78 = local_78 +
               ((ulong)((long)local_78 + (-0x68 - (long)local_80)) / 0x68 ^ 0xffffffffffffffff) *
               0xd;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
  }
  return;
}


