/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa9d0; name: FUN_008fa9d0
 */


undefined8 FUN_008fa9d0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_009c98b0(param_2);
  uVar2 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),uVar1 & 0xff);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + (ulong)(uVar1 & 0xff) * 8 + 0x198);
}


