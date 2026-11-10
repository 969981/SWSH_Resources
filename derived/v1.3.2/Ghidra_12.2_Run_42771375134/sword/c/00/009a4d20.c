/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4d20; name: FUN_009a4d20
 */


void FUN_009a4d20(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_68;
  char local_67;
  char local_60;
  char local_5f;
  char local_5e;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  
  *param_2 = 0;
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_48 = &local_68;
  FUN_00942450();
  uVar5 = FUN_00925940();
  FUN_009a6300(uVar5,&local_60,&local_58);
  if (local_5f != '\0') {
    FUN_008e0a00(*param_3);
    uVar2 = FUN_008f94e0();
    uVar5 = FUN_00942380(param_1);
    FUN_008f9940(uVar5,uVar2,*(undefined2 *)(param_3 + 1));
  }
  if (local_5e != '\0') {
    FUN_00942380(param_1);
    FUN_0094dc10();
  }
  if (local_60 == '\0') {
    if ((local_5e != '\0') && (iVar4 = FUN_00942640(param_1), iVar4 == 0)) {
      uVar5 = FUN_00942390(param_1);
      FUN_00931ae0(uVar5,*(undefined2 *)(param_3 + 1));
    }
  }
  else if (local_60 == '\x01') {
    local_58 = *param_3;
    local_60 = '\0';
    local_50 = CONCAT22(local_50._2_2_,1);
    FUN_00942450(param_1);
    uVar5 = FUN_009252e0();
    FUN_0094ec70(uVar5,&local_60,&local_58);
    if (local_60 != '\0') {
      FUN_009423f0(param_1);
      uVar5 = FUN_00942fe0();
      FUN_00943280(uVar5,5);
    }
  }
  else if (local_60 == '\x02') {
    FUN_008e0a00(*param_3);
    uVar3 = FUN_008f94e0();
    bVar1 = FUN_009a4ee0(param_1,uVar3,local_68);
    *param_2 = bVar1 & 1;
    if (local_67 != '\0') {
      uVar5 = FUN_009423b0(param_1);
      FUN_0093a300(uVar5,&local_68);
    }
    FUN_009a5040(param_1,&local_68);
    FUN_009423f0(param_1);
    uVar5 = FUN_00942fe0();
    FUN_00943280(uVar5,6);
    uVar5 = FUN_00942440(param_1);
    FUN_008da750(uVar5,local_68);
    uVar5 = FUN_00942440(param_1);
    FUN_008da770(uVar5,uVar3 & 0xff);
  }
  return;
}


