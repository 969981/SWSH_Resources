/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d3db0; name: FUN_005d3db0
 */


void FUN_005d3db0(undefined8 param_1,long param_2,int param_3,int param_4,undefined8 *param_5,
                 int param_6,int param_7,undefined8 *param_8,int param_9,int param_10,
                 undefined8 *param_11,int param_12,int param_13,undefined8 *param_14,int param_15,
                 int param_16,undefined8 *param_17)

{
  undefined8 local_50;
  undefined8 local_48;
  
  if ((-1 < param_3) && (param_4 != 0)) {
    local_50 = *param_5;
    local_48 = CONCAT44(0x3f800000,*(undefined4 *)(param_5 + 1));
    FUN_005ed900(param_4,param_2 + param_3,&local_50);
  }
  if ((-1 < param_6) && (param_7 != 0)) {
    local_50 = *param_8;
    local_48 = CONCAT44(0x3f800000,*(undefined4 *)(param_8 + 1));
    FUN_005ed900(param_7,param_2 + param_6,&local_50);
  }
  if ((-1 < param_9) && (param_10 != 0)) {
    local_50 = *param_11;
    local_48 = 0x3f80000000000000;
    FUN_005ed900(param_10,param_2 + param_9,&local_50);
  }
  if ((-1 < param_12) && (param_13 != 0)) {
    local_50 = *param_14;
    local_48 = param_14[1];
    FUN_005ed900(param_13,param_2 + param_12,&local_50);
  }
  if ((-1 < param_15) && (param_16 != 0)) {
    local_50 = *param_17;
    local_48 = CONCAT44(0x3f800000,*(undefined4 *)(param_17 + 1));
    FUN_005ed900(param_16,param_2 + param_15,&local_50);
  }
  return;
}


