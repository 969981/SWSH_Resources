/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534a40; name: FUN_01534a40
 */


void FUN_01534a40(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  uVar2 = FUN_014ad910(&local_50);
  if (param_3 == 1) {
    param_3 = 0;
  }
  else if (param_3 == 2) {
    uVar3 = FUN_01534550(uVar2,local_50);
    param_3 = 2;
    if ((uVar3 & 1) == 0) {
      param_3 = 0;
    }
  }
  local_40 = CONCAT44(param_3,(undefined4)local_40);
  uVar1 = FUN_00878a50(param_2);
  FUN_01534ae0(param_1,&local_50,uVar1);
  return;
}


