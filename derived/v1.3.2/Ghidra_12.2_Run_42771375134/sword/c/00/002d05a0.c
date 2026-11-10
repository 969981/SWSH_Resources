/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d05a0; name: FUN_002d05a0
 */


undefined8 FUN_002d05a0(void)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  plVar2 = (long *)FUN_00400d30();
  pcVar6 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::Collection>::getName() [T = physx::Cm::Collection]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  uVar5 = (*pcVar6)(plVar2,0x78,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/Common/src/CmCollection.cpp"
                    ,0xd8);
                    /* try { // try from 002d0600 to 002d0603 has its CatchHandler @ 002d0614 */
  FUN_002d0640();
  return uVar5;
}


