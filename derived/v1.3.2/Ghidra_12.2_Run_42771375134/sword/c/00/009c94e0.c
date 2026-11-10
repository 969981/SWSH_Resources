/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c94e0; name: FUN_009c94e0
 */


void FUN_009c94e0(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 < 3) {
    lVar2 = param_1 + (long)param_2 * 0x28;
    plVar3 = (long *)(lVar2 + 0x58);
    *plVar3 = 0;
    plVar4 = (long *)(lVar2 + 0x60);
    *plVar4 = 0;
    *(long *)(lVar2 + 0x68) = 0;
    *(ulong *)(lVar2 + 0x78) = (ulong)param_3;
    *(undefined1 *)(lVar2 + 0x70) = 0;
    nn::os::GetSystemTick();
    lVar1 = nn::os::ConvertToTimeSpan();
    *plVar3 = lVar1;
    *(undefined1 *)(lVar2 + 0x70) = 1;
    if ((*(char *)(lVar2 + 0x71) == '\0') &&
       (*(char *)(param_1 + (long)param_2 * 0x28 + 0x72) == '\0')) {
      nn::os::GetSystemTick();
      lVar1 = nn::os::ConvertToTimeSpan();
      *(long *)(lVar2 + 0x68) = lVar1;
      *plVar4 = (lVar1 - *plVar3) + *plVar4;
      *plVar3 = 0;
    }
    *(char *)(lVar2 + 0x71) = '\x01';
  }
  return;
}


