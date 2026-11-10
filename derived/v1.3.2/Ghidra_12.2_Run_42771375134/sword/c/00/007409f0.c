/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007409f0; name: FUN_007409f0
 */


void FUN_007409f0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar2 = PTR_DAT_02710860;
  puVar10 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar10 >> 3) * -0x5555555555555555)) {
    while( true ) {
      lVar5 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar7 + 0x80)) break;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar10 = 4;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar10 = (undefined8 *)(param_1[1] + 0x18);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar10;
      if (param_2 == 0) {
        return;
      }
    }
LAB_00740ce8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = (long)puVar10 - *param_1 >> 3;
  uVar11 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar7 * -0x5555555555555555 + param_2;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x555555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      lVar5 = 0;
      goto LAB_00740b28;
    }
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x18,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00740b28:
  puVar2 = PTR_DAT_02710860;
  puVar10 = (undefined8 *)(lVar5 + lVar7 * 8);
  puVar12 = puVar10;
  do {
    lVar8 = param_1[3];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00740ce8;
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    param_2 = param_2 - 1;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar13 = puVar12 + 3;
    *puVar12 = 4;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar12 = puVar13;
  } while (param_2 != 0);
  lVar7 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar7) {
    lVar8 = lVar7;
  }
  else {
    lVar14 = 0;
    do {
      lVar9 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00740ce8;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar9 = lVar8 + lVar14;
      *(undefined4 *)((long)puVar10 + lVar14 + -0x18) = *(undefined4 *)(lVar9 + -0x18);
      lVar4 = *(long *)(lVar9 + -0x10);
      *(long *)((long)puVar10 + lVar14 + -0x10) = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(lVar9 + -8);
      *(long *)((long)puVar10 + lVar14 + -8) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar14 = lVar14 + -0x18;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar7 - lVar8 != lVar14);
    lVar7 = *param_1;
    puVar10 = (undefined8 *)((long)puVar10 + lVar14);
    lVar8 = param_1[1];
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar13;
  lVar14 = param_1[2];
  param_1[2] = lVar5 + uVar11 * 0x18;
  while (lVar5 = lVar8, lVar5 != lVar7) {
    if (*(long *)(lVar5 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + -8) = 0;
    }
    lVar8 = lVar5 + -0x18;
    if (*(long *)(lVar5 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + -0x10) = 0;
    }
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00740cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar14 - lVar7,8);
  return;
}


