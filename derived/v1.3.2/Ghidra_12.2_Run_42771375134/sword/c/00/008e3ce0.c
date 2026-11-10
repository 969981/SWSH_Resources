/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3ce0; name: FUN_008e3ce0
 */


void FUN_008e3ce0(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 != '\x1f') {
    lVar5 = 0;
    do {
      lVar1 = param_1 + 0x90 + lVar5;
      uVar3 = FUN_008ed0a0(lVar1);
      if ((uVar3 & 1) == 0) {
        cVar2 = FUN_008ed1f0(lVar1);
        if (cVar2 == param_2) {
          uVar4 = FUN_008ed090();
          *(undefined8 *)(param_1 + 0x90 + lVar5) = uVar4;
          if (lVar5 == 0x10) {
            uVar4 = FUN_008ed090();
            *(undefined8 *)(param_1 + 0xd8) = uVar4;
            *(undefined1 *)(param_1 + 0x201) = 0;
          }
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x168);
  }
  return;
}


