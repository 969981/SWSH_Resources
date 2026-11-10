/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904a90; name: FUN_00904a90
 */


undefined8 FUN_00904a90(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  
  FUN_00943860(auStack_38,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70));
  do {
    uVar2 = FUN_00943ae0(auStack_38,&local_18);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_008e0a00(local_18);
    cVar1 = FUN_008f94e0();
  } while ((cVar1 != '\x01') || (uVar2 = FUN_008e18d0(local_18), (uVar2 & 1) == 0));
  return local_18;
}


