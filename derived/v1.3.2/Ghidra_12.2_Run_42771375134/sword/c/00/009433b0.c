/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009433b0; name: FUN_009433b0
 */


void FUN_009433b0(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  
  if ((param_2 < 5) && (pcVar5 = (char *)(param_1 + (ulong)param_2 + 8), *pcVar5 == '\x05')) {
    bVar1 = *(byte *)(param_1 + 8);
    bVar2 = *(byte *)(param_1 + 9);
    if (bVar1 == 5) {
      bVar1 = 0xff;
    }
    bVar4 = bVar1;
    if ((int)(char)bVar1 <= (int)(uint)bVar2 || 0x7fffffff < (uint)(int)(char)bVar1) {
      bVar4 = bVar2;
    }
    bVar3 = *(byte *)(param_1 + 10);
    if (bVar2 != 5) {
      bVar1 = bVar4;
    }
    bVar2 = bVar1;
    if ((int)(char)bVar1 <= (int)(uint)bVar3 || 0x7fffffff < (uint)(int)(char)bVar1) {
      bVar2 = bVar3;
    }
    bVar4 = *(byte *)(param_1 + 0xb);
    if (bVar3 != 5) {
      bVar1 = bVar2;
    }
    bVar2 = bVar1;
    if ((int)(char)bVar1 <= (int)(uint)bVar4 || 0x7fffffff < (uint)(int)(char)bVar1) {
      bVar2 = bVar4;
    }
    bVar3 = *(byte *)(param_1 + 0xc);
    if (bVar4 != 5) {
      bVar1 = bVar2;
    }
    bVar2 = bVar1;
    if ((int)(char)bVar1 <= (int)(uint)bVar3 || 0x7fffffff < (uint)(int)(char)bVar1) {
      bVar2 = bVar3;
    }
    if (bVar3 != 5) {
      bVar1 = bVar2;
    }
    *pcVar5 = bVar1 + 1;
  }
  return;
}


