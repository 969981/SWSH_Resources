/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012b8b0; name: FUN_0012b8b0
 */


void FUN_0012b8b0(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00400d30();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))
                             (plVar2,0xa8,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/software/src/PxsNphaseImplementationContext.cpp"
                              ,0x25d);
  puVar1 = PTR_DAT_02710c88;
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 5) = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[2] = (long)(puVar1 + 0x128);
    *(undefined4 *)(plVar2 + 0xc) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = param_1;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar2[0x14] = param_2;
  }
  return;
}


