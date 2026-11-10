/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071a680; name: FUN_0071a680
 */


void FUN_0071a680(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_02710860;
  puVar5 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 5)) {
    while( true ) {
      lVar3 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar6 + 0x80)) break;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      param_2 = param_2 - 1;
      *puVar5 = 0xcbf29ce484222645;
      puVar5[1] = &DAT_01d38550;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar5 = (undefined8 *)(param_1[1] + 0x20);
      param_1[1] = (long)puVar5;
      if (param_2 == 0) {
        return;
      }
    }
LAB_0071a948:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = (long)puVar5 - *param_1 >> 5;
  uVar8 = lVar6 + param_2;
  if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 5) < 0x3ffffffffffffff) {
    uVar4 = lVar3 >> 4;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      lVar3 = 0;
      goto LAB_0071a7a4;
    }
  }
  else {
    uVar8 = 0x7ffffffffffffff;
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 5,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0071a7a4:
  puVar1 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)(lVar3 + lVar6 * 0x20);
  puVar5 = puVar7;
  do {
    lVar10 = param_1[3];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0071a948;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    param_2 = param_2 - 1;
    *puVar5 = 0xcbf29ce484222645;
    puVar5[1] = &DAT_01d38550;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 4;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  } while (param_2 != 0);
  lVar6 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 == lVar6) {
    lVar10 = lVar6;
  }
  else {
    lVar9 = 0;
    do {
      lVar11 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0071a948;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar11 = lVar10 + lVar9;
      *(undefined8 *)((long)puVar7 + lVar9 + -0x20) = *(undefined8 *)(lVar11 + -0x20);
      *(undefined8 *)((long)puVar7 + lVar9 + -0x18) = *(undefined8 *)(lVar11 + -0x18);
      *(undefined8 *)((long)puVar7 + lVar9 + -0x10) = *(undefined8 *)(lVar11 + -0x10);
      lVar11 = *(long *)(lVar11 + -8);
      *(long *)((long)puVar7 + lVar9 + -8) = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar9 = lVar9 + -0x20;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (lVar6 - lVar10 != lVar9);
    lVar6 = *param_1;
    puVar7 = (undefined8 *)((long)puVar7 + lVar9);
    lVar10 = param_1[1];
  }
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar5;
  lVar9 = param_1[2];
  param_1[2] = lVar3 + uVar8 * 0x20;
  while (lVar3 = lVar10, lVar3 != lVar6) {
    lVar10 = lVar3 + -0x20;
    if (*(long *)(lVar3 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -8) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071a928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar9 - lVar6,8);
  return;
}


