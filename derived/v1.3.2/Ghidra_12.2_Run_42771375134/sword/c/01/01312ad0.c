/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312ad0; name: FUN_01312ad0
 */


void FUN_01312ad0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar15 = 0x1c71c71c71c71c7;
  uVar1 = lVar6 * -0x71c71c71c71c71c7 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar9 * -0x71c71c71c71c71c7) < 0xe38e38e38e38e3) {
    uVar10 = lVar9 * 0x1c71c71c71c71c72;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (uVar15 == 0) {
      lVar9 = 0;
      goto LAB_01312bac;
    }
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar15 * 0x90,0x10);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_01312bac:
  puVar3 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01312db8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
  puVar16 = (undefined8 *)(lVar9 + lVar6 * 0x10);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar2 = param_2[1];
  *puVar16 = *param_2;
  puVar16[1] = uVar2;
  lVar12 = lVar9 + lVar6 * 0x10;
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,lVar9 + lVar6 * 0x10 + 0x30);
    uVar2 = *param_3;
    uVar7 = param_3[1];
    uVar11 = param_3[3];
    *(undefined8 *)(lVar12 + 0x20) = param_3[2];
    *(undefined8 *)(lVar12 + 0x28) = uVar11;
    *(undefined8 *)(lVar12 + 0x10) = uVar2;
    *(undefined8 *)(lVar12 + 0x18) = uVar7;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar6 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar6) {
    puVar14 = puVar16;
    lVar4 = lVar6;
  }
  else {
    lVar12 = 0;
    do {
      lVar13 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01312db8;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar13 = lVar4 + lVar12;
      uVar2 = *(undefined8 *)(lVar13 + -0x90);
      uVar7 = *(undefined8 *)(lVar13 + -0x88);
      puVar14 = (undefined8 *)((long)puVar16 + lVar12 + -0x80);
      *puVar14 = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x70) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x68) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x78) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x90) = uVar2;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x88) = uVar7;
      if (*(code **)(lVar13 + -0x68) != (code *)0x0) {
        (**(code **)(lVar13 + -0x68))(lVar13 + -0x60,(long)puVar16 + lVar12 + -0x60);
        uVar7 = *(undefined8 *)(lVar13 + -0x80);
        uVar11 = *(undefined8 *)(lVar13 + -0x68);
        uVar2 = *(undefined8 *)(lVar13 + -0x78);
        *(undefined8 *)((long)puVar16 + lVar12 + -0x70) = *(undefined8 *)(lVar13 + -0x70);
        *(undefined8 *)((long)puVar16 + lVar12 + -0x68) = uVar11;
        *puVar14 = uVar7;
        *(undefined8 *)((long)puVar16 + lVar12 + -0x78) = uVar2;
        pcVar8 = *(code **)(lVar13 + -0x78);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x70) = 0;
          *(undefined8 *)(lVar13 + -0x68) = 0;
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          (*pcVar8)(lVar13 + -0x60);
        }
      }
      lVar12 = lVar12 + -0x90;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    } while (lVar6 - lVar4 != lVar12);
    lVar6 = param_1[1];
    puVar14 = (undefined8 *)((long)puVar16 + lVar12);
    lVar4 = *param_1;
  }
  lVar12 = param_1[2];
  param_1[2] = lVar9 + uVar15 * 0x90;
  *param_1 = (long)puVar14;
  param_1[1] = (long)(puVar16 + 0x12);
  while (lVar9 = lVar6, lVar9 != lVar4) {
    pcVar8 = *(code **)(lVar9 + -0x78);
    lVar6 = lVar9 + -0x90;
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined8 *)(lVar9 + -0x68) = 0;
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined8 *)(lVar9 + -0x78) = 0;
      (*pcVar8)(lVar9 + -0x60);
    }
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01312d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar12 - lVar4,0x10);
  return;
}


