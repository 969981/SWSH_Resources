/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099f280; name: FUN_0099f280
 */


ulong FUN_0099f280(undefined8 param_1,void *param_2,byte param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_48 [8];
  
  uVar6 = FUN_00942380();
  FUN_00942390(param_1);
  uVar7 = FUN_00931920();
  uVar2 = FUN_008e0a00(param_4);
  uVar2 = FUN_008f9470(uVar6,uVar7,uVar2);
  uVar3 = FUN_00942620(param_1);
  uVar4 = FUN_00942630(param_1);
  uVar8 = FUN_00880a00(*param_5,0xb);
  if ((uVar8 & 1) == 0) {
    uVar6 = 2;
  }
  else {
    uVar6 = 7;
  }
  FUN_008ed700(auStack_58,uVar6,uVar2);
  bVar1 = FUN_008ed730(auStack_58,uVar3,uVar4,auStack_48);
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_2,0,(ulong)param_3 << 3);
  }
  if (bVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = (ulong)bVar1;
    puVar10 = auStack_48;
    do {
      uVar6 = FUN_009424b0(param_1,*puVar10);
      *(undefined8 *)((long)param_2 + (uVar8 & 0xff) * 8) = uVar6;
      uVar5 = FUN_008e1600();
      uVar8 = (ulong)((int)uVar8 + (~uVar5 & 1));
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
  }
  return uVar8;
}


