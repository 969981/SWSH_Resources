/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a187b0; name: FUN_00a187b0
 */


void FUN_00a187b0(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar3 = (**(code **)(*param_2 + 0x818))(param_2);
  lVar4 = (**(code **)(*param_2 + 0x828))(param_2,0);
  if ((lVar3 == 0) || (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(char *)(*(long *)(param_1 + 0x6f8) + 0x7c) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x6f8) + 0x7c) = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x718) + 0x84) = 1;
  if (*(char *)(*(long *)(param_1 + 0x6f8) + 0x364) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x6f8) + 0x364) = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x718) + 0x134) = 1;
  if (*(char *)(*(long *)(param_1 + 0x6f8) + 0x64c) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x6f8) + 0x64c) = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x718) + 0x1e4) = 1;
  if (*(char *)(*(long *)(param_1 + 0x6f8) + 0x934) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x6f8) + 0x934) = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x718) + 0x294) = 1;
  iVar2 = (**(code **)(*param_2 + 0x870))(param_2);
  if (iVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x6f8);
    if (*(char *)(lVar3 + 0x364) != '\0') {
      *(undefined1 *)(lVar3 + 0x364) = 0;
      *(byte *)(*(long *)(lVar3 + 0x368) + 0x58) = *(byte *)(*(long *)(lVar3 + 0x368) + 0x58) & 0xfe
      ;
      lVar3 = *(long *)(param_1 + 0x6f8);
    }
    if (*(char *)(lVar3 + 0x934) != '\0') {
      *(undefined1 *)(lVar3 + 0x934) = 0;
      *(byte *)(*(long *)(lVar3 + 0x938) + 0x58) = *(byte *)(*(long *)(lVar3 + 0x938) + 0x58) & 0xfe
      ;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x718) + 0x134) = 0;
    uVar5 = 0x3f800000;
    *(undefined1 *)(*(long *)(param_1 + 0x718) + 0x294) = 0;
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    uVar5 = 0;
  }
  FUN_00ffd510(uVar5,param_1 + 0x100,&DAT_02154688);
  local_48 = *(undefined8 *)(param_1 + 0x5d0);
  local_40 = 0xc8e9c2e05cb54a73;
  local_38 = 0;
  local_50 = 0x6049c6200c18dcc7;
  local_68 = param_2;
  local_58 = param_1 + 0x100;
  uVar1 = (**(code **)(*param_2 + 0x8b8))(param_2);
  local_60._0_1_ = uVar1;
  FUN_00a0a600(&local_68);
  local_50 = 0x2342dfe19f269266;
  uVar1 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
  local_60 = CONCAT71(local_60._1_7_,uVar1);
  FUN_00a0a600(&local_68);
  local_58 = DAT_02154650;
  local_68 = DAT_02154640;
  local_60 = DAT_02154648;
  local_70 = DAT_02154668;
  local_80 = DAT_02154658;
  uStack_78 = DAT_02154660;
  local_90 = param_1;
  plStack_88 = param_2;
  uVar5 = (**(code **)(*param_2 + 0x8b8))(param_2);
  FUN_00a18b50(&local_90,&local_68,uVar5);
  uVar5 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
  FUN_00a18b50(&local_90,&local_80,uVar5);
  lVar3 = (**(code **)(*param_2 + 0x7f8))(param_2,0);
  if (lVar3 != 0) {
    FUN_00a1d940(*(undefined8 *)(param_1 + 0x6f8),param_2,lVar3);
    FUN_00a1b110(*(undefined8 *)(param_1 + 0x718),param_2,0,0);
  }
  lVar3 = (**(code **)(*param_2 + 0x7f8))(param_2,2);
  if (lVar3 != 0) {
    FUN_00a1d940(*(long *)(param_1 + 0x6f8) + 0x2e8,param_2,lVar3);
    FUN_00a1b110(*(long *)(param_1 + 0x718) + 0xb0,param_2,2,0);
  }
  lVar3 = (**(code **)(*param_2 + 0x7f8))(param_2,1);
  if (lVar3 != 0) {
    FUN_00a1d940(*(long *)(param_1 + 0x6f8) + 0x5d0,param_2,lVar3);
    FUN_00a1b110(*(long *)(param_1 + 0x718) + 0x160,param_2,1,0);
  }
  lVar3 = (**(code **)(*param_2 + 0x7f8))(param_2,3);
  if (lVar3 != 0) {
    FUN_00a1d940(*(long *)(param_1 + 0x6f8) + 0x8b8,param_2,lVar3);
    FUN_00a1b110(*(long *)(param_1 + 0x718) + 0x210,param_2,3,0);
  }
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x6e8));
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x6f0));
  FUN_00a1e140(*(undefined8 *)(param_1 + 0x738),param_3);
  return;
}


