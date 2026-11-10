/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067d350; name: FUN_0067d350
 */


undefined8 FUN_0067d350(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_50;
  
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if ((int)param_1[4] != 1) {
    return 1;
  }
  if (param_2 == 0) {
    if (param_1[3] != 0) goto LAB_0067d3a8;
    plVar1 = (long *)FUN_005bf860();
    param_2 = (**(code **)(*plVar1 + 0x60))();
    lVar3 = *param_1;
  }
  else {
    lVar3 = *param_1;
  }
  (**(code **)(lVar3 + 0x28))(param_1,param_2);
LAB_0067d3a8:
  FUN_0067d4a0(param_1);
  plVar1 = (long *)param_1[3];
  lVar3 = (**(code **)(*plVar1 + 0x38))
                    (plVar1,0x18,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp",0x21b
                    );
  FUN_0067ded0(lVar3,param_1[3]);
  param_1[9] = lVar3;
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x38))
                    ((long *)param_1[3],0x38,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp",0x18d
                    );
  FUN_00683810(lVar3,param_1[3]);
  param_1[8] = lVar3;
  if ((lVar3 == 0) || (uVar2 = FUN_00683a20(lVar3), (uVar2 & 1) == 0)) {
    return 0;
  }
  plVar1 = (long *)param_1[3];
  (**(code **)(*plVar1 + 0x58))(plVar1,auStack_78);
  FUN_005c59e0(auStack_f8,0x80,local_70);
  FUN_005c59e0(auStack_178,0x80,local_50);
  return 1;
}


