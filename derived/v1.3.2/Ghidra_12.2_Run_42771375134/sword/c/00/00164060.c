/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00164060; name: FUN_00164060
 */


void FUN_00164060(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00400d30();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))
                             (plVar1,8,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DySolverControl.cpp"
                              ,0xb1);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)(PTR_DAT_02710e78 + 0x10);
  }
  return;
}


