/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01335ea0; name: FUN_01335ea0
 */


void FUN_01335ea0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4 >> 3) * -0x5555555555555555) < param_2) {
    lVar5 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x18,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar1 = PTR_DAT_02710860;
    lVar5 = lVar2 + (lVar5 - lVar4 >> 3) * 8;
    plVar6 = (long *)*param_1;
    lVar4 = lVar5;
    if ((long *)param_1[1] == plVar6) {
      plVar7 = plVar6;
    }
    else {
      plVar7 = (long *)param_1[1];
      do {
        lVar8 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar8 = plVar7[-3];
        plVar9 = plVar7 + -3;
        *(long *)(lVar4 + -0x18) = lVar8;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        lVar8 = plVar7[-1];
        *(long *)(lVar4 + -0x10) = plVar7[-2];
        *(long *)(lVar4 + -8) = lVar8;
        lVar4 = lVar4 + -0x18;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        plVar7 = plVar9;
      } while (plVar6 != plVar9);
      plVar6 = (long *)*param_1;
      plVar7 = (long *)param_1[1];
    }
    lVar3 = param_1[2];
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar2 + param_2 * 0x18;
    if (plVar7 != plVar6) {
      do {
        plVar9 = plVar7 + -3;
        if (*plVar9 != 0) {
          (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
          plVar7[-3] = 0;
        }
        plVar7 = plVar9;
      } while (plVar6 != plVar9);
    }
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01336040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,lVar3 - (long)plVar6,8);
      return;
    }
  }
  return;
}


