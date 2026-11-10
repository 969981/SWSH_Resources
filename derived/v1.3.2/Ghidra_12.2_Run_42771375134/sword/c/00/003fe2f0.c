/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fe2f0; name: FUN_003fe2f0
 */


void FUN_003fe2f0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00400d30();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))
                             (plVar1,0x10,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScSimulationController.cpp"
                              ,0x25);
  *plVar1 = (long)(PTR_DAT_027129b0 + 0x10);
  plVar1[1] = param_1;
  return;
}


