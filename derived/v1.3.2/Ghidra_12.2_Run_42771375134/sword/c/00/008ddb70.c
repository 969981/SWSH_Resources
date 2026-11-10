/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ddb70; name: FUN_008ddb70
 */


undefined8 FUN_008ddb70(short param_1)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_008dd830();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
    sVar1 = DAT_02148c26;
    while (sVar1 != param_1) {
      if (0x68 < (int)lVar3 + 1U) {
        return 0;
      }
      if ((&DAT_02148c28)[lVar3] == param_1) {
        return 1;
      }
      lVar3 = lVar3 + 2;
      sVar1 = (&DAT_02148c26)[lVar3];
    }
  }
  return 1;
}


