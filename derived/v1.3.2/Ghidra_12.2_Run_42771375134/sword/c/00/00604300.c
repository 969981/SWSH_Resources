/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604300; name: FUN_00604300
 */


undefined8
FUN_00604300(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  if (param_2 == 0) {
    return 6;
  }
  local_50 = 1;
  local_30 = 0;
  local_48 = param_2;
  local_40 = param_3;
  uVar1 = FUN_00603b00(param_1,&local_50,param_4,param_5,1);
  return uVar1;
}


