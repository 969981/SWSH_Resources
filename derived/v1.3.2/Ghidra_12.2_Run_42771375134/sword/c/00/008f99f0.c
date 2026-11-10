/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f99f0; name: FUN_008f99f0
 */


undefined8 FUN_008f99f0(long param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01') ||
     (*(char *)(param_1 + 0x174) != param_2)) {
    return 0;
  }
  uVar1 = FUN_01520760(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xa40),param_3,1,1);
  return uVar1;
}


