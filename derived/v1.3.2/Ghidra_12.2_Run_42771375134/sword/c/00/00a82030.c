/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82030; name: FUN_00a82030
 */


void FUN_00a82030(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_008932e0(param_1 + 0x1808,param_2,1);
  if ((uVar2 & 1) != 0) {
    bVar1 = FUN_008934e0(param_1 + 0x1808);
    *(byte *)(param_1 + 0x1820) = bVar1 & 1;
    *(undefined1 *)(param_1 + 0x1800) = 1;
  }
  return;
}


