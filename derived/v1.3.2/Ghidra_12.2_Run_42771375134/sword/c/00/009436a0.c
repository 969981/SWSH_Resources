/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009436a0; name: FUN_009436a0
 */


void FUN_009436a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_0093b2e0(param_2);
  lVar1 = FUN_0093b2f0(param_2);
  if (lVar1 != 0) {
    do {
      uVar2 = FUN_009423e0(param_1);
      FUN_009297c0(uVar2,lVar1,0x70);
      lVar1 = FUN_0093b2f0(param_2);
    } while (lVar1 != 0);
  }
  FUN_0093b2e0(param_2);
  lVar1 = FUN_0093b2f0(param_2);
  if (lVar1 != 0) {
    do {
      uVar2 = FUN_009423e0(param_1);
      FUN_00929760(uVar2,lVar1,0x71);
      lVar1 = FUN_0093b2f0(param_2);
    } while (lVar1 != 0);
  }
  FUN_0093b2e0(param_2);
  lVar1 = FUN_0093b2f0(param_2);
  if (lVar1 != 0) {
    do {
      uVar2 = FUN_009423e0(param_1);
      FUN_00929760(uVar2,lVar1,0x6f);
      lVar1 = FUN_0093b2f0(param_2);
    } while (lVar1 != 0);
  }
  FUN_0093b2e0(param_2);
  lVar1 = FUN_0093b2f0(param_2);
  uVar2 = FUN_009423e0(param_1);
  while (lVar1 != 0) {
    FUN_00929760(uVar2,lVar1,0xd3);
    lVar1 = FUN_0093b2f0(param_2);
    uVar2 = FUN_009423e0(param_1);
  }
  FUN_00929820();
  return;
}


