/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b2510; name: FUN_014b2510
 */


void FUN_014b2510(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar12 = 0x555555555555555;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar6) {
      uVar12 = uVar6;
    }
    if (uVar12 == 0) {
      lVar5 = 0;
      goto LAB_014b25d0;
    }
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x30,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_014b25d0:
  puVar2 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_014b2768:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  puVar13 = (undefined8 *)(lVar5 + lVar4 * 0x10);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  lVar4 = lVar5 + lVar4 * 0x10;
  *(undefined8 *)(lVar4 + 0x18) = param_2[3];
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  *puVar13 = *param_2;
  *(undefined8 *)(lVar4 + 8) = param_2[1];
  *(undefined8 *)(lVar4 + 0x10) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar8 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  puVar9 = puVar13;
  if (plVar7 == plVar8) {
    plVar7 = plVar8;
  }
  else {
    do {
      lVar3 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_014b2768;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar3;
      plVar7 = plVar7 + -6;
      puVar9 = puVar9 + -6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_014b2780(puVar9,plVar7);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (plVar8 != plVar7);
    plVar8 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
  }
  lVar4 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)(puVar13 + 6);
  param_1[2] = lVar5 + uVar12 * 0x30;
  if (plVar7 != plVar8) {
    do {
      plVar10 = plVar7 + -6;
      lVar5 = *plVar10;
      if (lVar5 != 0) {
        plVar7[-5] = lVar5;
        (**(code **)(*(long *)plVar7[-3] + 0x18))((long *)plVar7[-3],lVar5,plVar7[-4] - lVar5,4);
      }
      plVar7 = plVar10;
    } while (plVar8 != plVar10);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014b2748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar8,lVar4 - (long)plVar8,8);
  return;
}


