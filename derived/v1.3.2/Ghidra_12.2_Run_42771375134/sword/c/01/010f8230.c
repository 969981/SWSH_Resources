/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f8230; name: FUN_010f8230
 */


void FUN_010f8230(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar11 = 0x276276276276276;
  uVar2 = lVar8 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5) < 0x13b13b13b13b13b) {
    uVar10 = lVar9 * -0x6276276276276276;
    uVar11 = uVar2;
    if (uVar2 <= uVar10) {
      uVar11 = uVar10;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
      goto LAB_010f8304;
    }
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x68,8);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_010f8304:
  puVar6 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_010f8474:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
  puVar12 = (undefined8 *)(lVar9 + lVar8 * 8);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  *puVar12 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[4];
  puVar12[3] = param_2[3];
  puVar12[4] = uVar5;
  puVar12[1] = uVar3;
  puVar12[2] = uVar4;
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[8];
  puVar12[7] = param_2[7];
  puVar12[8] = uVar5;
  puVar12[5] = uVar3;
  puVar12[6] = uVar4;
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xc];
  puVar12[0xb] = param_2[0xb];
  puVar12[0xc] = uVar5;
  puVar12[9] = uVar3;
  puVar12[10] = uVar4;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar8 = *param_1;
  lVar7 = param_1[1];
  puVar14 = puVar12;
  puVar15 = puVar12;
  if (lVar7 != lVar8) {
    do {
      lVar16 = param_1[3];
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010f8474;
      *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar16;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      puVar15 = puVar14 + -0xd;
      *puVar15 = *(undefined8 *)(lVar7 + -0x68);
      uVar3 = *(undefined8 *)(lVar7 + -0x60);
      uVar4 = *(undefined8 *)(lVar7 + -0x58);
      uVar5 = *(undefined8 *)(lVar7 + -0x48);
      puVar14[-10] = *(undefined8 *)(lVar7 + -0x50);
      puVar14[-9] = uVar5;
      puVar14[-0xc] = uVar3;
      puVar14[-0xb] = uVar4;
      uVar3 = *(undefined8 *)(lVar7 + -0x40);
      uVar4 = *(undefined8 *)(lVar7 + -0x38);
      uVar5 = *(undefined8 *)(lVar7 + -0x28);
      puVar14[-6] = *(undefined8 *)(lVar7 + -0x30);
      puVar14[-5] = uVar5;
      puVar14[-8] = uVar3;
      puVar14[-7] = uVar4;
      uVar3 = *(undefined8 *)(lVar7 + -0x20);
      uVar4 = *(undefined8 *)(lVar7 + -0x18);
      puVar1 = (undefined8 *)(lVar7 + -0x10);
      uVar5 = *(undefined8 *)(lVar7 + -8);
      lVar7 = lVar7 + -0x68;
      puVar14[-2] = *puVar1;
      puVar14[-1] = uVar5;
      puVar14[-4] = uVar3;
      puVar14[-3] = uVar4;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      puVar14 = puVar15;
    } while (lVar8 != lVar7);
    lVar8 = *param_1;
  }
  *param_1 = (long)puVar15;
  param_1[1] = (long)(puVar12 + 0xd);
  lVar7 = param_1[2];
  param_1[2] = lVar9 + uVar11 * 0x68;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010f8454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar7 - lVar8,8);
  return;
}


