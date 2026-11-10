/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886b80; name: FUN_00886b80
 */


undefined8 FUN_00886b80(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = FUN_00886fa0(*(long *)(param_1 + 8) + lVar2);
      if (iVar1 == param_2) {
        FUN_00886f60(*(long *)(param_1 + 8) + lVar2,param_3);
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x1a0;
    } while (uVar3 < *(byte *)(param_1 + 0x28));
  }
  return 0;
}


