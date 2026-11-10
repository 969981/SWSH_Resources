/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00750b10; name: FUN_00750b10
 */


void FUN_00750b10(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar9 = 0x8d3dcb08d3dcb0;
  uVar1 = lVar6 * 0x34f72c234f72c235 + 1;
  if (0x8d3dcb08d3dcb0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 4;
  plVar12 = param_1 + 3;
  plStack_58 = plVar12;
  if ((ulong)(lVar7 * 0x34f72c234f72c235) < 0x469ee58469ee58) {
    uVar8 = lVar7 * 0x69ee58469ee5846a;
    uVar9 = uVar1;
    if (uVar1 <= uVar8) {
      uVar9 = uVar8;
    }
    if (uVar9 == 0) {
      lVar7 = 0;
      goto LAB_00750bf0;
    }
  }
  local_60 = 0;
  lVar7 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar9 * 0x1d0,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar12 + 0xb8))();
  }
LAB_00750bf0:
  puVar13 = (undefined8 *)(lVar7 + lVar6 * 0x10);
  local_60 = lVar7 + uVar9 * 0x1d0;
  lVar10 = *plVar12;
  local_78 = lVar7;
  puStack_70 = puVar13;
  local_68 = puVar13;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *puVar13 = *param_2;
  lVar10 = param_2[1];
  *(long *)(lVar7 + lVar6 * 0x10 + 8) = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = lVar7 + lVar6 * 0x10;
  plVar12 = (long *)(lVar11 + 0x10);
  *plVar12 = (long)(PTR_DAT_02710a48 + 0x10);
  lVar10 = param_2[3];
  *(long *)(lVar11 + 0x18) = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar10 = lVar7 + lVar6 * 0x10;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2 + 8,lVar7 + lVar6 * 0x10 + 0x40);
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[7];
    *(undefined8 *)(lVar10 + 0x30) = param_2[6];
    *(undefined8 *)(lVar10 + 0x38) = uVar4;
    *(undefined8 *)(lVar10 + 0x20) = uVar2;
    *(undefined8 *)(lVar10 + 0x28) = uVar3;
  }
  lVar10 = lVar7 + lVar6 * 0x10;
  *(undefined8 *)(lVar10 + 0xa0) = 0;
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  if ((code *)param_2[0x16] != (code *)0x0) {
    (*(code *)param_2[0x16])(param_2 + 0x18,lVar7 + lVar6 * 0x10 + 0xc0);
    uVar2 = param_2[0x14];
    uVar3 = param_2[0x15];
    uVar4 = param_2[0x17];
    *(undefined8 *)(lVar10 + 0xb0) = param_2[0x16];
    *(undefined8 *)(lVar10 + 0xb8) = uVar4;
    *(undefined8 *)(lVar10 + 0xa0) = uVar2;
    *(undefined8 *)(lVar10 + 0xa8) = uVar3;
  }
  *plVar12 = (long)(PTR_DAT_02715e08 + 0x10);
  lVar10 = lVar7 + lVar6 * 0x10;
  *(undefined4 *)(lVar10 + 0x120) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(lVar10 + 0x140) = 0;
  *(undefined8 *)(lVar10 + 0x148) = 0;
  *(undefined8 *)(lVar10 + 0x130) = 0;
  *(undefined8 *)(lVar10 + 0x138) = 0;
  if ((code *)param_2[0x28] != (code *)0x0) {
    (*(code *)param_2[0x28])(param_2 + 0x2a,lVar7 + lVar6 * 0x10 + 0x150);
    uVar2 = param_2[0x26];
    uVar3 = param_2[0x27];
    uVar4 = param_2[0x29];
    *(undefined8 *)(lVar10 + 0x140) = param_2[0x28];
    *(undefined8 *)(lVar10 + 0x148) = uVar4;
    *(undefined8 *)(lVar10 + 0x130) = uVar2;
    *(undefined8 *)(lVar10 + 0x138) = uVar3;
  }
  lVar7 = lVar7 + lVar6 * 0x10;
  uVar2 = param_2[0x36];
  uVar3 = param_2[0x37];
  *(undefined1 *)(lVar7 + 0x1c0) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(lVar7 + 0x1b0) = uVar2;
  *(undefined8 *)(lVar7 + 0x1b8) = uVar3;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_68 = local_68 + 0x3a;
  FUN_00750de0(param_1,&local_78);
  FUN_00751070(&local_78);
  return;
}


