/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015033a0; name: FUN_015033a0
 */


void FUN_015033a0(long param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  if (param_2 == 0) {
    bVar2 = 0x21;
    if ((byte)(*(char *)(param_1 + 0x72) + 1U) < 0x21) {
      bVar2 = *(char *)(param_1 + 0x72) + 1;
    }
    *(byte *)(param_1 + 0x72) = bVar2;
    bVar1 = *(byte *)(param_1 + 0x74);
    if (bVar1 < bVar2) {
      cVar3 = '!';
      if ((byte)(bVar1 + 1) < 0x21) {
        cVar3 = bVar1 + 1;
      }
      *(char *)(param_1 + 0x74) = cVar3;
      return;
    }
  }
  else {
    bVar2 = 0x21;
    if ((byte)(*(char *)(param_1 + 0x73) + 1U) < 0x21) {
      bVar2 = *(char *)(param_1 + 0x73) + 1;
    }
    *(byte *)(param_1 + 0x73) = bVar2;
    bVar1 = *(byte *)(param_1 + 0x75);
    if (bVar1 < bVar2) {
      cVar3 = '!';
      if ((byte)(bVar1 + 1) < 0x21) {
        cVar3 = bVar1 + 1;
      }
      *(char *)(param_1 + 0x75) = cVar3;
    }
  }
  return;
}


