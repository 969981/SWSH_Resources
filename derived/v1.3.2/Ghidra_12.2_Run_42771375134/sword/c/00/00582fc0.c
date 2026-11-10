/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00582fc0; name: FUN_00582fc0
 */


undefined8
FUN_00582fc0(undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
            undefined4 param_13,undefined8 param_14,byte param_15)

{
  undefined4 local_58;
  float local_54;
  
  local_58 = FUN_00582860(param_4,param_8,param_9,param_10);
  local_54 = param_2;
  if (*(char *)(*(long *)(param_4 + 0x20) + 0x58) != '\0') {
    local_54 = -param_2;
  }
  FUN_00582460(param_3,param_4,param_5,param_6,param_7,&local_58,param_11,param_13,param_14,
               param_15 & 1);
  return 0;
}


