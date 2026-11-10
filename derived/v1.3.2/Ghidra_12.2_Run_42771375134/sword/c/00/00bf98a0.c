/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf98a0; name: FUN_00bf98a0
 */


void FUN_00bf98a0(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 local_28;
  
  local_28 = 0x3ac4740992e97e9c;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),&local_28);
  if (param_2 == 2) {
    FUN_0167bdb0(0x3f800000,*(undefined8 *)(param_1 + 0x5f8),&local_28);
    *(byte *)(*(long *)(param_1 + 0x848) + 0x58) = *(byte *)(*(long *)(param_1 + 0x848) + 0x58) | 1;
    lVar1 = *(long *)(param_1 + 0x850);
    bVar2 = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        FUN_0167bdb0(0,*(undefined8 *)(param_1 + 0x5f8),&local_28);
      }
      return;
    }
    FUN_0167bdb0(0x3f800000,*(undefined8 *)(param_1 + 0x5f8),&local_28);
    *(byte *)(*(long *)(param_1 + 0x848) + 0x58) = *(byte *)(*(long *)(param_1 + 0x848) + 0x58) | 1;
    lVar1 = *(long *)(param_1 + 0x850);
    bVar2 = *(byte *)(lVar1 + 0x58) | 1;
  }
  *(byte *)(lVar1 + 0x58) = bVar2;
  return;
}


