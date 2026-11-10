/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6b10; name: FUN_003c6b10
 */


void FUN_003c6b10(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 8) & 0xffffff;
  if (uVar1 == 0xffffff) {
    uVar1 = 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x18) >> 0x1d & 3;
  if (param_3 != 0) {
    uVar4 = 3;
  }
  uVar2 = FUN_001310c0(*(undefined8 *)(lVar5 + 0x728),*(uint *)(param_1 + 0x18) & 0x1fffffff,param_2
                       ,param_1,uVar1,uVar4);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScElementSim.cpp"
                 ,0x88,"Unable to create broadphase entity because only 32768 shapes are supported")
    ;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1 | 0x80000000;
  lVar5 = *(long *)(lVar5 + 0x1100) + (ulong)(uVar1 >> 0x1d & 3) * 4;
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  return;
}


