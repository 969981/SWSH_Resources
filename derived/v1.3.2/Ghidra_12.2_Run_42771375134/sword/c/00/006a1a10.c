/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1a10; name: FUN_006a1a10
 */


void FUN_006a1a10(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar12 = 0x555555555555555;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar7 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar8 = lVar7 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 == 0) {
      lVar7 = 0;
      goto LAB_006a1ad4;
    }
  }
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x30,8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006a1ad4:
  puVar2 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_006a1cb8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
  puVar13 = (undefined8 *)(lVar7 + lVar6 * 0x10);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar14 = puVar13 + 6;
  *puVar13 = *param_2;
  lVar6 = lVar7 + lVar6 * 0x10;
  *(undefined8 *)(lVar6 + 8) = param_2[1];
  *(undefined8 *)(lVar6 + 0x10) = param_2[2];
  *(undefined8 *)(lVar6 + 0x18) = param_2[3];
  uVar9 = param_2[4];
  param_2[4] = 0;
  *(undefined8 *)(lVar6 + 0x20) = uVar9;
  *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(param_2 + 5);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar6) {
    lVar3 = lVar6;
  }
  else {
    lVar10 = 0;
    do {
      lVar11 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_006a1cb8;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar11 = lVar3 + lVar10;
      *(undefined8 *)((long)puVar13 + lVar10 + -0x30) = *(undefined8 *)(lVar11 + -0x30);
      *(undefined8 *)((long)puVar13 + lVar10 + -0x28) = *(undefined8 *)(lVar11 + -0x28);
      *(undefined8 *)((long)puVar13 + lVar10 + -0x20) = *(undefined8 *)(lVar11 + -0x20);
      *(undefined8 *)((long)puVar13 + lVar10 + -0x18) = *(undefined8 *)(lVar11 + -0x18);
      lVar5 = *(long *)(lVar11 + -0x10);
      *(long *)((long)puVar13 + lVar10 + -0x10) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined4 *)((long)puVar13 + lVar10 + -8) = *(undefined4 *)(lVar11 + -8);
      lVar10 = lVar10 + -0x30;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar6 - lVar3 != lVar10);
    lVar6 = *param_1;
    puVar13 = (undefined8 *)((long)puVar13 + lVar10);
    lVar3 = param_1[1];
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar14;
  lVar10 = param_1[2];
  param_1[2] = lVar7 + uVar12 * 0x30;
  while (lVar7 = lVar3, lVar7 != lVar6) {
    lVar3 = lVar7 + -0x30;
    if (*(long *)(lVar7 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar7 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar7 + -0x10) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a1c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar10 - lVar6,8);
  return;
}


