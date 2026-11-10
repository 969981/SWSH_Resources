/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bfe30; name: FUN_006bfe30
 */


void FUN_006bfe30(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  lVar8 = param_1[1] - *param_1 >> 5;
  uVar7 = lVar8 + 1;
  if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 5) < 0x3ffffffffffffff) {
    uVar4 = lVar3 >> 4;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
      goto LAB_006bfed0;
    }
  }
  else {
    uVar7 = 0x7ffffffffffffff;
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 5,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006bfed0:
  puVar1 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_006c005c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar11 = *param_2;
  plVar10 = (long *)(lVar3 + lVar8 * 0x20);
  *param_2 = 0;
  plVar12 = plVar10 + 4;
  *plVar10 = lVar11;
  lVar8 = param_2[1];
  lVar11 = param_2[3];
  plVar10[2] = param_2[2];
  plVar10[3] = lVar11;
  plVar10[1] = lVar8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar6 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  plVar9 = plVar10;
  if (plVar5 == plVar6) {
    plVar5 = plVar6;
  }
  else {
    do {
      lVar2 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006c005c;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar2 = plVar5[-4];
      plVar5[-4] = 0;
      plVar10 = plVar9 + -4;
      *plVar10 = lVar2;
      lVar2 = plVar5[-3];
      lVar11 = plVar5[-1];
      plVar9[-2] = plVar5[-2];
      plVar9[-1] = lVar11;
      plVar9[-3] = lVar2;
      plVar5 = plVar5 + -4;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      plVar9 = plVar10;
    } while (plVar6 != plVar5);
    plVar6 = (long *)*param_1;
    plVar5 = (long *)param_1[1];
  }
  lVar8 = param_1[2];
  *param_1 = (long)plVar10;
  param_1[1] = (long)plVar12;
  param_1[2] = lVar3 + uVar7 * 0x20;
  if (plVar5 != plVar6) {
    do {
      plVar10 = plVar5 + -4;
      lVar3 = *plVar10;
      *plVar10 = 0;
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + 0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + 0x20) = 0;
        }
        (**(code **)(*(long *)plVar5[-3] + 0x18))((long *)plVar5[-3],lVar3,plVar5[-2],plVar5[-1]);
      }
      plVar5 = plVar10;
    } while (plVar6 != plVar10);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006c003c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,lVar8 - (long)plVar6,8);
  return;
}


