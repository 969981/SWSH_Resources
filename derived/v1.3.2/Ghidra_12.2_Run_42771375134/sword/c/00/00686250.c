/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00686250; name: FUN_00686250
 */


undefined8 FUN_00686250(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1 + 1;
  if (iVar1 != 0) {
    return 1;
  }
  lVar2 = (**(code **)(*(long *)param_1[1] + 0x38))
                    ((long *)param_1[1],0x170,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_VFS_Impl.cpp",0x395);
  FUN_00687310(lVar2,param_1[1],param_1);
  param_1[0x1d] = lVar2;
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 0;
  }
  *(undefined1 *)(lVar2 + 0x8c) = 1;
  return 1;
}


