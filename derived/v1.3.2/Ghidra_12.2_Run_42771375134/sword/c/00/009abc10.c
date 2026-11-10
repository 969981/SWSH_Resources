/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009abc10; name: FUN_009abc10
 */


void FUN_009abc10(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48 [8];
  char local_38 [4];
  undefined1 local_34 [4];
  
  *param_2 = 0x1f;
  uVar2 = FUN_008e0a00(*param_3);
  FUN_00942390(param_1);
  uVar3 = FUN_009319a0();
  uVar4 = FUN_00913dd0(uVar3,uVar2);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009423b0(param_1);
    FUN_00936b40(uVar3,*param_3);
    local_58 = *param_3;
    local_50 = 0;
    FUN_00942450(param_1);
    uVar3 = FUN_009259d0();
    FUN_00951280(uVar3,local_38,&local_58);
    if (local_38[0] == '\0') {
      return;
    }
  }
  uVar1 = *(undefined1 *)(param_3 + 1);
  uVar2 = FUN_008e0a00(*param_3);
  FUN_00942390(param_1);
  uVar3 = FUN_009319a0();
  uVar2 = FUN_00913fd0(uVar3,uVar2);
  uVar3 = FUN_00942380(param_1);
  FUN_008f8e50(uVar3,uVar2,local_38,local_34);
  uVar3 = local_58;
  local_58._4_4_ = SUB84(uVar3,4);
  local_58._0_4_ = CONCAT13(1,CONCAT12(uVar1,CONCAT11(local_34[0],local_38[0])));
  FUN_00942450(param_1);
  uVar3 = FUN_009259b0();
  FUN_00941dc0(uVar3,local_48,&local_58);
  *param_2 = local_48[0];
  uVar2 = FUN_008e0a00(*param_3);
  FUN_00942380(param_1);
  uVar1 = FUN_008f94e0(uVar2);
  uVar3 = FUN_009423b0(param_1);
  FUN_00938ff0(uVar3,0,uVar1);
  return;
}


