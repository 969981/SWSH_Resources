/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a92c80; name: FUN_00a92c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a92c80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0070c490(*(undefined8 *)(param_1 + 0x18));
  uVar2 = _UNK_01d4a138;
  uVar1 = _DAT_01d4a130;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  FUN_00a71ee0(*(undefined8 *)(param_1 + 8));
  return;
}


