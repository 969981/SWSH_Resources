/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fdf90; name: FUN_014fdf90
 */


void FUN_014fdf90(long *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = param_1[1] - *param_1 >> 5;
  uVar10 = lVar11 + 1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  if ((ulong)(lVar6 >> 5) < 0x3ffffffffffffff) {
    uVar7 = lVar6 >> 4;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto LAB_014fe038;
    }
  }
  else {
    uVar10 = 0x7ffffffffffffff;
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 5,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_014fe038:
  puVar3 = PTR_DAT_02710860;
  lVar14 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_014fe15c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar5 = *param_3;
  uVar8 = *param_4;
  puVar13 = (undefined8 *)(lVar6 + lVar11 * 0x20);
  puVar9 = puVar13 + 4;
  *(undefined4 *)puVar13 = *param_2;
  puVar13[1] = uVar5;
  puVar13[2] = uVar8;
  puVar13[3] = uVar8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar11 = *param_1;
  lVar4 = param_1[1];
  puVar12 = puVar13;
  if (lVar4 != lVar11) {
    do {
      lVar15 = param_1[3];
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_014fe15c;
      *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar15;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      puVar1 = (undefined8 *)(lVar4 + -0x20);
      uVar8 = *(undefined8 *)(lVar4 + -0x18);
      uVar5 = *(undefined8 *)(lVar4 + -0x10);
      uVar2 = *(undefined8 *)(lVar4 + -8);
      lVar4 = lVar4 + -0x20;
      puVar13 = puVar12 + -4;
      *puVar13 = *puVar1;
      puVar12[-2] = uVar5;
      puVar12[-1] = uVar2;
      puVar12[-3] = uVar8;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      puVar12 = puVar13;
    } while (lVar11 != lVar4);
    lVar11 = *param_1;
  }
  lVar4 = param_1[2];
  param_1[2] = lVar6 + uVar10 * 0x20;
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar9;
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014fe13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar11,lVar4 - lVar11,8);
  return;
}


