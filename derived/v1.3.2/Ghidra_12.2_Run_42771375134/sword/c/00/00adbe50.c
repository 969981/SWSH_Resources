/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adbe50; name: FUN_00adbe50
 */


void FUN_00adbe50(long *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_38;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) != 0) {
    FUN_00ac8e40(param_1,param_2 & 1,param_3);
    if (param_3 == 0) {
      local_38 = 9;
      FUN_00727490(param_1[0xba],param_2 & 1,&local_38);
      lVar2 = param_1[0xba];
      local_38 = 10;
    }
    else {
      lVar2 = param_1[0xba];
      if (param_3 != 1) {
        local_38 = 9;
        FUN_00727490(lVar2,param_2 & 1,&local_38);
        local_38 = 10;
        FUN_00727520(param_1[0xba],param_2 & 1,&local_38);
        lVar2 = param_1[0xba];
      }
      local_38 = 0x11;
      FUN_00727490(lVar2,param_2 & 1,&local_38);
      lVar2 = param_1[0xba];
      local_38 = 0x12;
    }
    FUN_00727520(lVar2,param_2 & 1,&local_38);
  }
  return;
}


