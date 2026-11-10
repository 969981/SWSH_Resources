/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069e3e0; name: FUN_0069e3e0
 */


void FUN_0069e3e0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar14 = 0xe38e38e38e38e3;
  uVar1 = lVar9 * -0x71c71c71c71c71c7 + 1;
  if (0xe38e38e38e38e3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = param_1[2] - *param_1 >> 5;
  plVar2 = param_1 + 3;
  local_58 = plVar2;
  if ((ulong)(lVar12 * -0x71c71c71c71c71c7) < 0x71c71c71c71c71) {
    uVar13 = lVar12 * 0x1c71c71c71c71c72;
    uVar14 = uVar1;
    if (uVar1 <= uVar13) {
      uVar14 = uVar13;
    }
    if (uVar14 == 0) {
      lVar12 = 0;
      goto LAB_0069e4d0;
    }
  }
  local_60 = 0;
  lVar12 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar14 * 0x120,0x10);
  if (lVar12 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_0069e4d0:
  puVar16 = (undefined8 *)(lVar12 + lVar9 * 0x20);
  local_60 = lVar12 + uVar14 * 0x120;
  lVar15 = *plVar2;
  local_78 = lVar12;
  local_70 = puVar16;
  local_68 = puVar16;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar15;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  *puVar16 = *param_2;
  lVar10 = lVar12 + lVar9 * 0x20;
  *(undefined8 *)(lVar10 + 8) = param_2[1];
  *(undefined8 *)(lVar10 + 0x10) = param_2[2];
  lVar15 = param_2[3];
  *(long *)(lVar10 + 0x18) = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar15 = lVar12 + lVar9 * 0x20;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined8 *)(lVar15 + 0x30) = 0;
  *(undefined8 *)(lVar15 + 0x38) = 0;
  *(undefined8 *)(lVar15 + 0x28) = 0;
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2 + 8,lVar12 + lVar9 * 0x20 + 0x40);
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    uVar5 = param_2[7];
    *(undefined8 *)(lVar15 + 0x30) = param_2[6];
    *(undefined8 *)(lVar15 + 0x38) = uVar5;
    *(undefined8 *)(lVar15 + 0x20) = uVar3;
    *(undefined8 *)(lVar15 + 0x28) = uVar4;
  }
  lVar15 = lVar12 + lVar9 * 0x20;
  *(undefined8 *)(lVar15 + 0xa0) = 0;
  *(undefined8 *)(lVar15 + 0xb0) = 0;
  *(undefined8 *)(lVar15 + 0xb8) = 0;
  *(undefined8 *)(lVar15 + 0xa8) = 0;
  if ((code *)param_2[0x16] != (code *)0x0) {
    (*(code *)param_2[0x16])(param_2 + 0x18,lVar12 + lVar9 * 0x20 + 0xc0);
    uVar3 = param_2[0x14];
    uVar4 = param_2[0x15];
    uVar5 = param_2[0x17];
    *(undefined8 *)(lVar15 + 0xb0) = param_2[0x16];
    *(undefined8 *)(lVar15 + 0xb8) = uVar5;
    *(undefined8 *)(lVar15 + 0xa0) = uVar3;
    *(undefined8 *)(lVar15 + 0xa8) = uVar4;
  }
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  local_68 = local_68 + 0x24;
  FUN_0069e6b0(param_1,&local_78);
  puVar16 = local_70;
  while (puVar6 = local_68, local_68 != puVar16) {
    pcVar11 = (code *)local_68[-0xf];
    puVar8 = local_68 + -0x24;
    if (pcVar11 != (code *)0x0) {
      puVar8 = local_68 + -0xc;
      local_68[-0xe] = 0;
      local_68[-0xd] = 0;
      local_68[-0x10] = 0;
      local_68[-0xf] = 0;
      local_68 = local_68 + -0x24;
      (*pcVar11)(puVar8);
      puVar8 = local_68;
    }
    local_68 = puVar8;
    pcVar11 = (code *)puVar6[-0x1f];
    if (pcVar11 != (code *)0x0) {
      puVar6[-0x1e] = 0;
      puVar6[-0x1d] = 0;
      puVar6[-0x20] = 0;
      puVar6[-0x1f] = 0;
      (*pcVar11)(puVar6 + -0x1c);
    }
    lVar9 = puVar6[-0x21];
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      puVar6[-0x21] = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,0x10);
  }
  return;
}


