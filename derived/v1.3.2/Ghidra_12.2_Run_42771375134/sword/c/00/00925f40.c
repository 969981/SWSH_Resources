/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00925f40; name: FUN_00925f40
 */


void FUN_00925f40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  uVar1 = FUN_009423e0();
  FUN_0092b900(uVar1,*param_3,*(undefined1 *)(param_3 + 1));
  uVar1 = FUN_009423b0(param_1);
  FUN_00937c90(uVar1,*param_3,*(undefined1 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 9),0);
  if (*(char *)(param_3 + 3) != '\0') {
    local_38 = *param_3;
    local_28 = param_3[2];
    local_30 = 1;
    FUN_00942450(param_1);
    uVar1 = FUN_009251d0();
    FUN_0094af90(uVar1,auStack_40,&local_38);
  }
  return;
}


