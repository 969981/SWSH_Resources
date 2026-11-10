/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a6330; name: FUN_010a6330
 */


void FUN_010a6330(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  
  lVar5 = param_1[1] - *param_1 >> 2;
  uVar12 = 0x35e50d79435e50d;
  uVar1 = lVar5 * -0x79435e50d79435e5 + 1;
  if (0x35e50d79435e50d < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 2;
  if ((ulong)(lVar7 * -0x79435e50d79435e5) < 0x1af286bca1af286) {
    uVar8 = lVar7 * 0xd79435e50d79436;
    uVar12 = uVar1;
    if (uVar1 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 == 0) {
      lVar7 = 0;
      goto LAB_010a6404;
    }
  }
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x4c,4);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_010a6404:
  puVar2 = PTR_DAT_02710860;
  lVar15 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_010a6614:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar15;
  puVar14 = (undefined1 *)(lVar7 + lVar5 * 4);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar14 = *param_2;
  puVar6 = (undefined1 *)(lVar7 + lVar5 * 4 + 4);
  *puVar6 = 0;
  if (param_2[4] != '\0') {
    lVar15 = lVar7 + lVar5 * 4;
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(lVar15 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(lVar15 + 0x10) = uVar10;
    *(undefined8 *)(lVar15 + 0x18) = uVar11;
    *(undefined8 *)(lVar15 + 8) = uVar9;
    *puVar6 = 1;
  }
  lVar5 = lVar7 + lVar5 * 4;
  *(undefined8 *)(lVar5 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  uVar9 = *(undefined8 *)(param_2 + 0x2c);
  uVar10 = *(undefined8 *)(param_2 + 0x34);
  uVar11 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(lVar5 + 0x41) = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(lVar5 + 0x3c) = uVar11;
  *(undefined8 *)(lVar5 + 0x34) = uVar10;
  *(undefined8 *)(lVar5 + 0x2c) = uVar9;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar5 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar5) {
    lVar3 = lVar5;
    puVar6 = puVar14;
  }
  else {
    lVar15 = 0;
    do {
      lVar13 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_010a6614;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar13 = lVar3 + lVar15;
      puVar14[lVar15 + -0x4c] = *(undefined1 *)(lVar13 + -0x4c);
      puVar14[lVar15 + -0x48] = 0;
      if (*(char *)(lVar13 + -0x48) != '\0') {
        uVar9 = *(undefined8 *)(lVar13 + -0x44);
        uVar10 = *(undefined8 *)(lVar13 + -0x3c);
        uVar11 = *(undefined8 *)(lVar13 + -0x34);
        *(undefined4 *)(puVar14 + lVar15 + -0x2c) = *(undefined4 *)(lVar13 + -0x2c);
        *(undefined8 *)(puVar14 + lVar15 + -0x34) = uVar11;
        *(undefined8 *)(puVar14 + lVar15 + -0x3c) = uVar10;
        *(undefined8 *)(puVar14 + lVar15 + -0x44) = uVar9;
        puVar14[lVar15 + -0x48] = 1;
      }
      *(undefined8 *)(puVar14 + lVar15 + -0x28) = *(undefined8 *)(lVar13 + -0x28);
      uVar11 = *(undefined8 *)(lVar13 + -0x10);
      uVar9 = *(undefined8 *)(lVar13 + -0x20);
      uVar10 = *(undefined8 *)(lVar13 + -0x18);
      *(undefined8 *)(puVar14 + lVar15 + -0xb) = *(undefined8 *)(lVar13 + -0xb);
      *(undefined8 *)(puVar14 + lVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar14 + lVar15 + -0x10) = uVar11;
      *(undefined8 *)(puVar14 + lVar15 + -0x20) = uVar9;
      lVar15 = lVar15 + -0x4c;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar5 - lVar3 != lVar15);
    lVar5 = *param_1;
    lVar3 = param_1[1];
    puVar6 = puVar14 + lVar15;
  }
  *param_1 = (long)puVar6;
  param_1[1] = (long)(puVar14 + 0x4c);
  lVar15 = param_1[2];
  param_1[2] = lVar7 + uVar12 * 0x4c;
  while (lVar7 = lVar3, lVar7 != lVar5) {
    lVar3 = lVar7 + -0x4c;
    if (*(char *)(lVar7 + -0x48) != '\0') {
      *(undefined1 *)(lVar7 + -0x48) = 0;
    }
  }
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010a65f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,lVar15 - lVar5,4);
  return;
}


