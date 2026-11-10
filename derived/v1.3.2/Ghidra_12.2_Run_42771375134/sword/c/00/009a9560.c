/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a9560; name: FUN_009a9560
 */


void FUN_009a9560(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  
  uVar5 = FUN_00942380();
  uVar3 = FUN_008f98a0();
  uVar6 = FUN_009425f0(param_1,uVar3);
  FUN_00942390(param_1);
  uVar7 = FUN_009319b0();
  bVar1 = FUN_00913400(uVar7,0);
  if (bVar1 != 0) {
    uVar9 = 0;
    do {
      FUN_00942390(param_1);
      uVar7 = FUN_009319b0();
      uVar8 = FUN_00913480(uVar7,0,uVar9);
      if ((uVar8 & 1) == 0) {
        FUN_00942390(param_1);
        uVar7 = FUN_009319b0();
        uVar3 = FUN_00913430(uVar7,0,uVar9);
        uVar8 = FUN_00942670(param_1,0x8000);
        if ((uVar8 & 1) == 0) {
LAB_009a962c:
          cVar2 = FUN_009425e0(param_1,uVar3);
          if (cVar2 == '\x01') {
            local_70 = uVar5;
            FUN_008f8fc0(&local_80,uVar5);
            local_78 = local_80;
            if (local_80 != 0) {
              (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
              local_80 = 0;
            }
            local_68 = uVar6;
            local_60 = FUN_009424e0(param_1,uVar3);
            local_58 = 1;
            FUN_009a5210(param_2,&local_78);
          }
        }
        else {
          FUN_009424e0(param_1,uVar3);
          uVar4 = FUN_008e15a0();
          uVar8 = FUN_00942750(param_1,uVar4);
          if ((uVar8 & 1) != 0) goto LAB_009a962c;
        }
        FUN_00942390(param_1);
        uVar7 = FUN_009319b0();
        FUN_009133c0(uVar7,0,uVar9);
      }
      uVar9 = uVar9 + 1;
    } while (bVar1 != uVar9);
  }
  return;
}


