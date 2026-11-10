/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b7b10; name: FUN_001b7b10
 */


long FUN_001b7b10(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_30;
  char local_24 [4];
  
  if (DAT_027372f8 == 0) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                 ,0x100,
                 "Particle fluid creation failed. Use PxRegisterParticles to register particle module: returned NULL."
                );
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_001b7990(*(undefined8 *)PTR_DAT_02711048,param_2,param_3 & 1);
    if (lVar1 == 0) {
      uVar3 = FUN_00400880();
      FUN_00400890(uVar3,0x20,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                   ,0x108,"Particle fluid initialization failed: returned NULL.");
    }
    else {
      local_30 = lVar1;
      FUN_003ff570(*(undefined8 *)(param_1 + 8));
      plVar2 = (long *)FUN_001c7280(param_1 + 0x3b8,&local_30,local_24);
      if (local_24[0] == '\0') {
        *plVar2 = local_30;
      }
      FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
    }
  }
  return lVar1;
}


