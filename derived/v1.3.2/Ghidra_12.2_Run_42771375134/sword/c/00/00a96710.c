/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a96710; name: FUN_00a96710
 */


void FUN_00a96710(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = FUN_00a97900();
  if ((param_4 & 1) != 0) {
    uVar2 = FUN_00a97bf0(param_1);
  }
  uVar1 = FUN_00a97ee0(uVar2,param_2,uVar2 & 0xffffffff);
  *(uint *)(param_1 + 0x110) = uVar1;
  if (uVar1 == 0xff) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8 + 0x548);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
  }
  uStack_38 = 0;
  local_40 = 0;
  if (param_3 < 4) {
    uStack_38 = 0;
    local_40 = 0;
    switch(param_3) {
    case 0:
      FUN_00ac5a80(lVar4);
      local_40 = CONCAT44(extraout_var,extraout_s0);
      uStack_38 = extraout_var_01;
      goto LAB_00a967dc;
    default:
      uVar3 = 0xf;
      break;
    case 2:
      uVar3 = 6;
    }
    FUN_00ac74d0(lVar4,uVar3,&local_40);
  }
LAB_00a967dc:
  *(undefined8 *)(param_1 + 0x98) = uStack_38;
  *(undefined8 *)(param_1 + 0x90) = local_40;
  FUN_00ac7640(lVar4);
  *(undefined4 *)(param_1 + 0xa0) = extraout_var_00;
  uVar2 = FUN_00a801e0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x110),
                       *(undefined4 *)(param_1 + 0x110));
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


