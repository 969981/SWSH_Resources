/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01493240; name: FUN_01493240
 */


void FUN_01493240(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(int *)(*(long *)(param_1 + 0x98) + 0x5cc) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0149329c:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      lVar2 = FUN_01481a10();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar5 = puVar5 + -10;
          goto LAB_014932a0;
        }
      }
      goto LAB_0149329c;
    }
  }
LAB_014932a0:
  switch(*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x5cc)) {
  case 1:
  case 2:
    FUN_014a2300(puVar5);
    uVar3 = FUN_014a22e0(puVar5);
    if ((uVar3 & 1) == 0) {
      FUN_0148a1a0(*(undefined8 *)(param_1 + 0x80));
      goto switchD_014932c4_caseD_5;
    }
    FUN_01485970(*(undefined8 *)(param_1 + 0x98),1);
    FUN_01485840(*(undefined8 *)(param_1 + 0x98),1,0);
  case 4:
    uVar4 = 5;
    break;
  case 3:
    uVar4 = 0x200000005;
    break;
  default:
    goto switchD_014932c4_caseD_5;
  case 6:
    FUN_0148b1e0(*(undefined8 *)(param_1 + 0x80));
    goto switchD_014932c4_caseD_5;
  case 8:
    FUN_014a23f0(puVar5);
    goto switchD_014932c4_caseD_5;
  case 9:
    if (*(int *)puVar5[0xc] == 7) {
      *(undefined4 *)(param_1 + 0x78) = 2;
      FUN_01493590(param_1,0x1c610abe15c6794b);
      goto switchD_014932c4_caseD_5;
    }
    uVar4 = 0x500000005;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar4;
switchD_014932c4_caseD_5:
  *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x5cc) = 0;
  return;
}


