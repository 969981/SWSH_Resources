/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01319450; name: FUN_01319450
 */


void FUN_01319450(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar12 = param_1[1] - *param_1 >> 6;
  uVar11 = lVar12 + 1;
  if (uVar11 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  if ((ulong)(lVar7 >> 6) < 0x1ffffffffffffff) {
    uVar8 = lVar7 >> 5;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 == 0) {
      lVar7 = 0;
      goto LAB_013194f0;
    }
  }
  else {
    uVar11 = 0x3ffffffffffffff;
  }
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 << 6,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_013194f0:
  puVar2 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_013196c8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = (undefined8 *)(lVar7 + lVar12 * 0x40);
  puVar1[1] = param_2[1];
  *puVar1 = *param_2;
  uVar5 = param_2[3];
  puVar1[5] = param_2[5];
  uVar9 = param_2[2];
  uVar10 = param_2[4];
  puVar1[3] = uVar5;
  puVar1[4] = uVar10;
  puVar1[2] = uVar9;
  lVar12 = param_2[6];
  puVar1[6] = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar12 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar12) {
    puVar6 = puVar1;
    lVar3 = lVar12;
  }
  else {
    lVar13 = 0;
    do {
      lVar14 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_013196c8;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar14 = lVar3 + lVar13;
      *(undefined8 *)((long)puVar1 + lVar13 + -0x38) = *(undefined8 *)(lVar14 + -0x38);
      *(undefined8 *)((long)puVar1 + lVar13 + -0x40) = *(undefined8 *)(lVar14 + -0x40);
      uVar5 = *(undefined8 *)(lVar14 + -0x28);
      *(undefined8 *)((long)puVar1 + lVar13 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
      uVar9 = *(undefined8 *)(lVar14 + -0x30);
      uVar10 = *(undefined8 *)(lVar14 + -0x20);
      *(undefined8 *)((long)puVar1 + lVar13 + -0x28) = uVar5;
      *(undefined8 *)((long)puVar1 + lVar13 + -0x20) = uVar10;
      *(undefined8 *)((long)puVar1 + lVar13 + -0x30) = uVar9;
      lVar14 = *(long *)(lVar14 + -0x10);
      *(long *)((long)puVar1 + lVar13 + -0x10) = lVar14;
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      lVar13 = lVar13 + -0x40;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar12 - lVar3 != lVar13);
    lVar12 = *param_1;
    puVar6 = (undefined8 *)((long)puVar1 + lVar13);
    lVar3 = param_1[1];
  }
  lVar13 = param_1[2];
  *param_1 = (long)puVar6;
  param_1[1] = (long)(puVar1 + 8);
  param_1[2] = lVar7 + uVar11 * 0x40;
  while (lVar7 = lVar3, lVar7 != lVar12) {
    lVar3 = lVar7 + -0x40;
    if (*(long *)(lVar7 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar7 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar7 + -0x10) = 0;
    }
  }
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013196a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar12,lVar13 - lVar12,0x10);
  return;
}


