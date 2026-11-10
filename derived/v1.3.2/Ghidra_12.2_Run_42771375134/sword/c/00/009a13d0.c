/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a13d0; name: FUN_009a13d0
 */


void FUN_009a13d0(undefined8 param_1,undefined2 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined8 local_60;
  char local_58;
  undefined1 auStack_48 [4];
  undefined2 local_44 [2];
  
  *param_2 = 0;
  uVar9 = *param_3;
  uVar2 = FUN_008e12a0(uVar9,8);
  uVar3 = FUN_008e12a0(uVar9,9);
  uVar4 = FUN_008e12a0(uVar9,0x11);
  iVar5 = FUN_008ebfa0(0x10);
  uVar6 = FUN_008ebea0(0x28,uVar2,uVar4,uVar3);
  uVar6 = (uVar6 & 0xffff) * (100 - iVar5);
  uVar9 = *param_3;
  uVar8 = (undefined2)(uVar6 / 100);
  if (((ulong)uVar6 / 100 & 0xffff) == 0) {
    uVar8 = 1;
  }
  local_60 = CONCAT62(local_60._2_6_,uVar8);
  uVar7 = FUN_009423e0(param_1);
  FUN_0092d060(uVar7,uVar9,&local_60);
  uVar7 = *param_3;
  local_44[0] = (undefined2)local_60;
  uVar9 = FUN_009423e0(param_1);
  cVar1 = FUN_0092b0a0(uVar9,uVar7,uVar7,0,local_44);
  uVar9 = FUN_009423b0(param_1);
  FUN_00937be0(uVar9,*param_3,local_44[0]);
  if (cVar1 != '\0') {
    local_60 = *param_3;
    local_58 = cVar1;
    FUN_00942450(param_1);
    uVar9 = FUN_00925970();
    FUN_0095fbd0(uVar9,auStack_48,&local_60);
  }
  uVar9 = FUN_009423e0(param_1);
  FUN_0092d150(uVar9,*param_3,*param_3);
  *param_2 = local_44[0];
  return;
}


