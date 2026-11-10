/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943ae0; name: FUN_00943ae0
 */


undefined8 FUN_00943ae0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return 0;
  }
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_008df3b0(uVar3,*(undefined1 *)(param_1 + 0x18));
  uVar3 = FUN_00914310(uVar3,*(undefined1 *)(param_1 + 0x19));
  *param_2 = uVar3;
  *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + '\x01';
  bVar1 = *(byte *)(param_1 + 0x18);
  do {
    if (4 < bVar1) {
      *(undefined1 *)(param_1 + 0x1a) = 1;
      return 1;
    }
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
    lVar4 = FUN_008df3c0(uVar3,*(undefined1 *)(param_1 + 0x18));
    if (lVar4 != 0) {
      bVar2 = FUN_008f9310(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x18));
      bVar1 = *(byte *)(param_1 + 0x19);
      while (bVar1 < bVar2) {
        uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
        uVar3 = FUN_008df3c0(uVar3,*(undefined1 *)(param_1 + 0x18));
        lVar4 = FUN_00914330(uVar3,*(undefined1 *)(param_1 + 0x19));
        if ((lVar4 != 0) && (uVar5 = FUN_008e1600(), (uVar5 & 1) == 0)) {
          return 1;
        }
        bVar1 = *(char *)(param_1 + 0x19) + 1;
        *(byte *)(param_1 + 0x19) = bVar1;
      }
    }
    bVar1 = *(char *)(param_1 + 0x18) + 1;
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + '\x01';
    *(undefined1 *)(param_1 + 0x19) = 0;
  } while( true );
}


