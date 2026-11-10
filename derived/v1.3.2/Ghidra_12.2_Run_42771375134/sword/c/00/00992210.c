/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00992210; name: FUN_00992210
 */


undefined8 FUN_00992210(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 auStack_48 [8];
  
  uVar4 = FUN_009416b0();
  FUN_008ed700(auStack_48,3,uVar4);
  bVar1 = FUN_00941920(param_1,auStack_48,local_58);
  if (bVar1 != 0) {
    uVar8 = (ulong)bVar1;
    puVar9 = local_58;
    bVar1 = 0;
    do {
      uVar5 = FUN_0093ec60(param_1,*puVar9);
      uVar6 = FUN_008e2df0(uVar5,8);
      bVar7 = bVar1;
      if (((uVar6 & 1) != 0) && (sVar3 = FUN_008e4be0(uVar5), sVar3 != 0)) {
        uVar2 = FUN_008e0a00(uVar5);
        bVar7 = bVar1 + 1;
        local_60[bVar1] = uVar2;
      }
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
      bVar1 = bVar7;
    } while (uVar8 != 0);
    if (bVar7 != 0) {
      uVar8 = FUN_008ebfa0(bVar7);
      *param_3 = local_60[uVar8 & 0xff];
      return 1;
    }
  }
  return 0;
}


