/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400a80; name: FUN_00400a80
 */


undefined8 FUN_00400a80(int param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  
  puVar2 = PTR_DAT_027129e0;
  if (param_1 == 0x1000000) {
    if (*(long *)PTR_DAT_027129e0 == 0) {
      lVar4 = (**(code **)(*param_3 + 0x10))
                        (param_3,0x1d8,"Foundation",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/PsFoundation.cpp"
                         ,0x88);
      *(long *)puVar2 = lVar4;
      if (lVar4 != 0) {
        FUN_004000c0(lVar4,param_2,param_3);
        puVar3 = PTR_DAT_02712a00;
        uVar5 = *(undefined8 *)puVar2;
        *(undefined4 *)PTR_DAT_027129f8 = 1;
        iVar1 = *(int *)puVar3;
        iVar9 = 1;
        if (iVar1 != -1) {
          iVar9 = iVar1 + 1;
        }
        *(int *)puVar3 = iVar9;
        return uVar5;
      }
      pcVar8 = *(code **)(*param_2 + 0x10);
      pcVar6 = "Memory allocation for foundation object failed.";
      uVar7 = 0x99;
      uVar5 = 0x20;
    }
    else {
      pcVar8 = *(code **)(*param_2 + 0x10);
      pcVar6 = "Foundation object exists already. Only one instance per process can be created.";
      uVar7 = 0xa0;
      uVar5 = 8;
    }
  }
  else {
    pcVar6 = operator_new__(0x100);
    FUN_00401a40(pcVar6,0x100,"Wrong version: foundation version is 0x%08x, tried to create 0x%08x",
                 0x1000000,param_1);
    pcVar8 = *(code **)(*param_2 + 0x10);
    uVar5 = 4;
    uVar7 = 0x7f;
  }
  (*pcVar8)(param_2,uVar5,pcVar6,
            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/PsFoundation.cpp"
            ,uVar7);
  return 0;
}


