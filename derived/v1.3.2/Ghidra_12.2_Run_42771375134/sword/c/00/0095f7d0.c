/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095f7d0; name: FUN_0095f7d0
 */


uint FUN_0095f7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ushort local_90 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 *local_70;
  ushort local_68;
  undefined1 auStack_58 [8];
  
  uVar3 = thunk_FUN_00889340(param_7);
  if ((param_8 & 1) != 0) {
    uVar4 = FUN_008e0a00(param_3);
    uVar5 = FUN_008e55b0(param_3);
    uVar6 = FUN_009423b0(param_1);
    FUN_0093a140(uVar6,uVar4,uVar3,*param_4);
    uVar6 = FUN_009423b0(param_1);
    FUN_0093a130(uVar6,uVar4);
    local_80 = CONCAT71(local_80._1_7_,1);
    local_88 = param_3;
    FUN_00942450(param_1);
    uVar6 = FUN_00925a10();
    FUN_0095fd70(uVar6,local_90,&local_88);
    FUN_0093b130(param_5,param_3,uVar5,1);
    return uVar5;
  }
  local_90[0] = FUN_008e12a0(param_3,0xd);
  uVar7 = FUN_008e0b50(param_3);
  if ((uVar7 & 1) == 0) {
    uVar6 = FUN_009423e0(param_1);
    uVar7 = FUN_009286f0(uVar6,param_2,param_3,param_4);
    if ((uVar7 & 1) == 0) {
      uVar6 = FUN_009423e0(param_1);
      cVar2 = FUN_0092b0a0(uVar6,param_2,param_3,1,local_90);
      uVar1 = local_90[0];
      if (cVar2 == '\0') {
        FUN_0095fa40(param_1,param_3,param_2,param_4,uVar3);
      }
      else {
        uVar6 = FUN_009423b0(param_1);
        uVar4 = FUN_008e0a00(param_2);
        FUN_00937b40(uVar6,param_3,uVar1,1,5,uVar4);
        uVar6 = FUN_009423b0(param_1);
        uVar4 = FUN_008e0a00(param_3);
        FUN_0093a140(uVar6,uVar4,uVar3,*param_4);
        local_80 = CONCAT71(local_80._1_7_,cVar2);
        local_88 = param_3;
        FUN_00942450(param_1);
        uVar6 = FUN_00925970();
        FUN_0095fbd0(uVar6,auStack_58,&local_88);
      }
      goto LAB_0095f8fc;
    }
  }
  local_90[0] = 0;
  uVar6 = FUN_009423b0(param_1);
  uVar4 = FUN_008e0a00(param_3);
  FUN_0093a140(uVar6,uVar4,uVar3,*param_4);
LAB_0095f8fc:
  FUN_0093b130(param_6,param_3,local_90[0],0);
  uVar3 = FUN_008e0a00(param_2);
  local_78 = FUN_00942580(param_1,uVar3);
  local_68 = local_90[0];
  local_88 = param_3;
  local_80 = param_2;
  local_70 = param_4;
  FUN_00942450(param_1);
  uVar6 = FUN_00925000();
  FUN_0095ffb0(uVar6,auStack_58,&local_88);
  return (uint)local_90[0];
}


