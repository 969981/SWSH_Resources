/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a6f50; name: FUN_004a6f50
 */


undefined8
FUN_004a6f50(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  undefined4 local_34;
  long local_28;
  
  local_34 = param_3;
  local_28 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x88))();
  if (iVar2 == 3) {
    local_28 = param_2 + 4;
    uVar4 = FUN_00449a40(&local_28,&local_34,auStack_60);
    if ((int)uVar4 == 1) {
      if (local_48 == 0) {
        FUN_004a7df0(param_1 + 0x17,local_5c,CONCAT44(uStack_54,local_58),uStack_50);
      }
      else {
        FUN_004a7ef0(param_1 + 0x17,local_58);
      }
      uVar4 = FUN_004854e0(param_1,&local_28,&local_34,param_5 & 1);
    }
  }
  else {
    uVar4 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar1 = param_1[2];
    uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar4,(int)lVar1,3,uVar3);
    uVar4 = 0x5a;
  }
  return uVar4;
}


