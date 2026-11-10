/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007551a0; name: FUN_007551a0
 */


void FUN_007551a0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar10 = param_1[1] - *param_1 >> 6;
  uVar9 = lVar10 + 1;
  if (uVar9 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 6) < 0x1ffffffffffffff) {
    uVar6 = lVar5 >> 5;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
      goto LAB_00755240;
    }
  }
  else {
    uVar9 = 0x3ffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 6,0x10);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00755240:
  puVar2 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007553a4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x40);
  uVar4 = param_2[1];
  puVar1[3] = param_2[3];
  uVar7 = param_2[2];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar7;
  uVar4 = param_2[5];
  puVar1[7] = param_2[7];
  uVar7 = param_2[4];
  uVar8 = param_2[6];
  puVar1[5] = uVar4;
  puVar1[6] = uVar8;
  puVar1[4] = uVar7;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar10 = *param_1;
  lVar3 = param_1[1];
  puVar12 = puVar1;
  puVar13 = puVar1;
  if (lVar3 != lVar10) {
    do {
      lVar14 = param_1[3];
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_007553a4;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar14;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      uVar7 = *(undefined8 *)(lVar3 + -0x38);
      uVar4 = *(undefined8 *)(lVar3 + -0x30);
      uVar8 = *(undefined8 *)(lVar3 + -0x28);
      puVar13 = puVar12 + -8;
      *puVar13 = *(undefined8 *)(lVar3 + -0x40);
      puVar12[-6] = uVar4;
      puVar12[-5] = uVar8;
      puVar12[-7] = uVar7;
      uVar4 = *(undefined8 *)(lVar3 + -0x18);
      puVar12[-1] = *(undefined8 *)(lVar3 + -8);
      uVar7 = *(undefined8 *)(lVar3 + -0x10);
      puVar12[-4] = *(undefined8 *)(lVar3 + -0x20);
      puVar12[-3] = uVar4;
      puVar12[-2] = uVar7;
      lVar3 = lVar3 + -0x40;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      puVar12 = puVar13;
    } while (lVar10 != lVar3);
    lVar10 = *param_1;
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar1 + 8);
  lVar3 = param_1[2];
  param_1[2] = lVar5 + uVar9 * 0x40;
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00755384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar3 - lVar10,0x10);
  return;
}


