/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f4250; name: FUN_011f4250
 */


void FUN_011f4250(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  lVar11 = param_1[1] - *param_1 >> 7;
  uVar10 = lVar11 + 1;
  if (uVar10 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 7) < 0xffffffffffffff) {
    uVar9 = lVar8 >> 6;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar10 == 0) {
      lVar8 = 0;
      goto LAB_011f42f0;
    }
  }
  else {
    uVar10 = 0x1ffffffffffffff;
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 7,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_011f42f0:
  puVar6 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_011f4470:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar12;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar2 = (undefined8 *)(lVar8 + lVar11 * 0x80);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar2[2] = param_2[2];
  puVar2[3] = uVar5;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[7];
  puVar2[6] = param_2[6];
  puVar2[7] = uVar5;
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[0xb];
  puVar2[10] = param_2[10];
  puVar2[0xb] = uVar5;
  puVar2[8] = uVar3;
  puVar2[9] = uVar4;
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xf];
  puVar2[0xe] = param_2[0xe];
  puVar2[0xf] = uVar5;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = uVar4;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar11 = *param_1;
  lVar7 = param_1[1];
  puVar13 = puVar2;
  puVar14 = puVar2;
  if (lVar7 != lVar11) {
    do {
      lVar15 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_011f4470;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      uVar4 = *(undefined8 *)(lVar7 + -0x78);
      uVar3 = *(undefined8 *)(lVar7 + -0x70);
      uVar5 = *(undefined8 *)(lVar7 + -0x68);
      puVar14 = puVar13 + -0x10;
      *puVar14 = *(undefined8 *)(lVar7 + -0x80);
      puVar13[-0xe] = uVar3;
      puVar13[-0xd] = uVar5;
      puVar13[-0xf] = uVar4;
      uVar3 = *(undefined8 *)(lVar7 + -0x60);
      uVar4 = *(undefined8 *)(lVar7 + -0x58);
      uVar5 = *(undefined8 *)(lVar7 + -0x48);
      puVar13[-10] = *(undefined8 *)(lVar7 + -0x50);
      puVar13[-9] = uVar5;
      puVar13[-0xc] = uVar3;
      puVar13[-0xb] = uVar4;
      uVar3 = *(undefined8 *)(lVar7 + -0x40);
      uVar4 = *(undefined8 *)(lVar7 + -0x38);
      uVar5 = *(undefined8 *)(lVar7 + -0x28);
      puVar13[-6] = *(undefined8 *)(lVar7 + -0x30);
      puVar13[-5] = uVar5;
      puVar13[-8] = uVar3;
      puVar13[-7] = uVar4;
      uVar3 = *(undefined8 *)(lVar7 + -0x20);
      uVar4 = *(undefined8 *)(lVar7 + -0x18);
      puVar1 = (undefined8 *)(lVar7 + -0x10);
      uVar5 = *(undefined8 *)(lVar7 + -8);
      lVar7 = lVar7 + -0x80;
      puVar13[-2] = *puVar1;
      puVar13[-1] = uVar5;
      puVar13[-4] = uVar3;
      puVar13[-3] = uVar4;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar13 = puVar14;
    } while (lVar11 != lVar7);
    lVar11 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)(puVar2 + 0x10);
  lVar7 = param_1[2];
  param_1[2] = lVar8 + uVar10 * 0x80;
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011f4450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar11,lVar7 - lVar11,8);
  return;
}


