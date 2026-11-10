/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9960; name: FUN_003e9960
 */


void FUN_003e9960(long param_1,int param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x850);
  uVar1 = uVar2 + param_2;
  uVar4 = (uint)((float)uVar1 * 1.5);
  if ((*(uint *)(param_1 + 0x854) & 0x7fffffff) < uVar4) {
    FUN_003f32e0(param_1 + 0x848,uVar4);
  }
  *(uint *)(param_1 + 0x850) = uVar1;
  *param_3 = *(long *)(param_1 + 0x848) + (ulong)uVar2 * 0x28;
  plVar3 = *(long **)(param_1 + 0x858);
  if ((*(uint *)((long)plVar3 + 0xc) & 0x7fffffff) < uVar4) {
    FUN_003f3490(plVar3,uVar4);
    plVar3 = *(long **)(param_1 + 0x858);
  }
  *(uint *)(plVar3 + 1) = uVar1;
  *param_4 = *plVar3 + (ulong)uVar2 * 0xc;
  return;
}


