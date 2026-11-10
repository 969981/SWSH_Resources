/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006834c0; name: FUN_006834c0
 */


long FUN_006834c0(float param_1,long *param_2,long *param_3,long param_4,int param_5,long *param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long local_58;
  
  *param_6 = 0;
  if (param_4 == 0) {
    return 0;
  }
  if (param_5 == 0) {
    return param_4;
  }
  plVar1 = (long *)FUN_0067d0e0();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x88))(plVar1,param_5);
  if ((plVar1 != (long *)0x0) &&
     (local_58 = (**(code **)(*plVar1 + 0x28))(plVar1,param_4,*param_3), param_2 != (long *)0x0)) {
    lVar2 = (**(code **)(*param_2 + 0x40))
                      (param_2,1,local_58,0xffffffff,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Utility.cpp",0x885);
    if (lVar2 == 0) goto LAB_00683600;
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_4,*param_3,lVar2,&local_58);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
      pcVar5 = *(code **)(*param_2 + 0x48);
      uVar4 = 0x89f;
    }
    else {
      if ((float)local_58 < (float)*param_3 * param_1) {
        param_3[1] = local_58;
        *(int *)(param_3 + 2) = param_5;
        param_4 = lVar2;
        goto LAB_00683600;
      }
      *(undefined4 *)(param_3 + 2) = 0;
      pcVar5 = *(code **)(*param_2 + 0x48);
      uVar4 = 0x897;
    }
    (*pcVar5)(param_2,lVar2,"C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Utility.cpp",
              uVar4);
  }
  lVar2 = 0;
LAB_00683600:
  *param_6 = lVar2;
  return param_4;
}


