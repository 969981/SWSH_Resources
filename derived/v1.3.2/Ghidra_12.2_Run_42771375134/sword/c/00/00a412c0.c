/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a412c0; name: FUN_00a412c0
 */


void FUN_00a412c0(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0xe8);
  if (lVar1 != 0) {
    *(long *)(*(long *)(param_1 + 0xa8) + 0xe8) = lVar1 + (lVar1 * 0xc >> 2) * 0x5555555555555555;
  }
  lVar1 = 0x10;
  do {
    if (*(short *)(param_2 + lVar1) != 0) {
      local_40 = *(undefined8 *)(param_2 + lVar1);
      local_38 = 0;
      FUN_00a42060(*(long *)(param_1 + 0xa8) + 0xa0,&local_40);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 400);
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0xe8) != 0) {
    FUN_016bef00(*(undefined8 *)(param_1 + 0xa0));
    FUN_016bff10(*(undefined8 *)(param_1 + 0xa0),0,0);
  }
  return;
}


