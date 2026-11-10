/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913140; name: FUN_00913140
 */


void FUN_00913140(long param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  
  if ((param_2 & 0xff) < 0x1e) {
    pcVar3 = (char *)(param_1 + (ulong)(byte)param_2 + 0xf4);
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      uVar2 = FUN_009131b0(param_1,param_2);
      if ((uVar2 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 0x14e);
        if ((ulong)bVar1 < 0x1e) {
          *(byte *)(param_1 + 0x14e) = bVar1 + 1;
          *(byte *)(param_1 + (ulong)bVar1 + 0x130) = (byte)param_2;
        }
      }
    }
  }
  return;
}


