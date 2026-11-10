/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e47d0; name: FUN_012e47d0
 */


void FUN_012e47d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x370;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined2 *)(param_1 + 0x30c) = 0;
  FUN_0131b6b0(lVar1,0);
  if ((*(int *)(param_1 + 0x308) == 4 || *(int *)(param_1 + 0x308) == 1) &&
     (uVar2 = FUN_0131d090(lVar1), (uVar2 & 1) == 0)) {
    FUN_0131d150(lVar1,1);
    return;
  }
  return;
}


