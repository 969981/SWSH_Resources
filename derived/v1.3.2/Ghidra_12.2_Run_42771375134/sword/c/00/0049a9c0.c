/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049a9c0; name: FUN_0049a9c0
 */


undefined8 FUN_0049a9c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0049aa40(param_1,0xb);
  if ((uVar1 & 1) == 0) {
    return 0x34;
  }
  uVar1 = FUN_0049ab90(param_1 + 0x18,0xb);
  if ((uVar1 & 1) == 0) {
    return 0x34;
  }
  lVar2 = FUN_0049d820(param_1,0x83);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = 0x42800000;
  }
  return 1;
}


