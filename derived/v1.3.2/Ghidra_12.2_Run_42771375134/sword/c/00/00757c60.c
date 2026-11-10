/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00757c60; name: FUN_00757c60
 */


void FUN_00757c60(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar7 = param_1[1] - *param_1 >> 6;
  uVar11 = 0x92492492492492;
  uVar1 = lVar7 * 0x6db6db6db6db6db7 + 1;
  if (0x92492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 6;
  plVar2 = param_1 + 3;
  local_58 = plVar2;
  if ((ulong)(lVar9 * 0x6db6db6db6db6db7) < 0x49249249249249) {
    uVar10 = lVar9 * -0x2492492492492492;
    uVar11 = uVar1;
    if (uVar1 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
      goto LAB_00757d50;
    }
  }
  local_60 = 0;
  lVar9 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar11 * 0x1c0,0x10);
  if (lVar9 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00757d50:
  puVar13 = (undefined8 *)(lVar9 + lVar7 * 0x40);
  local_60 = lVar9 + uVar11 * 0x1c0;
  lVar12 = *plVar2;
  local_78 = lVar9;
  local_70 = puVar13;
  local_68 = puVar13;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  *puVar13 = *param_2;
  lVar8 = lVar9 + lVar7 * 0x40;
  *(undefined8 *)(lVar8 + 8) = param_2[1];
  *(undefined8 *)(lVar8 + 0x10) = param_2[2];
  lVar12 = param_2[3];
  *(long *)(lVar8 + 0x18) = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar8 = lVar9 + lVar7 * 0x40;
  *(undefined8 *)(lVar8 + 0x20) = param_2[4];
  *(undefined8 *)(lVar8 + 0x28) = param_2[5];
  *(undefined8 *)(lVar8 + 0x30) = param_2[6];
  lVar12 = param_2[7];
  *(long *)(lVar8 + 0x38) = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar8 = lVar9 + lVar7 * 0x40;
  *(undefined8 *)(lVar8 + 0x48) = param_2[9];
  *(undefined8 *)(lVar8 + 0x40) = param_2[8];
  *(undefined8 *)(lVar8 + 0x58) = param_2[0xb];
  *(undefined8 *)(lVar8 + 0x50) = param_2[10];
  *(undefined8 *)(lVar8 + 0x68) = param_2[0xd];
  *(undefined8 *)(lVar8 + 0x60) = param_2[0xc];
  *(undefined8 *)(lVar8 + 0x78) = param_2[0xf];
  *(undefined8 *)(lVar8 + 0x70) = param_2[0xe];
  FUN_00754a00(lVar8 + 0x80,param_2 + 0x10);
  *(long *)(lVar8 + 0xb0) = (long)(PTR_DAT_02715af8 + 0x10);
  lVar12 = param_2[0x17];
  *(long *)(lVar8 + 0xb8) = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar12 = lVar9 + lVar7 * 0x40;
  *(undefined8 *)(lVar12 + 0xc0) = 0;
  *(undefined8 *)(lVar12 + 0xd0) = 0;
  *(undefined8 *)(lVar12 + 0xd8) = 0;
  *(undefined8 *)(lVar12 + 200) = 0;
  if ((code *)param_2[0x1a] != (code *)0x0) {
    (*(code *)param_2[0x1a])(param_2 + 0x1c,lVar9 + lVar7 * 0x40 + 0xe0);
    uVar3 = param_2[0x18];
    uVar4 = param_2[0x19];
    uVar5 = param_2[0x1b];
    *(undefined8 *)(lVar12 + 0xd0) = param_2[0x1a];
    *(undefined8 *)(lVar12 + 0xd8) = uVar5;
    *(undefined8 *)(lVar12 + 0xc0) = uVar3;
    *(undefined8 *)(lVar12 + 200) = uVar4;
  }
  lVar12 = lVar9 + lVar7 * 0x40;
  *(undefined8 *)(lVar12 + 0x150) = 0;
  *(undefined8 *)(lVar12 + 0x158) = 0;
  *(undefined8 *)(lVar12 + 0x140) = 0;
  *(undefined8 *)(lVar12 + 0x148) = 0;
  if ((code *)param_2[0x2a] != (code *)0x0) {
    (*(code *)param_2[0x2a])(param_2 + 0x2c,lVar9 + lVar7 * 0x40 + 0x160);
    uVar3 = param_2[0x28];
    uVar4 = param_2[0x29];
    uVar5 = param_2[0x2b];
    *(undefined8 *)(lVar12 + 0x150) = param_2[0x2a];
    *(undefined8 *)(lVar12 + 0x158) = uVar5;
    *(undefined8 *)(lVar12 + 0x140) = uVar3;
    *(undefined8 *)(lVar12 + 0x148) = uVar4;
  }
  *(long *)(lVar8 + 0xb0) = (long)(PTR_DAT_02715b00 + 0x10);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  local_68 = local_68 + 0x38;
  FUN_007572f0(param_1,&local_78);
  puVar13 = local_70;
  while (local_68 != puVar13) {
    local_68 = local_68 + -0x38;
    FUN_00756e00(local_58);
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,0x10);
  }
  return;
}


