/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e9430; name: FUN_012e9430
 */


uint FUN_012e9430(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_70 [80];
  
  lVar2 = FUN_012ba700(*(undefined8 *)(param_1 + 0x710));
  if (((lVar2 == 0) || (lVar2 = FUN_01319810(lVar2,auStack_70), *(char *)(lVar2 + 0x44) == '\0')) &&
     (uVar3 = FUN_012b7040(*(undefined8 *)(param_1 + 0x710),0x2e), (uVar3 & 1) != 0)) {
    uVar1 = FUN_012b7040(*(undefined8 *)(param_1 + 0x710),0x2f);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


