/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01053080; name: FUN_01053080
 */


void FUN_01053080(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_230 [124];
  
  lVar3 = *(long *)(param_1 + 0x148);
  lVar6 = *(long *)(lVar3 + 0x1f0);
  if (lVar6 != 0) {
    FUN_00784060(local_230,*(undefined8 *)(lVar3 + 0x1c0));
    FUN_01061fc0(lVar6,local_230,param_3);
    FUN_00784490(local_230);
  }
  lVar6 = *(long *)(lVar3 + 0x188);
  if (lVar6 == 0) {
    return;
  }
  switch(param_3) {
  case 0:
    FUN_00784060(local_230,*(undefined8 *)(lVar3 + 0x1c0));
    uVar5 = 4;
    break;
  case 1:
    FUN_00784060(local_230,*(undefined8 *)(lVar3 + 0x1c0));
    uVar5 = 1;
    break;
  case 2:
    FUN_00784060(local_230,*(undefined8 *)(lVar3 + 0x1c0));
    uVar5 = 2;
    break;
  case 3:
    FUN_00784060(local_230,*(undefined8 *)(lVar3 + 0x1c0));
    uVar5 = 3;
    break;
  default:
    FUN_00784060(local_230,*(undefined8 *)(lVar3 + 0x1c0));
    FUN_0079b7a0(lVar6,0,local_230);
    FUN_00784490(local_230);
    (**(code **)(**(long **)(lVar3 + 0x1a0) + 0x68))(*(long **)(lVar3 + 0x1a0),0);
    iVar1 = *(int *)(lVar3 + 0x198);
    goto joined_r0x0105315c;
  }
  FUN_0079b7a0(lVar6,uVar5,local_230);
  FUN_00784490(local_230);
  (**(code **)(**(long **)(lVar3 + 0x1a0) + 0x68))(*(long **)(lVar3 + 0x1a0),1);
  iVar1 = *(int *)(lVar3 + 0x198);
joined_r0x0105315c:
  if (iVar1 != 0) {
    FUN_0073edc0(*(undefined8 *)(*(long *)(lVar3 + 0x1b0) + 0xb0),lVar3 + 0x198);
    *(undefined4 *)(lVar3 + 0x198) = 0;
    local_230[0] = 0;
    FUN_0073c7b0(*(undefined8 *)(*(long *)(lVar3 + 0x1b0) + 0xb0),local_230,lVar3 + 0x198);
  }
  uVar4 = (**(code **)(**(long **)(lVar3 + 0x1a0) + 0x58))();
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_0073ec70(*(undefined8 *)(*(long *)(lVar3 + 0x1b0) + 0xb0),param_2);
    *(undefined4 *)(lVar3 + 0x198) = uVar2;
    local_230[0] = 0;
    FUN_0073c7b0(*(undefined8 *)(*(long *)(lVar3 + 0x1b0) + 0xb0),local_230,lVar3 + 0x198);
  }
  return;
}


