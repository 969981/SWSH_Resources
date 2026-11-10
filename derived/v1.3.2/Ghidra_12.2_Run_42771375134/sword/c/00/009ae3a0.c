/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ae3a0; name: FUN_009ae3a0
 */


void FUN_009ae3a0(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined2 local_88 [2];
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_60 [2];
  undefined1 local_58 [8];
  
  *param_2 = 0;
  if ((*(int *)(param_3 + 2) != 0) && (uVar4 = FUN_00880c60(), (uVar4 & 1) != 0)) {
    uVar5 = FUN_009424e0(param_1,*(undefined1 *)param_3);
    FUN_00942390(param_1);
    uVar6 = FUN_00931920();
    uVar6 = FUN_008df430(uVar6,*(undefined1 *)((long)param_3 + 1));
    uVar1 = *(undefined4 *)(param_3 + 2);
    uVar4 = FUN_008e0a10(uVar5);
    uVar3 = uVar1;
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_00945420(uVar1);
    }
    if (*(char *)(param_3 + 4) == '\0') {
      uVar8 = 7;
    }
    else {
      local_88[0] = *param_3;
      local_80 = 0;
      local_84 = uVar3;
      FUN_00942450(param_1);
      uVar7 = FUN_00925e70();
      FUN_009ae5d0(uVar7,local_60,local_88);
      uVar8 = local_60[0];
    }
    uVar7 = FUN_009423e0(param_1);
    FUN_00926280(uVar7,uVar3,uVar1,uVar1,0,uVar5,local_88);
    uVar2 = FUN_008e0a00(uVar6);
    local_60[0] = CONCAT31(local_60[0]._1_3_,uVar2);
    FUN_00942450(param_1);
    uVar7 = FUN_00925630();
    FUN_00945320(uVar7,local_58,local_60);
    uVar7 = FUN_009423e0(param_1);
    FUN_00926b20(uVar7,uVar5,uVar6,local_88,uVar8,0x1000,0,*(char *)((long)param_3 + 9) == '\0',0,
                 local_58[0],param_2);
  }
  return;
}


