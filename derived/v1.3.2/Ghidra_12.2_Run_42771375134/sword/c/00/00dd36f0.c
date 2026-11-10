/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd36f0; name: FUN_00dd36f0
 */


void FUN_00dd36f0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar13 = param_1[1] - *param_1 >> 7;
  uVar12 = lVar13 + 1;
  if (uVar12 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  if ((ulong)(lVar6 >> 7) < 0xffffffffffffff) {
    uVar7 = lVar6 >> 6;
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      lVar6 = 0;
      goto LAB_00dd3794;
    }
  }
  else {
    uVar12 = 0x1ffffffffffffff;
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 7,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00dd3794:
  puVar1 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00dd39e0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar14 = (undefined8 *)(lVar6 + lVar13 * 0x80);
  puVar15 = puVar14 + 0x10;
  *puVar14 = *param_2;
  puVar14[1] = param_2[1];
  puVar14[2] = param_2[2];
  uVar5 = param_2[3];
  param_2[3] = 0;
  puVar14[3] = uVar5;
  uVar5 = param_2[5];
  puVar14[7] = param_2[7];
  uVar8 = param_2[4];
  uVar9 = param_2[6];
  puVar14[5] = uVar5;
  puVar14[6] = uVar9;
  puVar14[4] = uVar8;
  uVar5 = param_2[9];
  puVar14[0xb] = param_2[0xb];
  uVar8 = param_2[10];
  puVar14[8] = param_2[8];
  puVar14[9] = uVar5;
  puVar14[10] = uVar8;
  puVar14[0xd] = param_2[0xd];
  puVar14[0xc] = param_2[0xc];
  uVar5 = param_2[0xf];
  puVar14[0xe] = param_2[0xe];
  puVar14[0xf] = uVar5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar13 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar13) {
    lVar2 = lVar13;
  }
  else {
    lVar10 = 0;
    do {
      lVar11 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00dd39e0;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar11 = lVar2 + lVar10;
      *(undefined8 *)((long)puVar14 + lVar10 + -0x80) = *(undefined8 *)(lVar11 + -0x80);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x78) = *(undefined8 *)(lVar11 + -0x78);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x70) = *(undefined8 *)(lVar11 + -0x70);
      lVar4 = *(long *)(lVar11 + -0x68);
      *(long *)((long)puVar14 + lVar10 + -0x68) = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar5 = *(undefined8 *)(lVar11 + -0x58);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x48) = *(undefined8 *)(lVar11 + -0x48);
      uVar8 = *(undefined8 *)(lVar11 + -0x50);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x60) = *(undefined8 *)(lVar11 + -0x60);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x58) = uVar5;
      *(undefined8 *)((long)puVar14 + lVar10 + -0x50) = uVar8;
      uVar5 = *(undefined8 *)(lVar11 + -0x38);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x28) = *(undefined8 *)(lVar11 + -0x28);
      uVar8 = *(undefined8 *)(lVar11 + -0x40);
      uVar9 = *(undefined8 *)(lVar11 + -0x30);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x38) = uVar5;
      *(undefined8 *)((long)puVar14 + lVar10 + -0x30) = uVar9;
      *(undefined8 *)((long)puVar14 + lVar10 + -0x40) = uVar8;
      *(undefined8 *)((long)puVar14 + lVar10 + -0x18) = *(undefined8 *)(lVar11 + -0x18);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x20) = *(undefined8 *)(lVar11 + -0x20);
      lVar4 = lVar10 + -0x80;
      uVar5 = *(undefined8 *)(lVar11 + -8);
      *(undefined8 *)((long)puVar14 + lVar10 + -0x10) = *(undefined8 *)(lVar11 + -0x10);
      *(undefined8 *)((long)puVar14 + lVar10 + -8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar10 = lVar4;
    } while (lVar13 - lVar2 != lVar4);
    puVar14 = (undefined8 *)((long)puVar14 + lVar4);
    lVar13 = *param_1;
    lVar2 = param_1[1];
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar14;
  param_1[1] = (long)puVar15;
  param_1[2] = lVar6 + uVar12 * 0x80;
  while (lVar6 = lVar2, lVar6 != lVar13) {
    lVar2 = lVar6 + -0x80;
    if (*(long *)(lVar6 + -0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + -0x68) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + -0x68) = 0;
    }
  }
  if (lVar13 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dd39bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar13,lVar10 - lVar13,0x10);
  return;
}


