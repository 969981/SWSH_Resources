/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7400; name: FUN_004d7400
 */


undefined8 FUN_004d7400(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  memcpy(&local_50,param_2,0x30);
  uVar1 = FUN_00490530(&local_50,*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 1));
  if ((int)uVar1 == 1) {
    local_40 = CONCAT22(*(undefined2 *)((long)param_2 + 0x12),(undefined2)local_40);
    FUN_004da280(param_2,&local_50);
    FUN_004905b0(param_2);
    *(undefined4 *)(param_2 + 2) = local_40;
    param_2[1] = local_48;
    uVar1 = 1;
    *param_2 = local_50;
  }
  return uVar1;
}


