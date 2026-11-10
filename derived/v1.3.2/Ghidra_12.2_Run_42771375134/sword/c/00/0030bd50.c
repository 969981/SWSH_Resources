/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030bd50; name: FUN_0030bd50
 */


long * FUN_0030bd50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  
  plVar2 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::D6Joint>::getName() [T = physx::Ext::D6Joint]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar2 = (long *)(*pcVar7)(plVar2,0x78,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtD6Joint.cpp"
                             ,0x36);
                    /* try { // try from 0030bdd8 to 0030bdfb has its CatchHandler @ 0030be5c */
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_0030be90(plVar2,uVar5,param_2,param_3,param_4,param_5);
  lVar6 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,plVar2 + 3,PTR_PTR_02712208,0x180);
  plVar2[0xc] = lVar6;
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


