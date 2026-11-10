/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071d840; name: FUN_0071d840
 */


void FUN_0071d840(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar12 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
      goto LAB_0071d900;
    }
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x18,8);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0071d900:
  puVar2 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0071dabc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
  puVar13 = (undefined8 *)(lVar8 + lVar6 * 8);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar6) {
    puVar7 = puVar13;
    lVar3 = lVar6;
  }
  else {
    lVar10 = 0;
    do {
      lVar11 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0071dabc;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar11 = lVar3 + lVar10;
      lVar5 = *(long *)(lVar11 + -0x18);
      *(long *)((long)puVar13 + lVar10 + -0x18) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(lVar11 + -0x10);
      *(long *)((long)puVar13 + lVar10 + -0x10) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)((long)puVar13 + lVar10 + -8) = *(undefined8 *)(lVar11 + -8);
      lVar10 = lVar10 + -0x18;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while (lVar6 - lVar3 != lVar10);
    lVar6 = *param_1;
    puVar7 = (undefined8 *)((long)puVar13 + lVar10);
    lVar3 = param_1[1];
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar7;
  param_1[1] = (long)(puVar13 + 3);
  param_1[2] = lVar8 + uVar12 * 0x18;
  while (lVar8 = lVar3, lVar8 != lVar6) {
    if (*(long *)(lVar8 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x10) = 0;
    }
    lVar3 = lVar8 + -0x18;
    if (*(long *)(lVar8 + -0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + -0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + -0x18) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071da98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar10 - lVar6,8);
  return;
}


