/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949160; name: FUN_00949160
 */


void FUN_00949160(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  char local_48 [8];
  undefined8 local_40;
  undefined1 local_38;
  
  *param_2 = 0;
  uVar4 = *param_3;
  local_40 = uVar4;
  FUN_00942450();
  uVar1 = FUN_00925b30();
  FUN_00949410(uVar1,local_48,&local_40);
  if (local_48[0] == '\0') {
    if (*(char *)(param_3 + 1) != '\0') {
      return;
    }
    local_38 = 0;
    local_40 = uVar4;
    FUN_00942450(param_1);
    uVar1 = FUN_00925b40();
    FUN_009492d0(uVar1,local_48,&local_40);
    if (local_48[0] == '\0') {
      return;
    }
    uVar3 = 2;
  }
  else {
    uVar2 = FUN_008e1890(uVar4);
    uVar3 = 3;
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
    }
  }
  *param_2 = uVar3;
  return;
}


