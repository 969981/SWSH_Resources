/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886c10; name: FUN_00886c10
 */


void FUN_00886c10(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = FUN_00886fa0(param_2);
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar6 = 0;
    uVar7 = 0;
    do {
      iVar5 = FUN_00886fa0(*(long *)(param_1 + 8) + lVar6);
      if (iVar5 == iVar4) {
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x1a0;
    } while (uVar7 < *(byte *)(param_1 + 0x28));
  }
  FUN_00886f60(param_2,*(long *)(param_1 + 8) + (ulong)*(byte *)(param_1 + 0x29) * 0x1a0);
  bVar2 = *(byte *)(param_1 + 0x28);
  uVar1 = *(byte *)(param_1 + 0x29) + 1;
  cVar3 = '\0';
  if (bVar2 != 0) {
    cVar3 = (char)(uVar1 / bVar2);
  }
  *(byte *)(param_1 + 0x29) = (char)uVar1 - cVar3 * bVar2;
  return;
}


