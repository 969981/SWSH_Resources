/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00740520; name: FUN_00740520
 */


void FUN_00740520(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar10 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar10 = uVar1;
    if (uVar1 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar10 == 0) {
      lVar8 = 0;
      goto LAB_007405e4;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0x18,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_007405e4:
  puVar2 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007407e4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
  puVar12 = (undefined4 *)(lVar8 + lVar6 * 8);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar12 = *param_2;
  lVar13 = *(long *)(param_2 + 2);
  *(long *)(lVar8 + lVar6 * 8 + 8) = lVar13;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_2 + 4);
  *(long *)(lVar8 + lVar6 * 8 + 0x10) = lVar13;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar6) {
    puVar7 = puVar12;
    lVar3 = lVar6;
  }
  else {
    lVar13 = 0;
    do {
      lVar11 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007407e4;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar11 = lVar3 + lVar13;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x18) = *(undefined4 *)(lVar11 + -0x18);
      lVar5 = *(long *)(lVar11 + -0x10);
      *(long *)((long)puVar12 + lVar13 + -0x10) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar11 = *(long *)(lVar11 + -8);
      *(long *)((long)puVar12 + lVar13 + -8) = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar13 = lVar13 + -0x18;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar6 - lVar3 != lVar13);
    lVar6 = *param_1;
    puVar7 = (undefined4 *)((long)puVar12 + lVar13);
    lVar3 = param_1[1];
  }
  lVar13 = param_1[2];
  param_1[2] = lVar8 + uVar10 * 0x18;
  *param_1 = (long)puVar7;
  param_1[1] = (long)(puVar12 + 6);
  while (lVar8 = lVar3, lVar8 != lVar6) {
    if (*(long *)(lVar8 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -8) = 0;
    }
    lVar3 = lVar8 + -0x18;
    if (*(long *)(lVar8 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x10) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007407c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar13 - lVar6,8);
  return;
}


