/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd3490; name: FUN_00dd3490
 */


void FUN_00dd3490(long *param_1,undefined8 *param_2)

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
  
  lVar4 = param_1[1] - *param_1 >> 2;
  uVar10 = 0x3c3c3c3c3c3c3c3;
  uVar1 = lVar4 * -0xf0f0f0f0f0f0f0f + 1;
  if (0x3c3c3c3c3c3c3c3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 2;
  if ((ulong)(lVar6 * -0xf0f0f0f0f0f0f0f) < 0x1e1e1e1e1e1e1e1) {
    uVar7 = lVar6 * -0x1e1e1e1e1e1e1e1e;
    uVar10 = uVar1;
    if (uVar1 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      goto LAB_00dd3550;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 * 0x44,4);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00dd3550:
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00dd36bc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  puVar11 = (undefined8 *)(lVar6 + lVar4 * 4);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar11 = *param_2;
  uVar5 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[4];
  puVar11[3] = param_2[3];
  puVar11[4] = uVar9;
  puVar11[1] = uVar5;
  puVar11[2] = uVar8;
  uVar9 = param_2[7];
  uVar5 = param_2[5];
  uVar8 = param_2[6];
  *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(param_2 + 8);
  puVar11[6] = uVar8;
  puVar11[7] = uVar9;
  puVar11[5] = uVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar4 = *param_1;
  lVar3 = param_1[1];
  puVar13 = puVar11;
  puVar14 = puVar11;
  if (lVar3 != lVar4) {
    do {
      lVar15 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00dd36bc;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar14 = (undefined8 *)((long)puVar13 + -0x44);
      *puVar14 = *(undefined8 *)(lVar3 + -0x44);
      uVar5 = *(undefined8 *)(lVar3 + -0x3c);
      uVar8 = *(undefined8 *)(lVar3 + -0x34);
      uVar9 = *(undefined8 *)(lVar3 + -0x24);
      *(undefined8 *)((long)puVar13 + -0x2c) = *(undefined8 *)(lVar3 + -0x2c);
      *(undefined8 *)((long)puVar13 + -0x24) = uVar9;
      *(undefined8 *)((long)puVar13 + -0x3c) = uVar5;
      *(undefined8 *)((long)puVar13 + -0x34) = uVar8;
      uVar5 = *(undefined8 *)(lVar3 + -0x1c);
      uVar8 = *(undefined8 *)(lVar3 + -0x14);
      uVar9 = *(undefined8 *)(lVar3 + -0xc);
      *(undefined4 *)((long)puVar13 + -4) = *(undefined4 *)(lVar3 + -4);
      *(undefined8 *)((long)puVar13 + -0x14) = uVar8;
      *(undefined8 *)((long)puVar13 + -0xc) = uVar9;
      *(undefined8 *)((long)puVar13 + -0x1c) = uVar5;
      lVar3 = lVar3 + -0x44;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar13 = puVar14;
    } while (lVar4 != lVar3);
    lVar4 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)puVar11 + 0x44;
  lVar3 = param_1[2];
  param_1[2] = lVar6 + uVar10 * 0x44;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dd369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar3 - lVar4,4);
  return;
}


