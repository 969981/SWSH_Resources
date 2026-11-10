/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3c50; name: FUN_008e3c50
 */


void FUN_008e3c50(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008ec550(param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_008ed090();
    uVar1 = (ulong)param_2;
  }
  else {
    uVar2 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    *(undefined1 *)(param_1 + 0x1f9) = 0;
    uVar2 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    *(undefined1 *)(param_1 + 0x1fa) = 0;
    uVar2 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(undefined1 *)(param_1 + 0x201) = 0;
    uVar2 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    *(undefined1 *)(param_1 + 0x1fb) = 0;
    uVar2 = FUN_008ed090();
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    *(undefined1 *)(param_1 + 0x1fc) = 0;
    uVar1 = 5;
    uVar2 = FUN_008ed090();
  }
  *(undefined8 *)(param_1 + 0x60 + uVar1 * 8 + 0x30) = uVar2;
  *(undefined1 *)(param_1 + 0x60 + uVar1 + 0x198) = 0;
  return;
}


