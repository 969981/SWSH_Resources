/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009679c0; name: FUN_009679c0
 */


void FUN_009679c0(undefined8 param_1,ushort *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort local_68 [4];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  uint local_38;
  undefined1 local_34;
  
  FUN_00967b20(param_1,*param_3,param_3[1],param_3[5],param_5,*(undefined4 *)((long)param_3 + 0x14),
               *(undefined4 *)(param_3 + 3));
  uVar2 = param_3[1];
  local_68[0] = *(ushort *)(param_3 + 2);
  uVar1 = FUN_008e55c0(uVar2,local_68);
  if ((uVar1 & 1) != 0) {
    local_50 = CONCAT71(local_50._1_7_,1);
    local_58 = uVar2;
    FUN_00942450(param_1);
    uVar2 = FUN_00925a10();
    FUN_0095fd70(uVar2,auStack_60,&local_58);
  }
  *param_2 = local_68[0];
  local_58 = param_3[5];
  local_50 = *param_3;
  local_48 = param_3[1];
  local_40 = CONCAT44(local_40._4_4_,(uint)local_68[0]);
  FUN_00942450(param_1);
  uVar2 = FUN_009252a0();
  FUN_009669a0(uVar2,local_68,&local_58);
  local_48 = *param_3;
  local_40 = param_3[1];
  local_58 = param_3[4];
  local_50 = param_3[5];
  local_38 = (uint)*param_2;
  local_34 = 1;
  FUN_00942450(param_1);
  uVar2 = FUN_00925d20();
  FUN_00967220(uVar2,local_68,&local_58);
  local_48 = *param_3;
  local_58 = param_3[4];
  local_50 = param_3[5];
  FUN_00942450(param_1);
  uVar2 = FUN_00925d30();
  FUN_00966b10(uVar2,local_68,&local_58);
  local_48 = param_3[5];
  local_58 = *param_3;
  local_50 = param_3[1];
  local_40 = (ulong)CONCAT24(*param_2,*(undefined4 *)((long)param_3 + 0x14));
  local_38 = CONCAT22(local_38._2_2_,0x100);
  local_38 = CONCAT31(local_38._1_3_,*(int *)(param_3 + 3) != 0);
  FUN_00942450(param_1);
  uVar2 = FUN_00925d50();
  FUN_0095feb0(uVar2,local_68,&local_58);
  return;
}


