/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00754e40; name: FUN_00754e40
 */


void FUN_00754e40(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar9 = 0x1745d1745d1745d;
  uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x1745d1745d1745d < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  plStack_68 = plVar2;
  if ((ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3) < 0xba2e8ba2e8ba2e) {
    uVar8 = lVar7 * 0x5d1745d1745d1746;
    uVar9 = uVar1;
    if (uVar1 <= uVar8) {
      uVar9 = uVar8;
    }
    if (uVar9 == 0) {
      lVar7 = 0;
      goto LAB_00754f34;
    }
  }
  local_70 = 0;
  lVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar9 * 0xb0,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00754f34:
  puVar3 = PTR_DAT_02710860;
  puVar10 = (undefined8 *)(lVar7 + lVar5 * 0x10);
  local_70 = lVar7 + uVar9 * 0xb0;
  lVar11 = *plVar2;
  local_88 = lVar7;
  local_80 = puVar10;
  local_78 = puVar10;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_007550a0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar6 = *param_2;
  *puVar10 = 0xcbf29ce484222645;
  lVar7 = lVar7 + lVar5 * 0x10;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined4 *)(lVar7 + 0x50) = 0;
  *(undefined1 **)(lVar7 + 8) = &DAT_01d38550;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  *(undefined4 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined8 *)(lVar7 + 0x68) = 0;
  *(undefined8 *)(lVar7 + 0x70) = uVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  local_78 = local_78 + 0x16;
  lVar5 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 != lVar5) {
    do {
      puVar10 = local_80;
      lVar11 = *plVar2;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007550a0;
      lVar7 = lVar7 + -0xb0;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_007548c0(puVar10 + -0x16,lVar7);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      local_80 = local_80 + -0x16;
    } while (lVar5 != lVar7);
    lVar5 = *param_1;
    lVar7 = param_1[1];
  }
  *param_1 = (long)local_80;
  param_1[1] = (long)local_78;
  lVar4 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar5;
  local_80 = (undefined8 *)lVar5;
  local_78 = (undefined8 *)lVar7;
  local_70 = lVar4;
  FUN_007550b0(&local_88);
  return;
}


