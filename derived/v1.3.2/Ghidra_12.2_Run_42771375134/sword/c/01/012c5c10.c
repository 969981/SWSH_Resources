/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c5c10; name: FUN_012c5c10
 */


void FUN_012c5c10(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  lVar6 = param_1[1] - *param_1 >> 2;
  uVar10 = 0x1555555555555555;
  uVar2 = lVar6 * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 2;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar10 = uVar2;
    if (uVar2 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar10 == 0) {
      lVar8 = 0;
      goto LAB_012c5cd0;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0xc,4);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_012c5cd0:
  puVar4 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_012c5df0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
  puVar11 = (undefined8 *)(lVar8 + lVar6 * 4);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  uVar7 = *param_2;
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar11 = uVar7;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar6 = *param_1;
  lVar5 = param_1[1];
  puVar13 = puVar11;
  puVar14 = puVar11;
  if (lVar5 != lVar6) {
    do {
      lVar15 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_012c5df0;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar1 = (undefined8 *)(lVar5 + -0xc);
      uVar3 = *(undefined4 *)(lVar5 + -4);
      lVar5 = lVar5 + -0xc;
      puVar14 = (undefined8 *)((long)puVar13 + -0xc);
      *puVar14 = *puVar1;
      *(undefined4 *)((long)puVar13 + -4) = uVar3;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar13 = puVar14;
    } while (lVar6 != lVar5);
    lVar6 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)puVar11 + 0xc;
  lVar5 = param_1[2];
  param_1[2] = lVar8 + uVar10 * 0xc;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012c5dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar5 - lVar6,4);
  return;
}


