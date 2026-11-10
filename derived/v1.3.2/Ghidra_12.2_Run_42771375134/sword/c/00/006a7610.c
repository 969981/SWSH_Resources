/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a7610; name: FUN_006a7610
 */


void FUN_006a7610(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_02710860;
  puVar8 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar8)) {
    while( true ) {
      lVar2 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar6 + 0x80)) break;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar8 = *param_3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar8 = (undefined1 *)(param_1[1] + 1);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar8;
      if (param_2 == 0) {
        return;
      }
    }
LAB_006a7810:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *param_1;
  puVar7 = puVar8 + (param_2 - lVar6);
  if ((long)puVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar4 = param_1[2] - lVar6;
  if (uVar4 < 0x3fffffffffffffff) {
    puVar5 = (undefined1 *)(uVar4 * 2);
    if (puVar7 <= puVar5) {
      puVar7 = puVar5;
    }
    if (puVar7 != (undefined1 *)0x0) goto LAB_006a76d8;
  }
  else {
    puVar7 = (undefined1 *)0x7fffffffffffffff;
LAB_006a76d8:
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],puVar7,1);
    if (lVar2 != 0) goto LAB_006a7708;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB_006a7708:
  puVar1 = PTR_DAT_02710860;
  puVar8 = puVar8 + (lVar2 - lVar6);
  puVar5 = puVar8;
  do {
    lVar10 = param_1[3];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006a7810;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar9 = puVar5 + 1;
    *puVar5 = *param_3;
    param_2 = param_2 - 1;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    puVar5 = puVar9;
  } while (param_2 != 0);
  lVar6 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 != lVar6) {
    do {
      lVar11 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006a7810;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar8 = puVar8 + -1;
      *puVar8 = *(undefined1 *)(lVar10 + -1);
      lVar10 = lVar10 + -1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar6 != lVar10);
    lVar6 = *param_1;
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar8;
  param_1[1] = (long)puVar9;
  param_1[2] = (long)(puVar7 + lVar2);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a77f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar10 - lVar6,1);
  return;
}


