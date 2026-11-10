/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00720d70; name: FUN_00720d70
 */


void FUN_00720d70(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_02710860;
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 3) * 0x6db6db6db6db6db7)) {
    puVar10 = (undefined8 *)param_1[1];
    do {
      lVar3 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar10 = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
         (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
        lVar3 = FUN_0075ecb0();
      }
      puVar10[3] = lVar3;
      puVar10[4] = 0;
      param_2 = param_2 - 1;
      *(undefined4 *)(puVar10 + 5) = 0;
      *(undefined4 *)(puVar10 + 6) = 0;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar10 = (undefined8 *)(param_1[1] + 0x38);
      param_1[1] = (long)puVar10;
    } while (param_2 != 0);
    return;
  }
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar11 = 0x492492492492492;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + param_2;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar3 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar4 = lVar3 * -0x2492492492492492;
    uVar11 = uVar1;
    if (uVar1 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 == 0) {
      lVar3 = 0;
      goto LAB_00720e84;
    }
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x38,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00720e84:
  puVar2 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)(lVar3 + lVar6 * 8);
  puVar10 = puVar9;
  do {
    lVar12 = param_1[3];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00721050;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar10 = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
       (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
      lVar12 = FUN_0075ecb0();
    }
    puVar10[3] = lVar12;
    puVar10[4] = 0;
    param_2 = param_2 - 1;
    *(undefined4 *)(puVar10 + 5) = 0;
    *(undefined4 *)(puVar10 + 6) = 0;
    puVar10 = puVar10 + 7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  } while (param_2 != 0);
  plVar5 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  if (plVar7 == plVar5) {
    plVar7 = plVar5;
  }
  else {
    lVar6 = 0;
    do {
      lVar13 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00721050:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      FUN_00721130((long)puVar9 + lVar6 + -0x38,(long)plVar7 + lVar6 + -0x38);
      *(undefined4 *)((long)puVar9 + lVar6 + -8) = *(undefined4 *)((long)plVar7 + lVar6 + -8);
      lVar6 = lVar6 + -0x38;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    } while ((long)plVar5 - (long)plVar7 != lVar6);
    plVar5 = (long *)param_1[1];
    puVar9 = (undefined8 *)((long)puVar9 + lVar6);
    plVar7 = (long *)*param_1;
  }
  lVar6 = param_1[2];
  param_1[2] = lVar3 + uVar11 * 0x38;
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar10;
  if (plVar5 != plVar7) {
    do {
      plVar8 = plVar5 + -7;
      lVar3 = *plVar8;
      if (lVar3 != 0) {
        plVar5[-6] = lVar3;
        (**(code **)(*(long *)plVar5[-4] + 0x18))((long *)plVar5[-4],lVar3,plVar5[-5] - lVar3,4);
      }
      plVar5 = plVar8;
    } while (plVar7 != plVar8);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar6 - (long)plVar7,8);
  return;
}


