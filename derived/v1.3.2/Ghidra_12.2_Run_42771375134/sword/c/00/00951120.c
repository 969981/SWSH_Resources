/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951120; name: FUN_00951120
 */


int FUN_00951120(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(char *)((long)param_1 + 0xd) == '\0') {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = FUN_008f96b0(*param_1,*(undefined1 *)((long)param_1 + uVar3 + 8));
      uVar3 = uVar3 + 1;
      if ((uVar1 & 0xff) == param_2) {
        iVar2 = iVar2 + 1;
      }
    } while (uVar3 < *(byte *)((long)param_1 + 0xd));
  }
  return iVar2;
}


