/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1600; name: FUN_009a1600
 */


void FUN_009a1600(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined4 local_38;
  char local_34;
  undefined1 auStack_28 [8];
  
  *param_2 = 0;
  local_34 = FUN_009a16a0(param_1,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),param_3[3]);
  local_40 = *param_3;
  if (local_34 == '\0') {
    FUN_009a1b40(param_1);
    return;
  }
  local_38 = *(undefined4 *)param_3[1];
  FUN_00942450(param_1);
  uVar1 = FUN_00925dd0();
  FUN_009a1090(uVar1,auStack_28,&local_40);
  *param_2 = 1;
  return;
}


