/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aec80; name: FUN_014aec80
 */


bool FUN_014aec80(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = FUN_014ae9f0(*param_1,*(undefined2 *)(param_1 + 1));
  bVar2 = (uVar3 & 0xff) == 0;
  if (bVar2) {
    iVar1 = param_1[5];
  }
  else {
    *(short *)(param_1 + 1) = (short)(uVar3 >> 0x10);
    iVar1 = param_1[5];
  }
  if (iVar1 != 0) {
    param_1[5] = 0;
  }
  return iVar1 != 0 || !bVar2;
}


