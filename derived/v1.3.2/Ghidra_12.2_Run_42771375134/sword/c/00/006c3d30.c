/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c3d30; name: FUN_006c3d30
 */


void FUN_006c3d30(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  lVar4 = param_1[1] - *param_1 >> 3;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    plVar5 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    plVar7 = (long *)(lVar4 * 8);
    if (plVar6 != plVar5) goto LAB_006c3da8;
  }
  else {
    plVar5 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    plVar7 = (long *)(lVar2 + lVar4 * 8);
    if (plVar6 != plVar5) {
LAB_006c3da8:
      puVar1 = PTR_DAT_02710860;
      plVar8 = plVar7;
      do {
        lVar9 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar9 = plVar6[-1];
        plVar6[-1] = 0;
        plVar6 = plVar6 + -1;
        plVar8 = plVar8 + -1;
        *plVar8 = lVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (plVar5 != plVar6);
      plVar5 = (long *)*param_1;
      plVar6 = (long *)param_1[1];
      goto LAB_006c3e30;
    }
  }
  plVar6 = plVar5;
  plVar8 = plVar7;
LAB_006c3e30:
  lVar4 = param_1[2];
  *param_1 = (long)plVar8;
  param_1[1] = (long)plVar7;
  param_1[2] = lVar2 + param_2 * 8;
  while (plVar6 != plVar5) {
    plVar6 = plVar6 + -1;
    puVar3 = (undefined8 *)*plVar6;
    *plVar6 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
    }
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006c3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar5,lVar4 - (long)plVar5,8);
  return;
}


