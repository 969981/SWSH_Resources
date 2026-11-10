/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133a950; name: FUN_0133a950
 */


void FUN_0133a950(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar9 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar9 = uVar1;
    if (uVar1 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
      goto LAB_0133aa10;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 * 0x18,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0133aa10:
  puVar2 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0133ab90:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  puVar13 = (undefined8 *)(lVar6 + lVar4 * 8);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  uVar5 = *param_2;
  *param_2 = 0;
  puVar14 = puVar13 + 3;
  *puVar13 = uVar5;
  lVar4 = lVar6 + lVar4 * 8;
  uVar5 = param_2[2];
  *(undefined8 *)(lVar4 + 8) = param_2[1];
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar8 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  if ((long *)param_1[1] == plVar8) {
    plVar10 = plVar8;
  }
  else {
    do {
      lVar3 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0133ab90;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar3 = plVar10[-3];
      plVar12 = plVar10 + -3;
      puVar13[-3] = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar3 = plVar10[-1];
      puVar13[-2] = plVar10[-2];
      puVar13[-1] = lVar3;
      puVar13 = puVar13 + -3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar10 = plVar12;
    } while (plVar8 != plVar12);
    plVar8 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  lVar4 = param_1[2];
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar14;
  param_1[2] = lVar6 + uVar9 * 0x18;
  if (plVar10 != plVar8) {
    do {
      plVar12 = plVar10 + -3;
      if (*plVar12 != 0) {
        (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
        plVar10[-3] = 0;
      }
      plVar10 = plVar12;
    } while (plVar8 != plVar12);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0133ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar8,lVar4 - (long)plVar8,8);
  return;
}


