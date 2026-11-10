/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd2720; name: FUN_00dd2720
 */


void FUN_00dd2720(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = param_1[1] - *param_1 >> 7;
  uVar15 = lVar14 + 1;
  if (uVar15 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 7) < 0xffffffffffffff) {
    uVar9 = lVar8 >> 6;
    if (uVar15 <= uVar9) {
      uVar15 = uVar9;
    }
    if (uVar15 == 0) {
      lVar8 = 0;
      goto LAB_00dd27c4;
    }
  }
  else {
    uVar15 = 0x1ffffffffffffff;
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar15 << 7,0x10);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00dd27c4:
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00dd2a24:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = (undefined8 *)(lVar8 + lVar14 * 0x80);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  lVar14 = param_2[3];
  puVar1[3] = lVar14;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  uVar6 = param_2[5];
  puVar1[7] = param_2[7];
  uVar10 = param_2[6];
  puVar1[4] = param_2[4];
  puVar1[5] = uVar6;
  puVar1[6] = uVar10;
  uVar6 = param_2[9];
  puVar1[0xb] = param_2[0xb];
  uVar10 = param_2[8];
  uVar11 = param_2[10];
  puVar1[9] = uVar6;
  puVar1[10] = uVar11;
  puVar1[8] = uVar10;
  puVar1[0xd] = param_2[0xd];
  puVar1[0xc] = param_2[0xc];
  uVar6 = param_2[0xf];
  puVar1[0xe] = param_2[0xe];
  puVar1[0xf] = uVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar14 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar14) {
    puVar7 = puVar1;
    lVar3 = lVar14;
  }
  else {
    lVar12 = 0;
    do {
      lVar13 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00dd2a24;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar13 = lVar3 + lVar12;
      *(undefined8 *)((long)puVar1 + lVar12 + -0x80) = *(undefined8 *)(lVar13 + -0x80);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x78) = *(undefined8 *)(lVar13 + -0x78);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x70) = *(undefined8 *)(lVar13 + -0x70);
      lVar5 = *(long *)(lVar13 + -0x68);
      *(long *)((long)puVar1 + lVar12 + -0x68) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar6 = *(undefined8 *)(lVar13 + -0x58);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x48) = *(undefined8 *)(lVar13 + -0x48);
      uVar10 = *(undefined8 *)(lVar13 + -0x50);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x60) = *(undefined8 *)(lVar13 + -0x60);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x58) = uVar6;
      *(undefined8 *)((long)puVar1 + lVar12 + -0x50) = uVar10;
      uVar6 = *(undefined8 *)(lVar13 + -0x38);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x28) = *(undefined8 *)(lVar13 + -0x28);
      uVar10 = *(undefined8 *)(lVar13 + -0x40);
      uVar11 = *(undefined8 *)(lVar13 + -0x30);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x38) = uVar6;
      *(undefined8 *)((long)puVar1 + lVar12 + -0x30) = uVar11;
      *(undefined8 *)((long)puVar1 + lVar12 + -0x40) = uVar10;
      *(undefined8 *)((long)puVar1 + lVar12 + -0x18) = *(undefined8 *)(lVar13 + -0x18);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x20) = *(undefined8 *)(lVar13 + -0x20);
      lVar5 = lVar12 + -0x80;
      uVar6 = *(undefined8 *)(lVar13 + -8);
      *(undefined8 *)((long)puVar1 + lVar12 + -0x10) = *(undefined8 *)(lVar13 + -0x10);
      *(undefined8 *)((long)puVar1 + lVar12 + -8) = uVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar12 = lVar5;
    } while (lVar14 - lVar3 != lVar5);
    lVar14 = *param_1;
    puVar7 = (undefined8 *)((long)puVar1 + lVar5);
    lVar3 = param_1[1];
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar7;
  param_1[1] = (long)(puVar1 + 0x10);
  param_1[2] = lVar8 + uVar15 * 0x80;
  while (lVar8 = lVar3, lVar8 != lVar14) {
    lVar3 = lVar8 + -0x80;
    if (*(long *)(lVar8 + -0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x68) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x68) = 0;
    }
  }
  if (lVar14 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dd2a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar14,lVar12 - lVar14,0x10);
  return;
}


