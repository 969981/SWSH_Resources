/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041bc40; name: FUN_0041bc40
 */


undefined4
FUN_0041bc40(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 *param_5,
            uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 auStack_44 [4];
  
  *param_5 = 0;
  iVar1 = FUN_0040ead0(param_1[0x12]);
  iVar2 = FUN_0040eab0(param_1[0x12]);
  if ((param_4 < iVar2 + iVar1) &&
     (lVar4 = FUN_0040e250(param_1[0x12],param_1,param_2,param_3,param_6 & 1), lVar4 != 0)) {
    lVar5 = FUN_004195b0(param_1,0,lVar4);
    FUN_00408b50(lVar4);
    if (lVar5 != 0) {
      param_1[0xd] = 0;
      local_5c = 0;
      local_58 = 0;
      local_60 = param_4;
      iVar1 = (**(code **)(*param_1 + 0x90))(param_1,0,&local_60,param_5,auStack_44,0,0);
      if (iVar1 != 0) {
        iVar1 = FUN_0040ead0(param_1[0x12]);
        iVar2 = FUN_0040eab0(param_1[0x12]);
        FUN_0040b770(lVar5,0,4,iVar2 + iVar1);
        uVar3 = FUN_0040ead0(param_1[0x12]);
        lVar4 = FUN_004195b0(param_1,uVar3,0);
        uVar3 = 1;
        if (lVar4 == 0) {
          uVar3 = 2;
        }
        return uVar3;
      }
    }
  }
  return 2;
}


