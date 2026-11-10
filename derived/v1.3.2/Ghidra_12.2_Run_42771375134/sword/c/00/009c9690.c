/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9690; name: FUN_009c9690
 */


void FUN_009c9690(long param_1,int param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 3) {
    lVar4 = (long)param_2;
    if ((*(char *)(param_1 + (long)param_2 * 0x28 + 0x71) == '\0') &&
       (*(char *)(param_1 + lVar4 * 0x28 + 0x72) == '\0')) {
      nn::os::GetSystemTick();
      lVar2 = nn::os::ConvertToTimeSpan();
      lVar3 = param_1 + lVar4 * 0x28;
      lVar1 = *(long *)(lVar3 + 0x58);
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(long *)(lVar3 + 0x60) = (lVar2 - lVar1) + *(long *)(lVar3 + 0x60);
      *(long *)(lVar3 + 0x68) = lVar2;
    }
    *(undefined1 *)(param_1 + lVar4 * 0x28 + (ulong)param_3 + 0x71) = 1;
  }
  return;
}


