/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012a1c0; name: FUN_0012a1c0
 */


void FUN_0012a1c0(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00400d30();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))
                             (plVar2,0x18,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/software/src/PxsDefaultMemoryManager.cpp"
                              ,0x47);
  puVar1 = PTR_DAT_02710c70;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


