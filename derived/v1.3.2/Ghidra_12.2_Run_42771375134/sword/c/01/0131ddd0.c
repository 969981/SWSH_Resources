/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131ddd0; name: FUN_0131ddd0
 */


void FUN_0131ddd0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar15 = 0x1c71c71c71c71c7;
  uVar1 = lVar5 * -0x71c71c71c71c71c7 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar8 * -0x71c71c71c71c71c7) < 0xe38e38e38e38e3) {
    uVar9 = lVar8 * 0x1c71c71c71c71c72;
    uVar15 = uVar1;
    if (uVar1 <= uVar9) {
      uVar15 = uVar9;
    }
    if (uVar15 == 0) {
      lVar8 = 0;
      goto LAB_0131dea8;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar15 * 0x90,0x10);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0131dea8:
  puVar2 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0131e0e0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
  puVar16 = (undefined8 *)(lVar8 + lVar5 * 0x10);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar16 = *param_2;
  lVar12 = lVar8 + lVar5 * 0x10;
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  if ((code *)param_2[5] != (code *)0x0) {
    (*(code *)param_2[5])(param_2 + 6,lVar8 + lVar5 * 0x10 + 0x30);
    uVar6 = param_2[2];
    uVar11 = param_2[5];
    uVar10 = param_2[3];
    *(undefined8 *)(lVar12 + 0x20) = param_2[4];
    *(undefined8 *)(lVar12 + 0x28) = uVar11;
    *(undefined8 *)(lVar12 + 0x10) = uVar6;
    *(undefined8 *)(lVar12 + 0x18) = uVar10;
    pcVar7 = (code *)param_2[3];
    if (pcVar7 != (code *)0x0) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      (*pcVar7)(param_2 + 6);
    }
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar5 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar5) {
    puVar14 = puVar16;
    lVar3 = lVar5;
  }
  else {
    lVar12 = 0;
    do {
      lVar13 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0131e0e0;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar13 = lVar3 + lVar12;
      uVar10 = *(undefined8 *)(lVar13 + -0x90);
      puVar14 = (undefined8 *)((long)puVar16 + lVar12 + -0x80);
      *puVar14 = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x70) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x68) = 0;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x90) = uVar10;
      *(undefined8 *)((long)puVar16 + lVar12 + -0x78) = 0;
      if (*(code **)(lVar13 + -0x68) != (code *)0x0) {
        (**(code **)(lVar13 + -0x68))(lVar13 + -0x60,(long)puVar16 + lVar12 + -0x60);
        uVar6 = *(undefined8 *)(lVar13 + -0x80);
        uVar11 = *(undefined8 *)(lVar13 + -0x68);
        uVar10 = *(undefined8 *)(lVar13 + -0x78);
        *(undefined8 *)((long)puVar16 + lVar12 + -0x70) = *(undefined8 *)(lVar13 + -0x70);
        *(undefined8 *)((long)puVar16 + lVar12 + -0x68) = uVar11;
        *puVar14 = uVar6;
        *(undefined8 *)((long)puVar16 + lVar12 + -0x78) = uVar10;
        pcVar7 = *(code **)(lVar13 + -0x78);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x70) = 0;
          *(undefined8 *)(lVar13 + -0x68) = 0;
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          (*pcVar7)(lVar13 + -0x60);
        }
      }
      lVar12 = lVar12 + -0x90;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar5 - lVar3 != lVar12);
    lVar5 = param_1[1];
    puVar14 = (undefined8 *)((long)puVar16 + lVar12);
    lVar3 = *param_1;
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar14;
  param_1[1] = (long)(puVar16 + 0x12);
  param_1[2] = lVar8 + uVar15 * 0x90;
  while (lVar8 = lVar5, lVar8 != lVar3) {
    pcVar7 = *(code **)(lVar8 + -0x78);
    lVar5 = lVar8 + -0x90;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar8 + -0x70) = 0;
      *(undefined8 *)(lVar8 + -0x68) = 0;
      *(undefined8 *)(lVar8 + -0x80) = 0;
      *(undefined8 *)(lVar8 + -0x78) = 0;
      (*pcVar7)(lVar8 + -0x60);
    }
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0131e0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,lVar12 - lVar3,0x10);
  return;
}


