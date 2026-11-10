/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df2480; name: FUN_00df2480
 */


void FUN_00df2480(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  uVar8 = param_1[5];
  lVar10 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  uVar7 = lVar6 >> 4;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if ((ulong)(lVar6 >> 5) < uVar8 >> 1) {
    uVar8 = uVar1;
  }
  if (uVar8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar8 << 5,8);
  }
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00df26c4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar11 = (undefined8 *)(lVar6 + lVar10 * 0x20);
  puVar13 = puVar11 + 4;
  *puVar11 = *param_2;
  puVar11[1] = param_2[1];
  puVar11[2] = param_2[2];
  uVar5 = param_2[3];
  param_2[3] = 0;
  puVar11[3] = uVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar10 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar10) {
    lVar3 = lVar10;
  }
  else {
    lVar12 = 0;
    do {
      lVar9 = param_1[4];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00df26c4;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar9 = lVar3 + lVar12;
      *(undefined8 *)((long)puVar11 + lVar12 + -0x20) = *(undefined8 *)(lVar9 + -0x20);
      *(undefined8 *)((long)puVar11 + lVar12 + -0x18) = *(undefined8 *)(lVar9 + -0x18);
      *(undefined8 *)((long)puVar11 + lVar12 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
      lVar9 = *(long *)(lVar9 + -8);
      *(long *)((long)puVar11 + lVar12 + -8) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar12 = lVar12 + -0x20;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar10 - lVar3 != lVar12);
    lVar10 = *param_1;
    puVar11 = (undefined8 *)((long)puVar11 + lVar12);
    lVar3 = param_1[1];
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar6 + uVar8 * 0x20;
  while (lVar6 = lVar3, lVar6 != lVar10) {
    lVar3 = lVar6 + -0x20;
    if (*(long *)(lVar6 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + -8) = 0;
    }
  }
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00df26a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar10,lVar12 - lVar10,8);
  return;
}


