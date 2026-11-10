/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00547850; name: FUN_00547850
 */


undefined8 FUN_00547850(long *param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 == (long *)0x0) {
    return 0xfffffffa;
  }
  (**(code **)(*param_2 + 0x98))(param_2);
  piVar5 = (int *)(**(code **)(*param_2 + 0x98))(param_2);
  if (*piVar5 != 2) {
    return 0xfffffffa;
  }
  if (*(long **)param_1[0x12] != (long *)0x0) {
    (**(code **)(**(long **)param_1[0x12] + 0x18))();
    *(undefined8 *)param_1[0x12] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar6 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar7 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar3 = *(uint *)(lVar7 + 8);
  if ((uVar3 >> 0xe & 1) == 0) {
    if ((uVar3 >> 5 & 1) == 0) {
      if ((uVar3 >> 3 & 1) == 0) {
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
  uVar1 = *(undefined4 *)(lVar6 + 0x30);
  uVar2 = *(undefined4 *)(lVar6 + 0x34);
  iVar4 = *(int *)(lVar6 + 4);
  if (*piVar5 != 0) {
    iVar4 = *piVar5;
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x14);
  *(int *)((long)param_1 + 0x44) = iVar4;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar6 + 0x20);
  lVar6 = (**(code **)(*param_2 + 0x40))(param_2);
  *(uint *)((long)param_1 + 0x24) = *(uint *)(lVar6 + 8) >> 0xd & 2 | *(uint *)(lVar6 + 8) >> 5 & 1;
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_00546030(param_1);
  *(long **)param_1[0x12] = param_2;
  (**(code **)(**(long **)param_1[0x12] + 0x10))();
  (**(code **)(**(long **)param_1[0x12] + 0x20))();
  iVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar4 < 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,0);
  }
  return 0;
}


