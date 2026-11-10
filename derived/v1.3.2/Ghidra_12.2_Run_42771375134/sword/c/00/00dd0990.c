/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd0990; name: FUN_00dd0990
 */


void FUN_00dd0990(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  lVar13 = param_1[1] - *param_1 >> 4;
  uVar16 = 0x75075075075075;
  uVar1 = lVar13 * -0x5075075075075075 + 1;
  if (0x75075075075075 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar14 = param_1[2] - *param_1 >> 4;
  plVar19 = param_1 + 3;
  plStack_58 = plVar19;
  if ((ulong)(lVar14 * -0x5075075075075075) < 0x3a83a83a83a83a) {
    uVar15 = lVar14 * 0x5f15f15f15f15f16;
    uVar16 = uVar1;
    if (uVar1 <= uVar15) {
      uVar16 = uVar15;
    }
    if (uVar16 == 0) {
      lVar14 = 0;
      goto LAB_00dd0a70;
    }
  }
  local_60 = 0;
  lVar14 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar16 * 0x230,0x10);
  if (lVar14 == 0) {
    (**(code **)(*(long *)*plVar19 + 0xb8))();
  }
LAB_00dd0a70:
  puVar20 = (undefined8 *)(lVar14 + lVar13 * 0x10);
  local_60 = lVar14 + uVar16 * 0x230;
  lVar17 = *plVar19;
  local_78 = lVar14;
  puStack_70 = puVar20;
  local_68 = puVar20;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar17;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar20[2] = param_2[2];
  *puVar20 = uVar2;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  puVar20[6] = param_2[6];
  puVar20[4] = uVar2;
  uVar2 = param_2[8];
  uVar8 = param_2[9];
  uVar9 = param_2[0xb];
  puVar20[10] = param_2[10];
  puVar20[8] = uVar2;
  uVar2 = param_2[0xc];
  uVar10 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar11 = param_2[0xf];
  puVar20[3] = uVar5;
  puVar20[0xb] = uVar9;
  puVar20[0xc] = uVar2;
  puVar20[0xd] = uVar10;
  puVar20[0xe] = uVar3;
  puVar20[1] = uVar4;
  puVar20[7] = uVar7;
  puVar20[5] = uVar6;
  puVar20[9] = uVar8;
  puVar20[0xf] = uVar11;
  lVar18 = lVar14 + lVar13 * 0x10;
  plVar19 = (long *)(lVar18 + 0x80);
  *plVar19 = (long)(PTR_DAT_0271e948 + 0x10);
  lVar17 = param_2[0x11];
  *(long *)(lVar18 + 0x88) = lVar17;
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  lVar17 = lVar14 + lVar13 * 0x10;
  *(undefined8 *)(lVar17 + 0x90) = 0;
  *(undefined8 *)(lVar17 + 0xa0) = 0;
  *(undefined8 *)(lVar17 + 0xa8) = 0;
  *(undefined8 *)(lVar17 + 0x98) = 0;
  if ((code *)param_2[0x14] != (code *)0x0) {
    (*(code *)param_2[0x14])(param_2 + 0x16,lVar14 + lVar13 * 0x10 + 0xb0);
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x15];
    *(undefined8 *)(lVar17 + 0xa0) = param_2[0x14];
    *(undefined8 *)(lVar17 + 0xa8) = uVar4;
    *(undefined8 *)(lVar17 + 0x90) = uVar2;
    *(undefined8 *)(lVar17 + 0x98) = uVar3;
  }
  lVar17 = lVar14 + lVar13 * 0x10;
  *(undefined8 *)(lVar17 + 0x120) = 0;
  *(undefined8 *)(lVar17 + 0x128) = 0;
  *(undefined8 *)(lVar17 + 0x110) = 0;
  *(undefined8 *)(lVar17 + 0x118) = 0;
  if ((code *)param_2[0x24] != (code *)0x0) {
    (*(code *)param_2[0x24])(param_2 + 0x26,lVar14 + lVar13 * 0x10 + 0x130);
    uVar2 = param_2[0x22];
    uVar3 = param_2[0x23];
    uVar4 = param_2[0x25];
    *(undefined8 *)(lVar17 + 0x120) = param_2[0x24];
    *(undefined8 *)(lVar17 + 0x128) = uVar4;
    *(undefined8 *)(lVar17 + 0x110) = uVar2;
    *(undefined8 *)(lVar17 + 0x118) = uVar3;
  }
  *plVar19 = (long)(PTR_DAT_0271e940 + 0x10);
  lVar17 = lVar14 + lVar13 * 0x10;
  *(undefined8 *)(lVar17 + 400) = param_2[0x32];
  *(undefined8 *)(lVar17 + 0x1b0) = 0;
  *(undefined8 *)(lVar17 + 0x1b8) = 0;
  *(undefined8 *)(lVar17 + 0x1a0) = 0;
  *(undefined8 *)(lVar17 + 0x1a8) = 0;
  if ((code *)param_2[0x36] != (code *)0x0) {
    (*(code *)param_2[0x36])(param_2 + 0x38,lVar14 + lVar13 * 0x10 + 0x1c0);
    uVar2 = param_2[0x34];
    uVar3 = param_2[0x35];
    uVar4 = param_2[0x37];
    *(undefined8 *)(lVar17 + 0x1b0) = param_2[0x36];
    *(undefined8 *)(lVar17 + 0x1b8) = uVar4;
    *(undefined8 *)(lVar17 + 0x1a0) = uVar2;
    *(undefined8 *)(lVar17 + 0x1a8) = uVar3;
  }
  *(undefined4 *)(lVar14 + lVar13 * 0x10 + 0x220) = *(undefined4 *)(param_2 + 0x44);
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  local_68 = local_68 + 0x46;
  FUN_00dd0c80(param_1,&local_78);
  FUN_00dd0fe0(&local_78);
  return;
}


