/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a6120; name: FUN_005a6120
 */


uint FUN_005a6120(long param_1,int param_2,ulong param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6,int param_7,undefined8 param_8,undefined4 param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x90);
    lVar4 = *(long *)(param_1 + 0x20);
    *(int *)(param_1 + 0x90) = param_2;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    *(int *)(param_1 + 0x90) = param_2;
  }
  if (lVar4 == 0) {
    return 0xfffffffe;
  }
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)
             (param_1 + (long)*(int *)(*(long *)(*(long *)(param_1 + 0x38) + (long)param_2 * 8) +
                                      0xa0) * 8 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x94) * 8 + 0x60);
  }
  if (param_2 < *(int *)(param_1 + 0x30)) {
    uStack_38 = *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)param_2 * 8);
  }
  else {
    uStack_38 = 0;
  }
  local_50 = uStack_38;
  if (param_7 != 0) {
    local_50 = 0;
  }
  local_20 = 0;
  uStack_18 = 0;
  local_48 = uStack_38;
  if (param_7 != 1) {
    local_48 = 0;
  }
  local_40 = uStack_38;
  if (param_7 != 2) {
    local_40 = 0;
  }
  if (param_7 != 3) {
    uStack_38 = 0;
  }
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_0059db20(8,&local_50,uVar2,uVar3,param_4,param_5,param_6,param_8,param_9);
  return uVar1 & (int)uVar1 >> 0x1f;
}


