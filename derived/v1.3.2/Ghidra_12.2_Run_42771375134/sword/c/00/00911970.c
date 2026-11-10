/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911970; name: FUN_00911970
 */


bool FUN_00911970(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_008f8980(*(undefined8 *)(param_1 + 0x60));
  if ((uVar3 & 1) != 0) {
    FUN_008da680(*(undefined8 *)(param_1 + 0x608));
    uVar3 = FUN_00951090();
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_008da680(*(undefined8 *)(param_1 + 0x608));
      uVar3 = FUN_009510a0(uVar4,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
        uVar1 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x60));
        FUN_008df3b0(uVar4,uVar1);
        bVar2 = FUN_009141d0();
        return 1 < bVar2;
      }
    }
  }
  return false;
}


