/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b26e0; name: FUN_001b26e0
 */


undefined8 FUN_001b26e0(int param_1,long *param_2,float *param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  code *pcVar9;
  char local_150 [256];
  
  pcVar7 = local_150;
  FUN_001b4e60();
  puVar1 = PTR_DAT_02711028;
  if (param_1 == 0x3040200) {
    if ((0.0 < *param_3) && (0.0 < param_3[1])) {
      iVar8 = *(int *)PTR_DAT_02711028;
      if (iVar8 == 0) {
        FUN_00400be0();
        puVar2 = PTR_DAT_02711030;
        *(undefined8 *)(PTR_DAT_02711030 + 0x20) = 0xffffffffffffffd0;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffc8;
        *(undefined8 *)(puVar2 + 0x60) = 0;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffff80;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffb0;
        *(undefined8 *)puVar2 = 0xffffffffffffff80;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffff80;
        *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffff80;
        *(undefined8 *)(puVar2 + 0x58) = 0;
        *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffff80;
        *(undefined8 *)(puVar2 + 0x70) = 0;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffc0;
        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffc0;
        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffc0;
        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffff80;
        puVar2 = PTR_DAT_02711038;
        *(undefined8 *)(PTR_DAT_02711038 + 0xf0) = 0x18;
        *(undefined8 *)(puVar2 + 0x80) = 0x60;
        *(undefined8 *)(puVar2 + 0x88) = 0;
        *(undefined8 *)(puVar2 + 0x30) = 0x60;
        *(undefined8 *)(puVar2 + 0x38) = 0x60;
        *(undefined8 *)puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(undefined8 *)(puVar2 + 0x60) = 0x28;
        *(undefined8 *)(puVar2 + 0x68) = 0x28;
        *(undefined8 *)(puVar2 + 0x50) = 0;
        *(undefined8 *)(puVar2 + 0x58) = 0x28;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        *(undefined8 *)(puVar2 + 0x20) = 0;
        *(undefined8 *)(puVar2 + 0x28) = 0;
        *(undefined8 *)(puVar2 + 0x40) = 0;
        *(undefined8 *)(puVar2 + 0x48) = 0;
        *(undefined8 *)(puVar2 + 0x70) = 0;
        *(undefined8 *)(puVar2 + 0x78) = 0;
        *(undefined8 *)(puVar2 + 0x90) = 0;
        *(undefined8 *)(puVar2 + 0x98) = 0;
        *(undefined8 *)(puVar2 + 0xa0) = 0;
        *(undefined8 *)(puVar2 + 0xa8) = 0;
        *(undefined8 *)(puVar2 + 0xc0) = 0x20;
        *(undefined8 *)(puVar2 + 200) = 0;
        *(undefined8 *)(puVar2 + 0xd0) = 0x18;
        *(undefined8 *)(puVar2 + 0xd8) = 0;
        *(undefined8 *)(puVar2 + 0xe0) = 0;
        *(undefined8 *)(puVar2 + 0xe8) = 0;
        *(undefined8 *)(puVar2 + 0xb0) = 0x20;
        *(undefined8 *)(puVar2 + 0xb8) = 0x20;
        local_150[0] = -0x70;
        local_150[1] = -1;
        local_150[2] = -1;
        local_150[3] = -1;
        local_150[4] = -1;
        local_150[5] = -1;
        local_150[6] = -1;
        local_150[7] = -1;
        local_150[8] = 'p';
        local_150[9] = -1;
        local_150[10] = -1;
        local_150[0xb] = -1;
        local_150[0xc] = -1;
        local_150[0xd] = -1;
        local_150[0xe] = -1;
        local_150[0xf] = -1;
        local_150[0x10] = 'p';
        local_150[0x11] = -1;
        local_150[0x12] = -1;
        local_150[0x13] = -1;
        local_150[0x14] = -1;
        local_150[0x15] = -1;
        local_150[0x16] = -1;
        local_150[0x17] = -1;
        plVar3 = (long *)FUN_00400d30();
        pcVar9 = *(code **)(*plVar3 + 0x10);
        plVar4 = (long *)FUN_00400d60();
        uVar5 = (**(code **)(*plVar4 + 0x28))();
        pcVar7 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::NpPhysics>::getName() [T = physx::NpPhysics]"
        ;
        if ((uVar5 & 1) == 0) {
          pcVar7 = "<allocation names disabled>";
        }
        uVar6 = (*pcVar9)(plVar3,0xc0,pcVar7,
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpPhysics.cpp"
                          ,0x109);
                    /* try { // try from 001b2848 to 001b285b has its CatchHandler @ 001b2940 */
        FUN_001b1c30(uVar6,param_3,local_150,param_4 & 1,param_5);
        puVar2 = PTR_DAT_02711040;
        *(undefined8 *)PTR_DAT_02711040 = uVar6;
        FUN_001b76d0();
        FUN_0029ce20(*(undefined8 *)PTR_DAT_02711048,*(long *)puVar2 + 0xa8);
        iVar8 = *(int *)puVar1;
      }
      *(int *)puVar1 = iVar8 + 1;
      return *(undefined8 *)PTR_DAT_02711040;
    }
    plVar3 = (long *)(**(code **)(*param_2 + 8))(param_2);
    pcVar9 = *(code **)(*plVar3 + 0x10);
    pcVar7 = "Scale invalid.\n";
    uVar6 = 0xfa;
  }
  else {
    FUN_00401a40(local_150,0x100,"Wrong version: PhysX version is 0x%08x, tried to create 0x%08x",
                 0x3040200,param_1);
    plVar3 = (long *)(**(code **)(*param_2 + 8))(param_2);
    pcVar9 = *(code **)(*plVar3 + 0x10);
    uVar6 = 0xf4;
  }
  (*pcVar9)(plVar3,4,pcVar7,
            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpPhysics.cpp"
            ,uVar6);
  return 0;
}


