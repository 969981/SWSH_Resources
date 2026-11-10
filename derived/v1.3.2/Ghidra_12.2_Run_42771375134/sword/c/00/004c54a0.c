/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c54a0; name: FUN_004c54a0
 */


undefined8 FUN_004c54a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_28;
  
  FUN_004d4c90(param_1,&local_28);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    if (*(short *)(local_28 + 0x12) == 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(*(long *)(param_1 + 0x70) + 0x80) != 0)) {
      return 0;
    }
    lVar2 = FUN_0047d760(param_1 + 0x70);
    if (lVar2 != 0) {
      FUN_0047b100(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),lVar2,local_28);
    }
  }
  else {
    do {
      if ((*(long *)(lVar2 + 0x20) != 0) && ((~*(byte *)(lVar2 + 0x2a4) & 3) != 0)) {
        uVar1 = FUN_004699e0(lVar2);
        FUN_004d4930(uVar1,local_28,lVar2);
      }
      lVar2 = *(long *)(lVar2 + 0x40);
    } while (lVar2 != 0);
  }
  return 1;
}


