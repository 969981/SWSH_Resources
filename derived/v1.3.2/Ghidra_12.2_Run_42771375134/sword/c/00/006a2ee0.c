/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a2ee0; name: FUN_006a2ee0
 */


void FUN_006a2ee0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  puVar2 = PTR_DAT_02710860;
  lVar8 = param_1[1];
  if (param_2 <= (ulong)((param_1[2] - lVar8 >> 4) * -0x5555555555555555)) {
    while( true ) {
      lVar14 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) break;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_0075e2a0(lVar8);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar8 = param_1[1] + 0x30;
      param_2 = param_2 - 1;
      param_1[1] = lVar8;
      if (param_2 == 0) {
        return;
      }
    }
LAB_006a3144:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = lVar8 - *param_1 >> 4;
  uVar11 = 0x555555555555555;
  uVar1 = lVar8 * -0x5555555555555555 + param_2;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      lVar4 = 0;
      goto LAB_006a3010;
    }
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x30,0x10);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006a3010:
  puVar2 = PTR_DAT_02710860;
  puVar12 = (undefined8 *)(lVar4 + lVar8 * 0x10);
  puVar10 = puVar12;
  do {
    lVar14 = param_1[3];
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006a3144;
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_0075e2a0(puVar10);
    puVar10 = puVar10 + 6;
    param_2 = param_2 - 1;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  } while (param_2 != 0);
  lVar8 = *param_1;
  lVar14 = param_1[1];
  puVar13 = puVar12;
  if (lVar14 != lVar8) {
    do {
      lVar15 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006a3144;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar15;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar6 = *(undefined8 *)(lVar14 + -0x28);
      puVar12 = puVar13 + -6;
      *puVar12 = *(undefined8 *)(lVar14 + -0x30);
      puVar13[-5] = uVar6;
      uVar6 = *(undefined8 *)(lVar14 + -0x18);
      puVar13[-1] = *(undefined8 *)(lVar14 + -8);
      uVar7 = *(undefined8 *)(lVar14 + -0x20);
      uVar9 = *(undefined8 *)(lVar14 + -0x10);
      puVar13[-3] = uVar6;
      puVar13[-2] = uVar9;
      puVar13[-4] = uVar7;
      lVar14 = lVar14 + -0x30;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar13 = puVar12;
    } while (lVar8 != lVar14);
    lVar8 = *param_1;
  }
  lVar14 = param_1[2];
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar10;
  param_1[2] = lVar4 + uVar11 * 0x30;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a3128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar14 - lVar8,0x10);
  return;
}


