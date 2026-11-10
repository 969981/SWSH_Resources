/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966da0; name: FUN_00966da0
 */


void FUN_00966da0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_88;
  int local_84;
  undefined1 auStack_80 [32];
  
  *param_2 = 0;
  uVar7 = param_3[1];
  uVar3 = FUN_008e0a00(uVar7);
  uVar8 = param_3[2];
  uVar1 = *(undefined4 *)*param_3;
  FUN_0094fc40(auStack_80);
  uVar5 = FUN_009423e0(param_1);
  uVar4 = FUN_009267c0(uVar5,uVar7,uVar8,uVar1);
  bVar2 = FUN_00880de0(uVar1);
  if (bVar2 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        uVar5 = FUN_009423e0(param_1);
        FUN_00928a60(uVar5,uVar1,uVar9,uVar7,uVar8,&local_84,&local_88);
        if (local_84 == 0) break;
        uVar6 = FUN_00966ef0(param_1,uVar3,local_84,local_88,uVar4 & 1,
                             *(undefined1 *)((long)param_3 + 0x1c),*(undefined4 *)(param_3 + 3),
                             uVar8,auStack_80);
        if ((uVar6 & 1) != 0) {
          uVar5 = FUN_009423e0(param_1);
          FUN_00928b90(uVar5,uVar8,uVar1,local_84,local_88);
          *param_2 = 1;
        }
        uVar9 = uVar9 + 1;
        if (bVar2 == uVar9) goto LAB_00966ec8;
      }
      FUN_0094fc90(auStack_80,1);
      uVar9 = uVar9 + 1;
    } while (bVar2 != uVar9);
  }
LAB_00966ec8:
  FUN_0094fc50(auStack_80);
  return;
}


