/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773f70; name: FUN_00773f70
 */


void FUN_00773f70(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x100) + uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(plVar1[9] + 0x10))();
      }
      if ((int)plVar1[0xd] == 2) {
        (**(code **)(*plVar1 + 0x70))(plVar1,uVar2 != *(long *)(param_1 + 0x108) - 1U);
      }
      (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x108));
  }
  return;
}


