/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01542db0; name: FUN_01542db0
 */


void FUN_01542db0(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
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
      goto LAB_01542e50;
    }
  }
  else {
    uVar15 = 0x1ffffffffffffff;
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar15 << 7,0x10);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01542e50:
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01543030:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar16 = (undefined8 *)(lVar8 + lVar14 * 0x80);
  puVar10 = puVar16 + 0x10;
  *puVar16 = PTR_LAB_0272ac48;
  puVar3 = PTR_LAB_0272ac58;
  puVar16[1] = PTR_LAB_0272ac50;
  puVar16[2] = puVar3;
  puVar16[3] = PTR_LAB_0272ac60;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar14 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar14) {
    lVar4 = lVar14;
  }
  else {
    lVar12 = 0;
    do {
      lVar13 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01543030;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar13 = lVar4 + lVar12;
      puVar17 = (undefined8 *)((long)puVar16 + lVar12 + -0x80);
      *puVar17 = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x70) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x68) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x78) = 0;
      if (*(code **)(lVar13 + -0x68) != (code *)0x0) {
        (**(code **)(lVar13 + -0x68))(lVar13 + -0x60,(long)puVar16 + lVar12 + -0x60);
        uVar6 = *(undefined8 *)(lVar13 + -0x80);
        uVar11 = *(undefined8 *)(lVar13 + -0x68);
        uVar1 = *(undefined8 *)(lVar13 + -0x78);
        *(undefined8 *)((long)puVar16 + lVar12 + -0x70) = *(undefined8 *)(lVar13 + -0x70);
        *(undefined8 *)((long)puVar16 + lVar12 + -0x68) = uVar11;
        *puVar17 = uVar6;
        *(undefined8 *)((long)puVar16 + lVar12 + -0x78) = uVar1;
        pcVar7 = *(code **)(lVar13 + -0x78);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x70) = 0;
          *(undefined8 *)(lVar13 + -0x68) = 0;
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          (*pcVar7)(lVar13 + -0x60);
        }
      }
      lVar12 = lVar12 + -0x80;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    } while (lVar14 - lVar4 != lVar12);
    lVar14 = param_1[1];
    puVar16 = (undefined8 *)((long)puVar16 + lVar12);
    lVar4 = *param_1;
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar16;
  param_1[1] = (long)puVar10;
  param_1[2] = lVar8 + uVar15 * 0x80;
  while (lVar8 = lVar14, lVar8 != lVar4) {
    pcVar7 = *(code **)(lVar8 + -0x78);
    lVar14 = lVar8 + -0x80;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar8 + -0x70) = 0;
      *(undefined8 *)(lVar8 + -0x68) = 0;
      *(undefined8 *)(lVar8 + -0x80) = 0;
      *(undefined8 *)(lVar8 + -0x78) = 0;
      (*pcVar7)(lVar8 + -0x60);
    }
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0154300c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar12 - lVar4,0x10);
  return;
}


