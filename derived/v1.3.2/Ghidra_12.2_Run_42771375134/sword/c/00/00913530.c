/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913530; name: FUN_00913530
 */


undefined8 FUN_00913530(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x14e) == '\0') {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar2 = FUN_008f94e0(*(undefined1 *)(param_1 + 0x130 + uVar3));
    cVar1 = FUN_00913d10(param_2,uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(byte *)(param_1 + 0x14e));
  return 0;
}


