/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058b290; name: FUN_0058b290
 */


void FUN_0058b290(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                 undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                 undefined4 param_17)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0x3f800000;
  uStack_18 = 0x3f800000;
  if ((param_6 & 1) != 0) {
    local_20 = 0x3f800000bf800000;
    uStack_18 = 0x3f800000bf800000;
  }
  FUN_0058ae30(param_1,1,param_2,param_3,param_4,param_5,3,&local_20,param_9,param_10,param_11,
               param_7,param_8,param_12,param_13,param_14,param_15,param_16,param_17);
  return;
}


