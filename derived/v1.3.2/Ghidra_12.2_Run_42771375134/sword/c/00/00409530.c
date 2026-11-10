/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409530; name: FUN_00409530
 */


void FUN_00409530(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(ushort *)(param_1 + 0xb) - 1, *(ushort *)(param_1 + 0xb) != 0 && iVar1 != 0)) {
    *(short *)(param_1 + 0xb) = (short)iVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  if (param_1[8] == 0) {
    if (*param_2 < 1) {
      *(undefined4 *)(param_1 + 10) = 0x3f800000;
      (**(code **)(*param_1 + 0x28))(0x3f800000,param_1);
    }
    else {
      local_38 = (undefined4)param_1[10];
      iStack_2c = param_2[1];
      local_48 = param_1 + 5;
      local_40 = 0x8000000;
      local_34 = 0x3f800000;
      local_28 = 0x100;
      local_26 = 0;
      local_30 = *param_2;
      lVar2 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_48,1,0);
      param_1[8] = lVar2;
      if (lVar2 == 0) {
        (**(code **)(*param_1 + 0x60))(local_34,param_1,local_40,1);
      }
    }
  }
  else {
    FUN_004be340(0x3f800000,*(undefined8 *)PTR_DAT_02712b18,param_1[8],0x8000000,*param_2,param_2[1]
                 ,0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


