/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fbb60; name: FUN_001fbb60
 */


void FUN_001fbb60(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_e0 [128];
  
  param_1 = param_1 + 0x20;
  uVar2 = FUN_003e73c0(param_1);
  lVar3 = FUN_003de060(param_1);
  uVar1 = FUN_003de070(param_1);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + uVar5 * 8) + 0x18) >> 0x1e < 3) {
                    /* WARNING: Subroutine does not return */
        memset(auStack_e0,0,0x80);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  FUN_003de080(param_1);
  if ((uVar2 & 1) != 0) {
    uVar4 = FUN_00400880();
    FUN_00400890(uVar4,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x88a,
                 "At least one object is out of the broadphase bounds. To manage those objects, define a PxBroadPhaseCallback for each used client."
                );
  }
  return;
}


