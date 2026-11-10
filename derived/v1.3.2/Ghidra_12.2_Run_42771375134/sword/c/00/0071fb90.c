/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071fb90; name: FUN_0071fb90
 */


void FUN_0071fb90(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  
  lVar8 = param_1[1] - *param_1 >> 5;
  uVar16 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - *param_1 >> 5;
  if ((ulong)(lVar10 * -0x5555555555555555) < 0x155555555555555) {
    uVar11 = lVar10 * 0x5555555555555556;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (uVar16 == 0) {
      lVar10 = 0;
      goto LAB_0071fc50;
    }
  }
  lVar10 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar16 * 0x60,0x10);
  if (lVar10 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0071fc50:
  puVar4 = PTR_DAT_02710860;
  lVar13 = param_1[3];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_0071fe70:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  puVar15 = (undefined8 *)(lVar10 + lVar8 * 0x20);
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  lVar8 = lVar10 + lVar8 * 0x20;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x45) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x28) = &DAT_01d38550;
  *(undefined4 *)(lVar8 + 0x58) = 0xffffffff;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar8 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar8) {
    puVar9 = puVar15;
    lVar5 = lVar8;
  }
  else {
    lVar13 = 0;
    do {
      lVar14 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0071fe70;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar14 = lVar5 + lVar13;
      *(undefined8 *)((long)puVar15 + lVar13 + -0x58) = *(undefined8 *)(lVar14 + -0x58);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x60) = *(undefined8 *)(lVar14 + -0x60);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x48) = *(undefined8 *)(lVar14 + -0x48);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x50) = *(undefined8 *)(lVar14 + -0x50);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x40) = *(undefined8 *)(lVar14 + -0x40);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x38) = *(undefined8 *)(lVar14 + -0x38);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x30) = *(undefined8 *)(lVar14 + -0x30);
      lVar7 = *(long *)(lVar14 + -0x28);
      *(long *)((long)puVar15 + lVar13 + -0x28) = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      uVar2 = *(undefined8 *)(lVar14 + -0x20);
      uVar3 = *(undefined8 *)(lVar14 + -0x18);
      uVar12 = *(undefined8 *)(lVar14 + -0x10);
      *(undefined4 *)((long)puVar15 + lVar13 + -8) = *(undefined4 *)(lVar14 + -8);
      *(undefined8 *)((long)puVar15 + lVar13 + -0x20) = uVar2;
      *(undefined8 *)((long)puVar15 + lVar13 + -0x18) = uVar3;
      *(undefined8 *)((long)puVar15 + lVar13 + -0x10) = uVar12;
      lVar13 = lVar13 + -0x60;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    } while (lVar8 - lVar5 != lVar13);
    lVar8 = *param_1;
    puVar9 = (undefined8 *)((long)puVar15 + lVar13);
    lVar5 = param_1[1];
  }
  lVar13 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)(puVar15 + 0xc);
  param_1[2] = lVar10 + uVar16 * 0x60;
  while (lVar10 = lVar5, lVar10 != lVar8) {
    lVar5 = lVar10 + -0x60;
    if (*(long *)(lVar10 + -0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar10 + -0x28) + 0x48) + 0x18))();
      *(undefined8 *)(lVar10 + -0x28) = 0;
    }
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071fe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar13 - lVar8,0x10);
  return;
}


