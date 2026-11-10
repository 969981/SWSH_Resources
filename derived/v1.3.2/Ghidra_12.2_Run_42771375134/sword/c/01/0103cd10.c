/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103cd10; name: FUN_0103cd10
 */


undefined8 FUN_0103cd10(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_012b4090(param_1 + 0x68);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  local_48 = 0xf5fd7b0f1f12073f;
  local_40 = "pages";
  local_38 = 5;
  FUN_012b4250(auStack_30,param_1 + 0x68,&local_48);
  uVar2 = FUN_012b40f0(auStack_30);
  return uVar2;
}


