/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9940; name: FUN_008f9940
 */


undefined8 FUN_008f9940(long param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01') {
    return 0;
  }
  if (*(char *)(param_1 + 0x174) != param_2) {
    return 0;
  }
  iVar1 = FUN_008ec3f0(param_3,0x14);
  if (iVar1 == 1) {
    return 0;
  }
  FUN_01520b70(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xa40),param_3,1);
  return 1;
}


