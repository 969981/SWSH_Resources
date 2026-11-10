/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00170190; name: FUN_00170190
 */


long FUN_00170190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,byte param_11,byte param_12,byte param_13)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00400d30();
  lVar2 = (**(code **)(*plVar1 + 0x10))
                    (plVar1,0x310,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DyDynamics.cpp"
                     ,0x84);
  if (lVar2 != 0) {
    FUN_00170370(param_1,lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11 & 1,param_12 & 1,param_13 & 1);
  }
  return lVar2;
}


