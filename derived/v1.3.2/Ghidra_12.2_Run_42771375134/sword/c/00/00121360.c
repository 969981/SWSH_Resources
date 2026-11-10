/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00121360; name: FUN_00121360
 */


long FUN_00121360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00400d30();
  lVar2 = (**(code **)(*plVar1 + 0x10))
                    (plVar1,0x1d8,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/software/src/PxsCCD.cpp"
                     ,0xdb);
  if (lVar2 != 0) {
    FUN_00120750(lVar2,param_1,param_2,param_3);
  }
  return lVar2;
}


