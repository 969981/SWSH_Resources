/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d1c80; name: FUN_001d1c80
 */


undefined8 FUN_001d1c80(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    uVar1 = FUN_003de040(param_1 + 0x10);
    return uVar1;
  }
  uVar1 = FUN_00400880();
  FUN_00400890(uVar1,2,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbScene.cpp"
               ,0x55c,
               "PxScene::removeBroadPhaseRegion() not allowed while simulation is running. Call will be ignored."
              );
  return 0;
}


