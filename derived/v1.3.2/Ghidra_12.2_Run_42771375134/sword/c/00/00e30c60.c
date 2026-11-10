/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30c60; name: FUN_00e30c60
 */


void FUN_00e30c60(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x268) = 1;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  *(undefined2 *)(param_1 + 100) = 0xffff;
  *(undefined8 *)(param_1 + 0x8e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xff0000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_00e30d30(param_2);
  if (*(long *)(param_2 + 0x30) == -0x340d631b7bddd9bb) {
    lVar1 = *(long *)(param_2 + 0x38);
  }
  else {
    *(long *)(param_1 + 0x280) = *(long *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x38);
  }
  if (lVar1 == -0x340d631b7bddd9bb) {
    return;
  }
  *(long *)(param_1 + 0x288) = lVar1;
  return;
}


