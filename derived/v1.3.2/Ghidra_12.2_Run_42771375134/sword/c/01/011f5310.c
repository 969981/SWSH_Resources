/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f5310; name: FUN_011f5310
 */


ulong FUN_011f5310(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 local_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 local_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 local_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 local_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  puVar1 = local_40;
  if (param_2 != 6) {
    if (param_2 == 0x20) {
      puVar1 = (undefined1 *)((ulong)local_40 | 4);
    }
    else if (param_2 == 0) {
      puVar1 = auStack_38;
    }
    else if (param_2 == 0x21) {
      puVar1 = auStack_34;
    }
    else if (param_2 == 0x11) {
      puVar1 = local_30;
    }
    else if (param_2 == 0x1b) {
      puVar1 = auStack_2c;
    }
    else if (param_2 == 0x22) {
      puVar1 = auStack_28;
    }
    else if (param_2 == 0x18) {
      puVar1 = auStack_24;
    }
    else if (param_2 == 0xc) {
      puVar1 = local_20;
    }
    else if (param_2 == 3) {
      puVar1 = auStack_1c;
    }
    else if (param_2 == 10) {
      puVar1 = auStack_18;
    }
    else if (param_2 == 0x23) {
      puVar1 = auStack_14;
    }
    else if (param_2 == 0x26) {
      puVar1 = local_10;
    }
    else if (param_2 == 7) {
      puVar1 = auStack_c;
    }
    else if (param_2 == 0x24) {
      puVar1 = auStack_8;
    }
    else {
      if (param_2 != 0x25) {
        return 0;
      }
      puVar1 = auStack_4;
    }
  }
  return (ulong)*(ushort *)(param_1 + ((long)puVar1 - (long)local_40 >> 1)) << 0x10 | 1;
}


