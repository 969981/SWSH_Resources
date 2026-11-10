/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095e250; name: FUN_0095e250
 */


void FUN_0095e250(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  *param_2 = 0;
  uVar1 = FUN_009424e0(param_1,*param_3);
  uVar2 = FUN_008e1600();
  if ((uVar2 & 1) == 0) {
    local_38 = *(undefined4 *)(param_3 + 4);
    local_34 = 0;
    local_40 = uVar1;
    FUN_00942450(param_1);
    uVar1 = FUN_00925c40();
    FUN_009487f0(uVar1,local_48,&local_40);
    if (local_48[0] != '\0') {
      uVar1 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar1,param_3 + 8);
      *param_2 = 1;
    }
  }
  return;
}


