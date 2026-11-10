/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01335ce0; name: FUN_01335ce0
 */


void FUN_01335ce0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 5;
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    plVar6 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
    lVar5 = lVar5 * 0x20;
    if (plVar7 != plVar6) goto LAB_01335d58;
  }
  else {
    plVar6 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
    lVar5 = lVar3 + lVar5 * 0x20;
    if (plVar7 != plVar6) {
LAB_01335d58:
      puVar2 = PTR_DAT_02710860;
      lVar8 = lVar5;
      do {
        lVar9 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar9 = plVar7[-4];
        plVar10 = plVar7 + -4;
        *(long *)(lVar8 + -0x20) = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        lVar9 = plVar7[-3];
        lVar1 = plVar7[-2];
        *(char *)(lVar8 + -8) = (char)plVar7[-1];
        *(long *)(lVar8 + -0x18) = lVar9;
        *(long *)(lVar8 + -0x10) = lVar1;
        lVar8 = lVar8 + -0x20;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        plVar7 = plVar10;
      } while (plVar6 != plVar10);
      plVar6 = (long *)*param_1;
      plVar7 = (long *)param_1[1];
      goto LAB_01335e08;
    }
  }
  plVar7 = plVar6;
  lVar8 = lVar5;
LAB_01335e08:
  lVar4 = param_1[2];
  *param_1 = lVar8;
  param_1[1] = lVar5;
  param_1[2] = lVar3 + param_2 * 0x20;
  if (plVar7 != plVar6) {
    do {
      plVar10 = plVar7 + -4;
      if (*plVar10 != 0) {
        (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
        plVar7[-4] = 0;
      }
      plVar7 = plVar10;
    } while (plVar6 != plVar10);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01335e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,lVar4 - (long)plVar6,8);
  return;
}


