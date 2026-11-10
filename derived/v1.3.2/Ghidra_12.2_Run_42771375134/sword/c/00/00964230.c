/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00964230; name: FUN_00964230
 */


char FUN_00964230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  char local_28 [8];
  
  uVar2 = FUN_008e4c70(param_3);
  local_38 = FUN_008e2890(param_3,uVar2);
  local_37 = 2;
  local_28[0] = '\0';
  local_40 = param_3;
  FUN_00942450(param_1);
  uVar3 = FUN_009252c0();
  FUN_00950650(uVar3,local_28,&local_40);
  if ((local_28[0] != '\0') && (uVar4 = FUN_00965540(param_2), (uVar4 & 1) == 0)) {
    uVar3 = FUN_009423b0(param_1);
    uVar1 = FUN_008e0a00(param_3);
    FUN_009360c0(uVar3,0x7d6,uVar1);
  }
  return local_28[0];
}


