/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8570; name: FUN_009a8570
 */


void FUN_009a8570(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  char local_48 [8];
  undefined8 local_40;
  int local_38;
  undefined1 local_34;
  
  iVar1 = FUN_008e1b40(param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = FUN_009423e0(param_1);
    iVar1 = FUN_0092cb20(uVar2,param_2,param_3,iVar1);
    if (iVar1 != 0) {
      local_34 = (undefined1)(0x2d2c0000002a2b >> (((ulong)(param_3 - 4U) & 7) << 3));
      if (6 < param_3 - 4U) {
        local_34 = 0;
      }
      local_40 = param_2;
      local_38 = iVar1;
      FUN_00942450(param_1);
      uVar2 = FUN_00925bf0();
      FUN_0094bc60(uVar2,local_48,&local_40);
      if (local_48[0] != '\0') {
        FUN_009a8f50(param_1,param_2,param_3);
        FUN_009a8ff0(param_1,param_2,iVar1,param_3);
      }
    }
  }
  return;
}


