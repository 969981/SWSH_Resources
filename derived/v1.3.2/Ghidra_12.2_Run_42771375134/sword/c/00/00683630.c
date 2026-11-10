/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683630; name: FUN_00683630
 */


long FUN_00683630(long *param_1,undefined8 *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  
  *param_4 = 0;
  *param_5 = *param_2;
  if (*(int *)(param_2 + 2) == 0) {
    lVar2 = param_3;
  }
  else {
    plVar1 = (long *)FUN_0067d0e0();
    plVar1 = (long *)(**(code **)(*plVar1 + 0x88))(plVar1,*(undefined4 *)(param_2 + 2));
    lVar2 = 0;
    if (((param_1 != (long *)0x0) && (plVar1 != (long *)0x0)) &&
       (lVar2 = (**(code **)(*param_1 + 0x40))
                          (param_1,1,*param_2,0xffffffff,
                           "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Utility.cpp",
                           0x8d1), lVar2 != 0)) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_3,param_2[1],lVar2,*param_2);
      *param_4 = lVar2;
      *param_5 = param_2[1];
    }
  }
  return lVar2;
}


