/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ae5d0; name: FUN_009ae5d0
 */


void FUN_009ae5d0(undefined8 param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_b0 [40];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 local_68;
  
  *param_2 = 7;
  uVar7 = FUN_009424e0(param_1,*param_3);
  if (param_3[9] == '\0') {
    FUN_00942390(param_1);
    uVar8 = FUN_00931920();
    uVar8 = FUN_008df430(uVar8,param_3[1]);
  }
  else {
    uVar8 = FUN_009424e0(param_1,param_3[1]);
  }
  cVar1 = FUN_00942580(param_1,*param_3);
  if (cVar1 == '\x05') {
    FUN_00942380(param_1);
    uVar4 = FUN_008f94e0(*param_3);
    uVar9 = FUN_00942380(param_1);
    bVar2 = FUN_008f9f90(uVar9,uVar4);
    if (bVar2 != 0) {
      uVar12 = 0;
      do {
        uVar9 = FUN_00942380(param_1);
        uVar5 = FUN_008f79e0(uVar9,uVar4,uVar12);
        lVar10 = FUN_009424b0(param_1,uVar5);
        FUN_00942390(param_1);
        uVar9 = FUN_009319a0();
        cVar1 = FUN_00914000(uVar9,uVar5);
        if ((lVar10 != 0) && (cVar1 != '\x1f')) {
          uVar3 = FUN_008e0a00(lVar10);
          uVar9 = FUN_009423d0(param_1);
          FUN_008dabf0(uVar9,uVar3,4);
          uVar9 = FUN_009423d0(param_1);
          FUN_008dabf0(uVar9,uVar3,5);
        }
        uVar12 = uVar12 + 1;
      } while (bVar2 != uVar12);
    }
    uVar9 = FUN_009423b0(param_1);
    uVar11 = FUN_009423e0(param_1);
    FUN_0092fa00(uVar9,uVar11,uVar7);
    uVar9 = FUN_009423b0(param_1);
    uVar4 = FUN_008e0a00(uVar7);
    FUN_0093a780(uVar9,uVar4);
  }
  uVar9 = FUN_009423b0(param_1);
  uVar5 = FUN_008e0a00(uVar7);
  uVar4 = *(undefined4 *)(param_3 + 4);
  uVar6 = FUN_008e12a0(uVar7,0xc);
  FUN_0093a550(uVar9,uVar5,uVar4,uVar6);
  uVar9 = FUN_009423e0(param_1);
  uVar4 = *(undefined4 *)(param_3 + 4);
  FUN_00926280(uVar9,uVar4,uVar4,uVar4,0,uVar7,auStack_b0);
  local_68 = param_3[8];
  local_80 = uVar7;
  uStack_78 = uVar8;
  local_70 = auStack_b0;
  FUN_00942450(param_1);
  uVar7 = FUN_00925220();
  FUN_00969100(uVar7,local_88,&local_80);
  *param_2 = local_88[0];
  return;
}


