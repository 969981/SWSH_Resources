/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01035c40; name: FUN_01035c40
 */


void FUN_01035c40(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar14 = 0x1af286bca1af286;
  uVar1 = lVar6 * -0x79435e50d79435e5 + 1;
  if (0x1af286bca1af286 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * -0x79435e50d79435e5) < 0xd79435e50d7943) {
    uVar9 = lVar8 * 0xd79435e50d79436;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (uVar14 == 0) {
      lVar8 = 0;
      goto LAB_01035d14;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 * 0x98,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01035d14:
  puVar3 = PTR_DAT_02710860;
  lVar17 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01035f5c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar17;
  puVar16 = (undefined8 *)(lVar8 + lVar6 * 8);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar11 = param_2[1];
  *puVar16 = *param_2;
  puVar16[1] = uVar11;
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar13 = param_2[5];
  puVar16[4] = param_2[4];
  puVar16[5] = uVar13;
  puVar16[2] = uVar11;
  puVar16[3] = uVar12;
  uVar12 = param_2[7];
  uVar11 = param_2[8];
  uVar13 = param_2[9];
  puVar16[6] = param_2[6];
  puVar16[7] = uVar12;
  puVar16[8] = uVar11;
  puVar16[9] = uVar13;
  puVar7 = (undefined1 *)(lVar8 + lVar6 * 8 + 0x50);
  *puVar7 = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    lVar6 = lVar8 + lVar6 * 8;
    uVar11 = *(undefined8 *)((long)param_2 + 0x51);
    uVar12 = *(undefined8 *)((long)param_2 + 0x59);
    uVar13 = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)(lVar6 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)(lVar6 + 0x61) = uVar13;
    *(undefined8 *)(lVar6 + 0x59) = uVar12;
    *(undefined8 *)(lVar6 + 0x51) = uVar11;
    uVar11 = *(undefined8 *)((long)param_2 + 0x71);
    uVar12 = *(undefined8 *)((long)param_2 + 0x79);
    uVar13 = *(undefined8 *)((long)param_2 + 0x81);
    *(undefined8 *)(lVar6 + 0x89) = *(undefined8 *)((long)param_2 + 0x89);
    *(undefined8 *)(lVar6 + 0x81) = uVar13;
    *(undefined8 *)(lVar6 + 0x79) = uVar12;
    *(undefined8 *)(lVar6 + 0x71) = uVar11;
    *puVar7 = 1;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar6 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar6) {
    lVar4 = lVar6;
    puVar10 = puVar16;
  }
  else {
    lVar17 = 0;
    do {
      lVar15 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01035f5c;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar15;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar15 = lVar4 + lVar17;
      uVar11 = *(undefined8 *)(lVar15 + -0x90);
      *(undefined8 *)((long)puVar16 + lVar17 + -0x98) = *(undefined8 *)(lVar15 + -0x98);
      *(undefined8 *)((long)puVar16 + lVar17 + -0x90) = uVar11;
      uVar11 = *(undefined8 *)(lVar15 + -0x88);
      uVar12 = *(undefined8 *)(lVar15 + -0x80);
      uVar13 = *(undefined8 *)(lVar15 + -0x70);
      *(undefined8 *)((long)puVar16 + lVar17 + -0x78) = *(undefined8 *)(lVar15 + -0x78);
      *(undefined8 *)((long)puVar16 + lVar17 + -0x70) = uVar13;
      *(undefined8 *)((long)puVar16 + lVar17 + -0x88) = uVar11;
      *(undefined8 *)((long)puVar16 + lVar17 + -0x80) = uVar12;
      uVar11 = *(undefined8 *)(lVar15 + -0x68);
      uVar13 = *(undefined8 *)(lVar15 + -0x60);
      uVar12 = *(undefined8 *)(lVar15 + -0x58);
      uVar2 = *(undefined8 *)(lVar15 + -0x50);
      *(undefined1 *)((long)puVar16 + lVar17 + -0x48) = 0;
      *(undefined8 *)((long)puVar16 + lVar17 + -0x58) = uVar12;
      *(undefined8 *)((long)puVar16 + lVar17 + -0x50) = uVar2;
      *(undefined8 *)((long)puVar16 + lVar17 + -0x68) = uVar11;
      *(undefined8 *)((long)puVar16 + lVar17 + -0x60) = uVar13;
      if (*(char *)(lVar15 + -0x48) != '\0') {
        uVar11 = *(undefined8 *)(lVar15 + -0x47);
        uVar12 = *(undefined8 *)(lVar15 + -0x3f);
        uVar13 = *(undefined8 *)(lVar15 + -0x37);
        *(undefined8 *)((long)puVar16 + lVar17 + -0x2f) = *(undefined8 *)(lVar15 + -0x2f);
        *(undefined8 *)((long)puVar16 + lVar17 + -0x37) = uVar13;
        *(undefined8 *)((long)puVar16 + lVar17 + -0x3f) = uVar12;
        *(undefined8 *)((long)puVar16 + lVar17 + -0x47) = uVar11;
        uVar11 = *(undefined8 *)(lVar15 + -0x27);
        uVar12 = *(undefined8 *)(lVar15 + -0x1f);
        uVar13 = *(undefined8 *)(lVar15 + -0x17);
        *(undefined8 *)((long)puVar16 + lVar17 + -0xf) = *(undefined8 *)(lVar15 + -0xf);
        *(undefined8 *)((long)puVar16 + lVar17 + -0x17) = uVar13;
        *(undefined8 *)((long)puVar16 + lVar17 + -0x1f) = uVar12;
        *(undefined8 *)((long)puVar16 + lVar17 + -0x27) = uVar11;
        *(undefined1 *)((long)puVar16 + lVar17 + -0x48) = 1;
      }
      lVar17 = lVar17 + -0x98;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    } while (lVar6 - lVar4 != lVar17);
    lVar6 = *param_1;
    lVar4 = param_1[1];
    puVar10 = (undefined8 *)((long)puVar16 + lVar17);
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)(puVar16 + 0x13);
  lVar17 = param_1[2];
  param_1[2] = lVar8 + uVar14 * 0x98;
  while (lVar8 = lVar4, lVar8 != lVar6) {
    lVar4 = lVar8 + -0x98;
    if (*(char *)(lVar8 + -0x48) != '\0') {
      *(undefined1 *)(lVar8 + -0x48) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01035f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar17 - lVar6,8);
  return;
}


