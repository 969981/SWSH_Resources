/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0be00; name: FUN_00a0be00
 */


void FUN_00a0be00(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar2 = param_1[1];
  if (0xbf < uVar2) {
    uVar4 = 0;
    plVar5 = (long *)(param_2 + 0x90);
    do {
      if (*plVar5 != 0) {
        (**(code **)(*(long *)plVar5[-10] + 0x18))((long *)plVar5[-10],plVar5[-2],*plVar5 * 0x28,8);
      }
      plVar1 = (long *)plVar5[-4];
      if (plVar5 + -8 == plVar1) {
        pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00a0be90:
        (*pcVar3)();
      }
      else if (plVar1 != (long *)0x0) {
        pcVar3 = *(code **)(*plVar1 + 0x28);
        goto LAB_00a0be90;
      }
      plVar1 = (long *)plVar5[-0xc];
      if (plVar5 + -0x10 == plVar1) {
        pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00a0bebc:
        (*pcVar3)();
      }
      else if (plVar1 != (long *)0x0) {
        pcVar3 = *(code **)(*plVar1 + 0x28);
        goto LAB_00a0bebc;
      }
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 0x18;
    } while (uVar4 < uVar2 / 0xc0);
    uVar2 = param_1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x00a0bef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,uVar2,param_1[2]);
  return;
}


