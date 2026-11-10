/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2f590; name: FUN_00e2f590
 */


void FUN_00e2f590(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar7 = param_1[1] - *param_1 >> 5;
  uVar12 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 5;
  if ((ulong)(lVar9 * -0x5555555555555555) < 0x155555555555555) {
    uVar10 = lVar9 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
      goto LAB_00e2f650;
    }
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x60,8);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00e2f650:
  puVar4 = PTR_DAT_02710860;
  lVar15 = param_1[3];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00e2f83c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar15;
  puVar13 = (undefined8 *)(lVar9 + lVar7 * 0x20);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  uVar11 = param_2[1];
  *puVar13 = *param_2;
  puVar13[1] = uVar11;
  uVar2 = param_2[3];
  uVar11 = param_2[4];
  uVar3 = param_2[5];
  puVar13[2] = param_2[2];
  puVar13[3] = uVar2;
  puVar13[4] = uVar11;
  puVar13[5] = uVar3;
  lVar7 = lVar9 + lVar7 * 0x20;
  *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(param_2 + 6);
  *(undefined2 *)(lVar7 + 0x34) = *(undefined2 *)((long)param_2 + 0x34);
  *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)(lVar7 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined1 *)(lVar7 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
  *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(lVar7 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(param_2 + 9);
  uVar11 = param_2[10];
  *(undefined1 *)(lVar7 + 0x58) = *(undefined1 *)(param_2 + 0xb);
  *(undefined8 *)(lVar7 + 0x50) = uVar11;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar7 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar7) {
    puVar8 = puVar13;
  }
  else {
    lVar15 = 0;
    do {
      lVar16 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00e2f83c;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar16 = lVar5 + lVar15;
      uVar11 = *(undefined8 *)(lVar16 + -0x58);
      lVar14 = lVar15 + -0x60;
      *(undefined8 *)((long)puVar13 + lVar15 + -0x60) = *(undefined8 *)(lVar16 + -0x60);
      *(undefined8 *)((long)puVar13 + lVar15 + -0x58) = uVar11;
      uVar11 = *(undefined8 *)(lVar16 + -0x50);
      uVar2 = *(undefined8 *)(lVar16 + -0x48);
      uVar3 = *(undefined8 *)(lVar16 + -0x38);
      *(undefined8 *)((long)puVar13 + lVar15 + -0x40) = *(undefined8 *)(lVar16 + -0x40);
      *(undefined8 *)((long)puVar13 + lVar15 + -0x38) = uVar3;
      *(undefined8 *)((long)puVar13 + lVar15 + -0x50) = uVar11;
      *(undefined8 *)((long)puVar13 + lVar15 + -0x48) = uVar2;
      *(undefined4 *)((long)puVar13 + lVar15 + -0x30) = *(undefined4 *)(lVar16 + -0x30);
      *(undefined2 *)((long)puVar13 + lVar15 + -0x2c) = *(undefined2 *)(lVar16 + -0x2c);
      *(undefined4 *)((long)puVar13 + lVar15 + -0x28) = *(undefined4 *)(lVar16 + -0x28);
      *(undefined1 *)((long)puVar13 + lVar15 + -0x24) = *(undefined1 *)(lVar16 + -0x24);
      *(undefined1 *)((long)puVar13 + lVar15 + -0x23) = *(undefined1 *)(lVar16 + -0x23);
      *(undefined4 *)((long)puVar13 + lVar15 + -0x20) = *(undefined4 *)(lVar16 + -0x20);
      *(undefined4 *)((long)puVar13 + lVar15 + -0x1c) = *(undefined4 *)(lVar16 + -0x1c);
      *(undefined4 *)((long)puVar13 + lVar15 + -0x18) = *(undefined4 *)(lVar16 + -0x18);
      uVar11 = *(undefined8 *)(lVar16 + -0x10);
      *(undefined1 *)((long)puVar13 + lVar15 + -8) = *(undefined1 *)(lVar16 + -8);
      *(undefined8 *)((long)puVar13 + lVar15 + -0x10) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar15 = lVar14;
    } while (lVar7 - lVar5 != lVar14);
    lVar7 = *param_1;
    puVar8 = (undefined8 *)((long)puVar13 + lVar14);
  }
  *param_1 = (long)puVar8;
  param_1[1] = (long)(puVar13 + 0xc);
  lVar5 = param_1[2];
  param_1[2] = lVar9 + uVar12 * 0x60;
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e2f81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar5 - lVar7,8);
  return;
}


