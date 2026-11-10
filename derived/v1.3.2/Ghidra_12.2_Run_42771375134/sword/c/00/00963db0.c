/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00963db0; name: FUN_00963db0
 */


bool FUN_00963db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 *param_5,long param_6)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_a8 [8];
  undefined2 local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined4 local_8c;
  undefined1 auStack_88 [40];
  
  bVar2 = FUN_00965540(param_2);
  uVar7 = FUN_009655e0(param_2);
  if (param_4 == 8) {
    uVar8 = FUN_009423e0(param_1);
    FUN_0092bc80(uVar8,uVar7,param_3,8,param_5);
  }
  else if (param_4 == 7) {
    iVar4 = FUN_008e12a0(uVar7,0x14);
    iVar5 = FUN_008e12a0(param_3,0x14);
    if (iVar4 == iVar5) {
      return false;
    }
    if (iVar4 == 2) {
      return false;
    }
    if (iVar5 == 2) {
      return false;
    }
  }
  local_a0 = 0x1f1f;
  local_94 = 0;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8d = 0;
  local_9c = 0;
  uStack_98 = 0;
  local_8c = 1;
  FUN_00943e60(auStack_88);
  uVar3 = FUN_008e0a00(uVar7);
  local_a0 = CONCAT11(local_a0._1_1_,uVar3);
  uVar3 = FUN_008e0a00(param_3);
  local_a0 = CONCAT11(uVar3,(undefined1)local_a0);
  uStack_98 = (undefined4)*param_5;
  local_94 = (undefined4)((ulong)*param_5 >> 0x20);
  uStack_90 = 0;
  uStack_8d = 0;
  local_8c = CONCAT22(local_8c._2_2_,CONCAT11(bVar2,bVar2)) & 0xffff0101 ^ 1;
  local_9c = param_4;
  if (param_6 != 0) {
    FUN_00943eb0(auStack_88,param_6);
  }
  if ((param_4 == 0x16) && ((bVar2 & 1) == 0)) {
    FUN_00943f20(auStack_88,2,0x49c);
    uVar3 = FUN_008e0a00(param_3);
    FUN_00943f60(auStack_88,uVar3);
  }
  FUN_00942450(param_1);
  uVar7 = FUN_009254c0();
  FUN_009440e0(uVar7,local_a8,&local_a0);
  if (local_a8[0] == '\0') {
    bVar1 = false;
  }
  else {
    uVar6 = FUN_00942540(param_1,param_3);
    FUN_00965830(param_2,uVar6,param_4);
    bVar1 = local_a8[0] != '\0';
  }
  return bVar1;
}


