/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005be4a0; name: FUN_005be4a0
 */


void FUN_005be4a0(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    plVar1 = (long *)param_2[1];
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)(param_1 + 0x48);
      if (((long *)*puVar4 != param_2) || ((long *)*puVar4 == (long *)0x0)) goto LAB_005be510;
      if (plVar1 == (long *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        *plVar1 = 0;
        *puVar4 = plVar1;
      }
    }
    else if (plVar1 == (long *)0x0) {
      if ((*(long **)(param_1 + 0x50) != param_2) || (*(long **)(param_1 + 0x50) == (long *)0x0))
      goto LAB_005be510;
      *(undefined8 *)(lVar3 + 8) = 0;
      *(long *)(param_1 + 0x50) = lVar3;
    }
    else {
      *plVar1 = lVar3;
      *(long **)(lVar3 + 8) = plVar1;
    }
    *param_2 = 0;
    param_2[1] = 0;
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
  }
LAB_005be510:
  if (*(long *)(param_1 + 0x20) == 0) {
    *(long **)(param_1 + 0x20) = param_2;
  }
  else {
    *(long **)(*(long *)(param_1 + 0x28) + 8) = param_2;
    *param_2 = *(long *)(param_1 + 0x28);
  }
  *(long **)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  *(undefined1 *)(param_2 + 3) = 0;
  uVar2 = 0;
  if (*(ulong *)(param_1 + 0x110) != 0) {
    uVar2 = (ulong)param_2[2] / *(ulong *)(param_1 + 0x110);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x88) + uVar2 * 8);
  *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + -1;
  return;
}


