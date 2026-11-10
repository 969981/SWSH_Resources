/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072c770; name: FUN_0072c770
 */


void FUN_0072c770(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar7 >> 3) * -0x70a3d70a3d70a3d7)) {
    while( true ) {
      lVar4 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar6 + 0x80)) break;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      puVar7[0x15] = 0;
      puVar7[0x16] = 0;
      *puVar7 = 0;
      puVar7[0x13] = 0;
      puVar7[0x14] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_0072ca80(puVar7);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar7 = (undefined8 *)(param_1[1] + 200);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar7;
      if (param_2 == 0) {
        return;
      }
    }
LAB_0072ca6c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = (long)puVar7 - *param_1 >> 3;
  uVar9 = 0x147ae147ae147ae;
  uVar1 = lVar6 * -0x70a3d70a3d70a3d7 + param_2;
  if (0x147ae147ae147ae < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar4 * -0x70a3d70a3d70a3d7) < 0xa3d70a3d70a3d7) {
    uVar5 = lVar4 * 0x1eb851eb851eb852;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
      goto LAB_0072c8ec;
    }
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 * 200,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0072c8ec:
  puVar2 = PTR_DAT_02710860;
  puVar8 = (undefined8 *)(lVar4 + lVar6 * 8);
  puVar7 = puVar8;
  do {
    lVar10 = param_1[3];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0072ca6c;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    *puVar7 = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_0072ca80(puVar7);
    puVar7 = puVar7 + 0x19;
    param_2 = param_2 - 1;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  } while (param_2 != 0);
  lVar6 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 == lVar6) {
    lVar10 = lVar6;
  }
  else {
    do {
      lVar11 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0072ca6c;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      lVar10 = lVar10 + -200;
      puVar8 = puVar8 + -0x19;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_0072cb70(puVar8,lVar10);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar6 != lVar10);
    lVar6 = param_1[1];
    lVar10 = *param_1;
  }
  *param_1 = (long)puVar8;
  param_1[1] = (long)puVar7;
  lVar3 = param_1[2];
  param_1[2] = lVar4 + uVar9 * 200;
  while (lVar6 != lVar10) {
    lVar6 = lVar6 + -200;
    FUN_007279a0(lVar6);
  }
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072ca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar3 - lVar10,8);
  return;
}


