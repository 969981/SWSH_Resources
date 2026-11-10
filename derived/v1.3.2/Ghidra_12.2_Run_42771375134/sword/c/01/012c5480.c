/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c5480; name: FUN_012c5480
 */


void FUN_012c5480(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar7 = lVar9 + 1;
  if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 5) < 0x3ffffffffffffff) {
    uVar6 = lVar5 >> 4;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
      goto LAB_012c5524;
    }
  }
  else {
    uVar7 = 0x7ffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 5,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_012c5524:
  puVar1 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_012c56d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar10 = (undefined8 *)(lVar5 + lVar9 * 0x20);
  puVar12 = puVar10 + 4;
  *puVar10 = *param_2;
  puVar10[1] = param_2[1];
  puVar10[2] = param_2[2];
  uVar4 = param_2[3];
  param_2[3] = 0;
  puVar10[3] = uVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar9 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar9) {
    lVar2 = lVar9;
  }
  else {
    lVar11 = 0;
    do {
      lVar8 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_012c56d0;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar8 = lVar2 + lVar11;
      *(undefined8 *)((long)puVar10 + lVar11 + -0x20) = *(undefined8 *)(lVar8 + -0x20);
      *(undefined8 *)((long)puVar10 + lVar11 + -0x18) = *(undefined8 *)(lVar8 + -0x18);
      *(undefined8 *)((long)puVar10 + lVar11 + -0x10) = *(undefined8 *)(lVar8 + -0x10);
      lVar8 = *(long *)(lVar8 + -8);
      *(long *)((long)puVar10 + lVar11 + -8) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar11 = lVar11 + -0x20;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar9 - lVar2 != lVar11);
    lVar9 = *param_1;
    puVar10 = (undefined8 *)((long)puVar10 + lVar11);
    lVar2 = param_1[1];
  }
  lVar11 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar12;
  param_1[2] = lVar5 + uVar7 * 0x20;
  while (lVar5 = lVar2, lVar5 != lVar9) {
    lVar2 = lVar5 + -0x20;
    if (*(long *)(lVar5 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + -8) = 0;
    }
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012c56ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar9,lVar11 - lVar9,8);
  return;
}


