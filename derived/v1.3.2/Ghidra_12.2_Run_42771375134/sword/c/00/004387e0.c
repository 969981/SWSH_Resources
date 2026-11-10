/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004387e0; name: FUN_004387e0
 */


void FUN_004387e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  long *local_28;
  
  if (param_2 != (long *)0x0) {
    local_34 = 0;
    local_2c = 0;
    local_30 = 0;
    uVar1 = 5;
    local_48 = param_3;
    local_40 = param_7;
    local_3c = param_5;
    uStack_38 = param_6;
    local_28 = param_2;
    switch(param_4) {
    case 0:
      FUN_004399e0(*(undefined8 *)PTR_DAT_02712de0,param_2,param_3,param_7);
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 1;
      FUN_00439d80(*(undefined8 *)PTR_DAT_02712de0,param_2,param_3,1,param_7);
      break;
    case 2:
      FUN_0043a190(*(undefined8 *)PTR_DAT_02712de0,param_2,param_3,0,param_7);
      uVar1 = 2;
      break;
    case 3:
      FUN_0043a3f0(*(undefined8 *)PTR_DAT_02712de0,param_2,param_3,param_7);
      uVar1 = 3;
      break;
    case 4:
      break;
    default:
      goto switchD_00438838_default;
    }
    local_50[0] = uVar1;
    (**(code **)(*param_2 + 0x98))(param_2,local_50);
  }
switchD_00438838_default:
  return;
}


