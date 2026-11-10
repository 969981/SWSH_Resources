/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013190b0; name: FUN_013190b0
 */


void FUN_013190b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar10 = 0x555555555555555;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto LAB_01319170;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0x30,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01319170:
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_013192c4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  puVar11 = (undefined8 *)(lVar6 + lVar4 * 0x10);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar11[1] = param_2[1];
  *puVar11 = *param_2;
  uVar5 = param_2[3];
  puVar11[5] = param_2[5];
  uVar8 = param_2[2];
  uVar9 = param_2[4];
  puVar11[3] = uVar5;
  puVar11[4] = uVar9;
  puVar11[2] = uVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar4 = *param_1;
  lVar3 = param_1[1];
  puVar13 = puVar11;
  puVar14 = puVar11;
  if (lVar3 != lVar4) {
    do {
      lVar15 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_013192c4;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      uVar5 = *(undefined8 *)(lVar3 + -0x28);
      puVar14 = puVar13 + -6;
      *puVar14 = *(undefined8 *)(lVar3 + -0x30);
      puVar13[-5] = uVar5;
      uVar5 = *(undefined8 *)(lVar3 + -0x18);
      puVar13[-1] = *(undefined8 *)(lVar3 + -8);
      uVar8 = *(undefined8 *)(lVar3 + -0x20);
      uVar9 = *(undefined8 *)(lVar3 + -0x10);
      puVar13[-3] = uVar5;
      puVar13[-2] = uVar9;
      puVar13[-4] = uVar8;
      lVar3 = lVar3 + -0x30;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar13 = puVar14;
    } while (lVar4 != lVar3);
    lVar4 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)(puVar11 + 6);
  lVar3 = param_1[2];
  param_1[2] = lVar6 + uVar10 * 0x30;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013192a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar3 - lVar4,0x10);
  return;
}


