/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e20650; name: FUN_00e20650
 */


void FUN_00e20650(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  
  lVar5 = param_1[1] - *param_1 >> 2;
  uVar8 = 0x924924924924924;
  uVar1 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (0x924924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 2;
  if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar7 = lVar6 * -0x2492492492492492;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      lVar6 = 0;
      goto LAB_00e20724;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 * 0x1c,4);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00e20724:
  puVar2 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00e208bc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
  puVar11 = (undefined4 *)(lVar6 + lVar5 * 4);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar12 = puVar11 + 7;
  *puVar11 = *param_2;
  lVar5 = lVar6 + lVar5 * 4;
  *(undefined2 *)(lVar5 + 4) = *(undefined2 *)(param_2 + 1);
  *(undefined4 *)(lVar5 + 8) = param_2[2];
  *(undefined1 *)(lVar5 + 0xc) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(lVar5 + 0xd) = *(undefined1 *)((long)param_2 + 0xd);
  *(undefined4 *)(lVar5 + 0x10) = param_2[4];
  *(undefined4 *)(lVar5 + 0x14) = param_2[5];
  *(undefined4 *)(lVar5 + 0x18) = param_2[6];
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar5 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 != lVar5) {
    lVar10 = 0;
    do {
      lVar9 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00e208bc;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar9 = lVar3 + lVar10;
      lVar13 = lVar10 + -0x1c;
      *(undefined4 *)((long)puVar11 + lVar10 + -0x1c) = *(undefined4 *)(lVar9 + -0x1c);
      *(undefined2 *)((long)puVar11 + lVar10 + -0x18) = *(undefined2 *)(lVar9 + -0x18);
      *(undefined4 *)((long)puVar11 + lVar10 + -0x14) = *(undefined4 *)(lVar9 + -0x14);
      *(undefined1 *)((long)puVar11 + lVar10 + -0x10) = *(undefined1 *)(lVar9 + -0x10);
      *(undefined1 *)((long)puVar11 + lVar10 + -0xf) = *(undefined1 *)(lVar9 + -0xf);
      *(undefined4 *)((long)puVar11 + lVar10 + -0xc) = *(undefined4 *)(lVar9 + -0xc);
      *(undefined4 *)((long)puVar11 + lVar10 + -8) = *(undefined4 *)(lVar9 + -8);
      *(undefined4 *)((long)puVar11 + lVar10 + -4) = *(undefined4 *)(lVar9 + -4);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar10 = lVar13;
    } while (lVar5 - lVar3 != lVar13);
    lVar5 = *param_1;
    puVar11 = (undefined4 *)((long)puVar11 + lVar13);
  }
  lVar3 = param_1[2];
  param_1[2] = lVar6 + uVar8 * 0x1c;
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar12;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e2089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,lVar3 - lVar5,4);
  return;
}


