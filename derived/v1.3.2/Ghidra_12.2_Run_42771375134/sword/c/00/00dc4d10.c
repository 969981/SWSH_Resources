/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc4d10; name: FUN_00dc4d10
 */


void FUN_00dc4d10(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar10 = 0xaaaaaaaaaaaaaaa;
  uVar2 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar7 * -0x5555555555555555) < 0x555555555555555) {
    uVar8 = lVar7 * 0x5555555555555556;
    uVar10 = uVar2;
    if (uVar2 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
      goto LAB_00dc4dd0;
    }
  }
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0x18,8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00dc4dd0:
  puVar4 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00dc4ef0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
  puVar11 = (undefined8 *)(lVar7 + lVar6 * 8);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  uVar3 = *param_2;
  uVar9 = param_2[2];
  puVar11[1] = param_2[1];
  puVar11[2] = uVar9;
  *puVar11 = uVar3;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar6 = *param_1;
  lVar5 = param_1[1];
  puVar13 = puVar11;
  puVar14 = puVar11;
  if (lVar5 != lVar6) {
    do {
      lVar15 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00dc4ef0;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      uVar9 = *(undefined8 *)(lVar5 + -8);
      puVar1 = (undefined8 *)(lVar5 + -0x18);
      uVar3 = *(undefined8 *)(lVar5 + -0x10);
      lVar5 = lVar5 + -0x18;
      puVar14 = puVar13 + -3;
      *puVar14 = *puVar1;
      puVar13[-2] = uVar3;
      puVar13[-1] = uVar9;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar13 = puVar14;
    } while (lVar6 != lVar5);
    lVar6 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)(puVar11 + 3);
  lVar5 = param_1[2];
  param_1[2] = lVar7 + uVar10 * 0x18;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dc4ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar5 - lVar6,8);
  return;
}


