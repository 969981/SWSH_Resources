/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00967610; name: FUN_00967610
 */


void FUN_00967610(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long *local_48;
  long local_40;
  undefined4 local_38;
  
  local_58 = param_3[3];
  local_50 = param_3[1];
  FUN_00942450();
  uVar1 = FUN_00925100();
  FUN_00966200(uVar1,&local_40,&local_58);
  if ((char)param_3[4] != '\0') {
    uVar2 = 0;
    do {
      local_40 = param_3[3];
      local_38 = *(undefined4 *)(param_3[1] + 4);
      local_58 = *(long *)(*param_3 + uVar2 * 8);
      local_50 = CONCAT71(local_50._1_7_,*(undefined1 *)(param_3[2] + 8));
      local_48 = &local_40;
      FUN_00942450(param_1);
      uVar1 = FUN_009251d0();
      FUN_0094af90(uVar1,auStack_60,&local_58);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_3 + 4));
  }
  local_58 = param_3[3];
  local_48 = (long *)0x0;
  local_50 = CONCAT71(local_50._1_7_,1);
  FUN_00942450(param_1);
  uVar1 = FUN_009251d0();
  FUN_0094af90(uVar1,&local_40,&local_58);
  return;
}


