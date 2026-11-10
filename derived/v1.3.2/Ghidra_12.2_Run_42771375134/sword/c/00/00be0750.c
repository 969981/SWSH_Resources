/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be0750; name: FUN_00be0750
 */


ulong FUN_00be0750(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_78 [24];
  char local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  lVar2 = FUN_007a9d00();
  local_50[0] = 0;
  puVar1 = PTR_DAT_027167e8 + 0x10;
  local_40 = local_50;
  local_38 = 0x10;
  local_58 = puVar1;
  FUN_017d05f0(&local_58,*(undefined8 *)(lVar2 + 0x10),0xffffffffffffffff);
  FUN_01864db0(auStack_78,&local_58,param_1);
  if (local_60 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_01844310(auStack_78);
    uVar3 = lVar2 << 0x20;
  }
  local_58 = puVar1;
  FUN_017d0720(&local_58);
  return uVar3 | local_60 != '\0';
}


