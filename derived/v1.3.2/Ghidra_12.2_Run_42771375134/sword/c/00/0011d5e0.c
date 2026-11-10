/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d5e0; name: FUN_0011d5e0
 */


void FUN_0011d5e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)FUN_00400d30();
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 0x10))
                     (plVar1,0x20,"NonTrackedAlloc",
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/software/src/PxsContext.cpp"
                      ,0xba);
  *puVar2 = param_2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined1 *)((long)puVar2 + 0x1c) = 1;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined8 **)(param_1 + 0xa48) = puVar2;
  return;
}


