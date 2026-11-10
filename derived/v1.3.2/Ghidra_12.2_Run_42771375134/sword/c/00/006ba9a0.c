/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ba9a0; name: FUN_006ba9a0
 */


undefined8 FUN_006ba9a0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  iVar1 = FUN_006be830(param_2);
  puVar2 = (ulong *)FUN_006be870(param_2);
  if (iVar1 == 1) {
    uVar4 = *(ulong *)(param_1 + 0x68);
    uVar3 = *puVar2;
    if ((uVar4 - 1 & uVar4) == 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x60) + (uVar4 - 1 & uVar3) * 8);
      do {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5[1] != uVar3);
      } while (plVar5[2] != uVar3);
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
      plVar5 = *(long **)(*(long *)(param_1 + 0x60) + uVar6 * 8);
      do {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5[1] != uVar3);
      } while (plVar5[2] != uVar3);
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    uVar4 = *(ulong *)(param_1 + 0x10);
    uVar3 = *puVar2;
    if ((uVar4 - 1 & uVar4) == 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 8) + (uVar4 - 1 & uVar3) * 8);
      do {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5[1] != uVar3);
      } while (plVar5[2] != uVar3);
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
      plVar5 = *(long **)(*(long *)(param_1 + 8) + uVar6 * 8);
      do {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5[1] != uVar3);
      } while (plVar5[2] != uVar3);
    }
  }
  return *(undefined8 *)((long)plVar5 + 0x30);
}


