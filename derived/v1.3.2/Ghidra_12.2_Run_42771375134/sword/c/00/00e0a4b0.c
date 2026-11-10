/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e0a4b0; name: FUN_00e0a4b0
 */


void FUN_00e0a4b0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 4)) {
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 4;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 4,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    plVar6 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    lVar5 = lVar5 * 0x10;
    lVar7 = lVar5;
    if (plVar8 != plVar6) goto LAB_00e0a52c;
  }
  else {
    plVar6 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    lVar5 = lVar2 + lVar5 * 0x10;
    lVar7 = lVar5;
    if (plVar8 != plVar6) {
LAB_00e0a52c:
      puVar1 = PTR_DAT_02710860;
      lVar5 = 0;
      do {
        lVar9 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar9 = *(long *)((long)plVar8 + lVar5 + -0x10);
        *(long *)(lVar7 + lVar5 + -0x10) = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        *(undefined1 *)(lVar7 + lVar5 + -8) = *(undefined1 *)((long)plVar8 + lVar5 + -8);
        lVar5 = lVar5 + -0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while ((long)plVar6 - (long)plVar8 != lVar5);
      plVar6 = (long *)*param_1;
      lVar5 = lVar7 + lVar5;
      plVar8 = (long *)param_1[1];
      goto LAB_00e0a5e4;
    }
  }
  lVar7 = lVar5;
  plVar8 = plVar6;
LAB_00e0a5e4:
  lVar3 = param_1[2];
  *param_1 = lVar5;
  param_1[1] = lVar7;
  param_1[2] = lVar2 + param_2 * 0x10;
  if (plVar8 != plVar6) {
    do {
      plVar4 = plVar8 + -2;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        plVar8[-2] = 0;
      }
      plVar8 = plVar4;
    } while (plVar6 != plVar4);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e0a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,lVar3 - (long)plVar6,8);
  return;
}


