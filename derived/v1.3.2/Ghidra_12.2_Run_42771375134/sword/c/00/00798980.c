/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00798980; name: FUN_00798980
 */


void FUN_00798980(undefined4 param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_2 + 0x290);
  uVar1 = *param_3;
  if ((uVar2 - 1 & uVar2) == 0) {
    plVar3 = *(long **)(*(long *)(param_2 + 0x288) + (uVar2 - 1 & uVar1) * 8);
    do {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3[1] != uVar1);
    } while (plVar3[2] != uVar1);
  }
  else {
    uVar4 = uVar1;
    if (uVar2 <= uVar1) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      uVar4 = uVar1 - uVar4 * uVar2;
    }
    plVar3 = *(long **)(*(long *)(param_2 + 0x288) + uVar4 * 8);
    do {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3[1] != uVar1);
    } while (plVar3[2] != uVar1);
  }
  *(undefined4 *)((long)plVar3 + 0x30) = param_1;
  return;
}


