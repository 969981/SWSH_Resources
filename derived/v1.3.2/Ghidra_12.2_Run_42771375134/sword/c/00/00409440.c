/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409440; name: FUN_00409440
 */


void FUN_00409440(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  *(short *)(param_1 + 0xb) = (short)param_1[0xb] + 1;
  if (param_1[8] != 0) {
    FUN_004be340(0,*(undefined8 *)PTR_DAT_02712b18,param_1[8],0x4000000,*param_2,param_2[1],0);
    return;
  }
  local_30 = *param_2;
  uStack_2c = param_2[1];
  local_48 = param_1 + 5;
  local_40 = 0x4000000;
  local_38 = 0x3f800000;
  local_28 = 0x100;
  local_26 = 0;
  lVar1 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_48,1,0);
  param_1[8] = lVar1;
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
    return;
  }
  return;
}


