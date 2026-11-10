/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398040; name: FUN_00398040
 */


void FUN_00398040(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 5) & 0x7ffffff;
  if ((param_2 & 0x1f) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(uint *)(param_1 + 8) < uVar3) {
    plVar1 = (long *)FUN_00400d30();
    lVar2 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,uVar3 << 2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                       ,0x15f);
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar2 + (ulong)*(uint *)(param_1 + 8) * 4),0,
           (ulong)((uVar3 - *(uint *)(param_1 + 8)) * 4));
  }
  return;
}


