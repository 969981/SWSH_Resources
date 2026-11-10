/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db85f0; name: FUN_00db85f0
 */


void FUN_00db85f0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 3;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    plVar6 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
    lVar5 = lVar5 * 8;
    if (plVar7 != plVar6) goto LAB_00db8668;
  }
  else {
    plVar6 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
    lVar5 = lVar2 + lVar5 * 8;
    if (plVar7 != plVar6) {
LAB_00db8668:
      puVar1 = PTR_DAT_02710860;
      lVar8 = lVar5;
      do {
        lVar9 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar9 = plVar7[-1];
        plVar7 = plVar7 + -1;
        *(long *)(lVar8 + -8) = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        lVar8 = lVar8 + -8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (plVar6 != plVar7);
      plVar6 = (long *)*param_1;
      plVar7 = (long *)param_1[1];
      goto LAB_00db8708;
    }
  }
  plVar7 = plVar6;
  lVar8 = lVar5;
LAB_00db8708:
  lVar3 = param_1[2];
  *param_1 = lVar8;
  param_1[1] = lVar5;
  param_1[2] = lVar2 + param_2 * 8;
  if (plVar7 != plVar6) {
    do {
      plVar4 = plVar7 + -1;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        plVar7[-1] = 0;
      }
      plVar7 = plVar4;
    } while (plVar6 != plVar4);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00db877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,lVar3 - (long)plVar6,8);
  return;
}


