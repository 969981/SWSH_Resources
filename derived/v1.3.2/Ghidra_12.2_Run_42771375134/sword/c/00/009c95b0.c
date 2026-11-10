/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c95b0; name: FUN_009c95b0
 */


void FUN_009c95b0(long param_1,int param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_2 < 3) {
    lVar3 = param_1 + (long)param_2 * 0x28;
    pcVar4 = (char *)(lVar3 + 0x70);
    puVar2 = (undefined8 *)(lVar3 + 0x58);
    if (*pcVar4 == '\0') {
      nn::os::GetSystemTick();
      uVar1 = nn::os::ConvertToTimeSpan();
      *puVar2 = uVar1;
      *pcVar4 = '\x01';
      return;
    }
    lVar3 = (long)param_2;
    pcVar4 = (char *)(param_1 + lVar3 * 0x28 + 0x71);
    if ((((*pcVar4 != '\0') || (*(char *)(param_1 + lVar3 * 0x28 + 0x72) != '\0')) &&
        (*(undefined1 *)(param_1 + lVar3 * 0x28 + (ulong)param_3 + 0x71) = 0, *pcVar4 == '\0')) &&
       (*(char *)(param_1 + lVar3 * 0x28 + 0x72) == '\0')) {
      nn::os::GetSystemTick();
      uVar1 = nn::os::ConvertToTimeSpan();
      *puVar2 = uVar1;
      *(undefined8 *)(param_1 + lVar3 * 0x28 + 0x68) = 0;
      return;
    }
  }
  return;
}


