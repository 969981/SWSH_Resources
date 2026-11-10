/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6240; name: FUN_006b6240
 */


void FUN_006b6240(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  lVar4 = param_1[1] - *param_1 >> 5;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    plVar5 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    plVar7 = (long *)(lVar4 * 0x20);
    if (plVar6 != plVar5) goto LAB_006b62b8;
  }
  else {
    plVar5 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    plVar7 = (long *)(lVar2 + lVar4 * 0x20);
    if (plVar6 != plVar5) {
LAB_006b62b8:
      puVar1 = PTR_DAT_02710860;
      plVar8 = plVar7;
      do {
        lVar10 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar10 = plVar6[-4];
        plVar6[-4] = 0;
        plVar9 = plVar8 + -4;
        *plVar9 = lVar10;
        lVar10 = plVar6[-3];
        lVar3 = plVar6[-1];
        plVar8[-2] = plVar6[-2];
        plVar8[-1] = lVar3;
        plVar8[-3] = lVar10;
        plVar6 = plVar6 + -4;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        plVar8 = plVar9;
      } while (plVar5 != plVar6);
      plVar5 = (long *)*param_1;
      plVar6 = (long *)param_1[1];
      goto LAB_006b6350;
    }
  }
  plVar6 = plVar5;
  plVar9 = plVar7;
LAB_006b6350:
  lVar4 = param_1[2];
  *param_1 = (long)plVar9;
  param_1[1] = (long)plVar7;
  param_1[2] = lVar2 + param_2 * 0x20;
  if (plVar6 != plVar5) {
    do {
      plVar7 = plVar6 + -4;
      lVar2 = *plVar7;
      *plVar7 = 0;
      if (lVar2 != 0) {
        FUN_006b5410(lVar2);
        (**(code **)(*(long *)plVar6[-3] + 0x18))((long *)plVar6[-3],lVar2,plVar6[-2],plVar6[-1]);
      }
      plVar6 = plVar7;
    } while (plVar5 != plVar7);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b63d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar5,lVar4 - (long)plVar5,8);
  return;
}


