/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00396a50; name: FUN_00396a50
 */


void FUN_00396a50(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                 ,0x16a,"PrunerStructure::importExtraData: Pruning structure is invalid!");
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(uint *)(param_1 + 0xc) * 0x1c;
    *(ulong *)(param_1 + 0x18) = uVar2;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(uint *)(param_1 + 0x28) * 4;
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(uint *)(param_1 + 0x10) * 0x1c;
    *(ulong *)(param_1 + 0x20) = uVar2;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(uint *)(param_1 + 0x2c) * 4;
    *(ulong *)(param_1 + 0x38) = uVar2;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_2 + 8) = uVar2 + (ulong)*(uint *)(param_1 + 0x40) * 8;
    *(ulong *)(param_1 + 0x48) = uVar2;
  }
  return;
}


