/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943510; name: FUN_00943510
 */


void FUN_00943510(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_88 [80];
  undefined1 auStack_38 [8];
  undefined1 *local_28;
  
  FUN_0093b070(auStack_88);
  FUN_00943610(param_1,auStack_88,*param_3);
  local_28 = auStack_88;
  FUN_00942450(param_1);
  uVar1 = FUN_00925c10();
  FUN_00943cc0(uVar1,auStack_38,&local_28);
  FUN_0093b2e0(auStack_88);
  lVar2 = FUN_0093b2f0(auStack_88);
  if (lVar2 != 0) {
    do {
      uVar1 = FUN_009423e0(param_1);
      FUN_00929760(uVar1,lVar2,0x6d);
      lVar2 = FUN_0093b2f0(auStack_88);
    } while (lVar2 != 0);
  }
  FUN_0093b2e0(auStack_88);
  lVar2 = FUN_0093b2f0(auStack_88);
  if (lVar2 != 0) {
    do {
      uVar1 = FUN_009423e0(param_1);
      FUN_00929760(uVar1,lVar2,0x6e);
      lVar2 = FUN_0093b2f0(auStack_88);
    } while (lVar2 != 0);
  }
  FUN_009436a0(param_1,auStack_88);
  return;
}


