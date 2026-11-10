/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007206d0; name: FUN_007206d0
 */


void FUN_007206d0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_02710860;
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 5) * -0x5555555555555555)) {
    puVar10 = (undefined8 *)param_1[1];
    do {
      lVar4 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
         (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
        lVar4 = FUN_0075ecb0();
      }
      puVar10[5] = lVar4;
      puVar10[6] = 0;
      param_2 = param_2 - 1;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar10 = (undefined8 *)(param_1[1] + 0x60);
      param_1[1] = (long)puVar10;
    } while (param_2 != 0);
    return;
  }
  lVar7 = param_1[1] - *param_1 >> 5;
  uVar11 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar7 * -0x5555555555555555 + param_2;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 5;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x155555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      lVar4 = 0;
      goto LAB_007207d0;
    }
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x60,0x10);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_007207d0:
  puVar2 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)(lVar4 + lVar7 * 0x20);
  puVar10 = puVar9;
  do {
    lVar12 = param_1[3];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_007209c8;
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
       (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
      lVar12 = FUN_0075ecb0();
    }
    puVar10[5] = lVar12;
    puVar10[6] = 0;
    param_2 = param_2 - 1;
    *(undefined4 *)(puVar10 + 7) = 0;
    puVar10 = puVar10 + 0xc;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  } while (param_2 != 0);
  lVar7 = *param_1;
  lVar12 = param_1[1];
  if (lVar12 == lVar7) {
    lVar12 = lVar7;
  }
  else {
    lVar8 = 0;
    do {
      lVar13 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007209c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      lVar13 = lVar12 + lVar8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar6 = *(undefined8 *)(lVar13 + -0x60);
      *(undefined4 *)((long)puVar9 + lVar8 + -0x58) = *(undefined4 *)(lVar13 + -0x58);
      *(undefined8 *)((long)puVar9 + lVar8 + -0x60) = uVar6;
      FUN_00720ab0((long)puVar9 + lVar8 + -0x50,lVar13 + -0x50);
      *(undefined8 *)((long)puVar9 + lVar8 + -0x18) = *(undefined8 *)(lVar13 + -0x18);
      *(undefined8 *)((long)puVar9 + lVar8 + -0x20) = *(undefined8 *)(lVar13 + -0x20);
      *(undefined8 *)((long)puVar9 + lVar8 + -8) = *(undefined8 *)(lVar13 + -8);
      *(undefined8 *)((long)puVar9 + lVar8 + -0x10) = *(undefined8 *)(lVar13 + -0x10);
      lVar8 = lVar8 + -0x60;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar7 - lVar12 != lVar8);
    lVar7 = param_1[1];
    puVar9 = (undefined8 *)((long)puVar9 + lVar8);
    lVar12 = *param_1;
  }
  lVar8 = param_1[2];
  param_1[2] = lVar4 + uVar11 * 0x60;
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar10;
  while (lVar4 = lVar7, lVar4 != lVar12) {
    lVar3 = *(long *)(lVar4 + -0x50);
    lVar7 = lVar4 + -0x60;
    if (lVar3 != 0) {
      *(long *)(lVar4 + -0x48) = lVar3;
      (**(code **)(**(long **)(lVar4 + -0x38) + 0x18))
                (*(long **)(lVar4 + -0x38),lVar3,*(long *)(lVar4 + -0x40) - lVar3,8);
    }
  }
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007209a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar12,lVar8 - lVar12,0x10);
  return;
}


