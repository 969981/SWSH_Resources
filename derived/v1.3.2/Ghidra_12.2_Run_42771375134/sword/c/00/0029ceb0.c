/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029ceb0; name: FUN_0029ceb0
 */


void FUN_0029ceb0(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0xb8) + uVar3 * 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


