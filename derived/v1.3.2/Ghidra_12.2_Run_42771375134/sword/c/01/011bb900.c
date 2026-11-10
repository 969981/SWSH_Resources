/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011bb900; name: FUN_011bb900
 */


uint FUN_011bb900(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 local_50;
  undefined8 *local_48;
  long *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  FUN_011bd520(&local_50,param_1,param_2,*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_011bcb80(param_1,&local_50);
  FUN_0075efb0(auStack_28,local_50,0,1);
  puVar1 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*local_40 + 0x18))(local_40,puVar1,uStack_38,local_30);
  }
  FUN_0075f0a0(auStack_28);
  puVar1 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*local_40 + 0x18))(local_40,puVar1,uStack_38,local_30);
  }
  return uVar2 & 1;
}


