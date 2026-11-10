/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951e70; name: FUN_00951e70
 */


void FUN_00951e70(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char local_48 [8];
  undefined2 local_40 [4];
  undefined1 auStack_38 [8];
  undefined4 local_28;
  undefined1 local_24;
  
  local_40[0] = *(undefined2 *)param_3;
  FUN_00942450();
  uVar1 = FUN_009250d0();
  FUN_00952250(uVar1,local_48,local_40);
  *param_2 = local_48[0];
  if (local_48[0] == '\0') {
    local_28 = *param_3;
    local_24 = *(undefined1 *)(param_3 + 1);
    FUN_00942450(param_1);
    uVar1 = FUN_009250e0();
    FUN_00951fc0(uVar1,auStack_38,&local_28);
  }
  return;
}


