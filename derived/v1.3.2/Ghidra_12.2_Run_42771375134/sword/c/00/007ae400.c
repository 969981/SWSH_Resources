/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ae400; name: thunk_FUN_017ccbb0
 */


ulong thunk_FUN_017ccbb0(uint *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_017ccc00();
  iVar2 = (int)uVar3;
  if (iVar2 != 0) {
    uVar3 = 0x15fde20;
    if (-1 < iVar2) {
      iVar1 = 0x1600530;
      if ((*param_1 & 0x7ff0000) != 0x720000) {
        iVar1 = 0x15fde20;
      }
      uVar3 = (ulong)(uint)(iVar1 + iVar2);
    }
  }
  return uVar3;
}


