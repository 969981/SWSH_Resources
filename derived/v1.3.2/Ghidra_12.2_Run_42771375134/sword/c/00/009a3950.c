/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3950; name: FUN_009a3950
 */


undefined8 FUN_009a3950(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_40 [32];
  undefined8 local_18;
  
  FUN_00943860(auStack_40,param_1,param_2);
  uVar2 = FUN_00943ae0(auStack_40,&local_18);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  do {
    uVar2 = FUN_008e0a10(local_18);
    if ((uVar2 & 1) != 0) {
      FUN_008e0a00(local_18);
      uVar1 = FUN_008f94e0();
      if ((uVar1 & 0xff) == param_3) {
        return 1;
      }
    }
    uVar2 = FUN_00943ae0(auStack_40,&local_18);
  } while ((uVar2 & 1) != 0);
  return 0;
}


