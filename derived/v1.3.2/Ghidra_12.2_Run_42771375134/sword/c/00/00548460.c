/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00548460; name: FUN_00548460
 */


undefined8 FUN_00548460(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 == (long *)0x0) {
    return 0xfffffffa;
  }
  piVar5 = (int *)(**(code **)(*param_2 + 0x98))(param_2);
  if (*piVar5 != 3) {
    return 0xfffffffa;
  }
  if (*(long **)param_1[0x11] != (long *)0x0) {
    (**(code **)(**(long **)param_1[0x11] + 0x18))();
    *(undefined8 *)param_1[0x11] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar6 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar7 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar4 = *(uint *)(lVar7 + 8);
  if ((uVar4 >> 0xe & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 3 & 1) == 0) {
        piVar5 = (int *)(lVar6 + 4);
      }
      else {
        piVar5 = (int *)(lVar6 + 8);
      }
    }
    else {
      piVar5 = (int *)(lVar6 + 0x10);
    }
  }
  else {
    piVar5 = (int *)(lVar6 + 0xc);
  }
  uVar2 = *(undefined4 *)(lVar6 + 0x30);
  uVar3 = *(undefined4 *)(lVar6 + 0x34);
  iVar1 = *(int *)(lVar6 + 4);
  if (*piVar5 != 0) {
    iVar1 = *piVar5;
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x14);
  *(int *)((long)param_1 + 0x44) = iVar1;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar6 + 0x20);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(lVar6 + 0x1c);
  lVar6 = (**(code **)(*param_2 + 0x40))(param_2);
  *(uint *)((long)param_1 + 0x24) = *(uint *)(lVar6 + 8) >> 0xd & 2 | *(uint *)(lVar6 + 8) >> 5 & 1;
  *(undefined4 *)(param_1 + 5) = param_4;
  FUN_00546030(param_1);
  *(long **)param_1[0x11] = param_2;
  (**(code **)(**(long **)param_1[0x11] + 0x10))();
  (**(code **)(*param_1 + 0x78))(param_1,0);
  return 0;
}


