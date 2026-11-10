/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009525d0; name: FUN_009525d0
 */


void FUN_009525d0(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_50;
  undefined8 local_48;
  
  *param_2 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar2 = *param_3;
  bVar3 = param_3[0xc];
  iVar4 = FUN_00952770(*(undefined4 *)(param_3 + 4));
  if (iVar4 == 2) {
    local_50 = CONCAT44(local_50._4_4_,(uint)bVar3);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
    if (iVar4 == 1) {
      iVar4 = FUN_00942820(param_1,0);
      uVar1 = *(uint *)(param_3 + 8);
      local_50 = CONCAT44(uVar1,(uVar1 >> 0x10 & 0xf) + iVar4) & 0xffffffffffff;
      uVar7 = FUN_00942380(param_1);
      FUN_00942390(param_1);
      uVar6 = FUN_00931920();
      uVar5 = FUN_008f9470(uVar7,uVar6,uVar2);
      local_48 = CONCAT44(local_48._4_4_,uVar5) & 0xffffffff000000ff;
      uVar7 = 3;
    }
  }
  uVar6 = FUN_009423b0(param_1);
  bVar3 = FUN_00937180(uVar6,param_3[1],*(undefined4 *)(param_3 + 4),param_3 + 8);
  *param_2 = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    uVar6 = FUN_009423b0(param_1);
    FUN_0093a800(uVar6,*(undefined4 *)(param_3 + 4),param_3[1],*param_3,&local_50,uVar7);
  }
  return;
}


