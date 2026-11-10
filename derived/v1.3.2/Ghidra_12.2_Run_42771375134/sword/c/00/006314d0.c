/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006314d0; name: FUN_006314d0
 */


undefined8 FUN_006314d0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_50;
  int iStack_4c;
  undefined4 local_48;
  int iStack_44;
  
  if ((long *)param_1[6] == (long *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*(long *)param_1[6] + 0x98))();
  if ((((*(int *)(lVar2 + 0x14) < 1) ||
       (lVar2 = (**(code **)(*(long *)param_1[6] + 0x98))(), *(int *)(lVar2 + 0x18) < 1)) ||
      (*(long *)(param_1[5] + 0x60) == 0)) ||
     (lVar2 = *(long *)(*(long *)(param_1[5] + 0x60) + 0x98), lVar2 == 0)) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x9c) == 0) {
LAB_00631714:
    *(int *)(param_2 + 0x58) = *(int *)(lVar2 + 0x50) >> 6;
    *(int *)(param_2 + 0x5c) = *(int *)(lVar2 + 0x68) >> 6;
    *(int *)(param_2 + 0x60) = *(int *)(lVar2 + 0x40) >> 6;
    *(int *)(param_2 + 100) = *(int *)(lVar2 + 0x48) >> 6;
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(lVar2 + 0x9c);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(lVar2 + 0x98);
    return 1;
  }
  iStack_44 = *(int *)(lVar2 + 0x98);
  if (iStack_44 == 0) goto LAB_00631714;
  iStack_4c = (int)param_1[0x61] + *(int *)(lVar2 + 0x9c);
  iStack_44 = (int)param_1[0x61] + iStack_44;
  local_50 = 0;
  local_48 = 0;
  if (param_1[0x5f] == 0) {
    return 0;
  }
  lVar3 = FUN_00632d50(param_1 + 0x38,param_1[0x5f],&local_50);
  if (lVar3 == 0) {
    return 0;
  }
  *(undefined1 *)(lVar3 + 0x54) = 1;
  *(int *)(lVar3 + 0x50) = (int)*(undefined8 *)(param_2 + 0x10);
  *(int *)(param_2 + 0x58) = *(int *)(lVar2 + 0x50) >> 6;
  *(int *)(param_2 + 0x5c) = *(int *)(lVar2 + 0x68) >> 6;
  *(int *)(param_2 + 0x60) = *(int *)(lVar2 + 0x40) >> 6;
  *(int *)(param_2 + 100) = *(int *)(lVar2 + 0x48) >> 6;
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(lVar2 + 0x9c);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(lVar2 + 0x98);
  lVar4 = (**(code **)(*(long *)param_1[6] + 0x98))();
  iVar6 = *(int *)(lVar4 + 0x14);
  lVar4 = (**(code **)(*(long *)param_1[6] + 0x98))();
  iVar7 = *(int *)(lVar4 + 0x18);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(lVar3 + 0x40);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(lVar3 + 0x48);
  *(int *)(param_2 + 0x78) = *(int *)(lVar3 + 0x44) - *(int *)(lVar3 + 0x40);
  *(int *)(param_2 + 0x7c) = *(int *)(lVar3 + 0x4c) - *(int *)(lVar3 + 0x48);
  iVar5 = (*(int *)(lVar3 + 0x44) - *(int *)(lVar3 + 0x40)) - (int)param_1[0x61];
  *(int *)(param_2 + 0x90) = iVar5;
  iVar1 = (*(int *)(lVar3 + 0x4c) - *(int *)(lVar3 + 0x48)) - (int)param_1[0x61];
  *(int *)(param_2 + 0x94) = iVar1;
  *(float *)(param_2 + 0x80) = (float)*(int *)(lVar3 + 0x40) / (float)iVar6;
  *(float *)(param_2 + 0x84) = (float)*(int *)(lVar3 + 0x48) / (float)iVar7;
  *(float *)(param_2 + 0x88) = (float)iVar5 / (float)iVar6;
  *(float *)(param_2 + 0x8c) = (float)iVar1 / (float)iVar7;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,(int *)(lVar2 + 0x98),param_1 + 8);
  if (*(int *)(lVar3 + 0x40) < *(int *)((long)param_1 + 0x30c)) {
    *(int *)((long)param_1 + 0x30c) = *(int *)(lVar3 + 0x40);
    iVar5 = *(int *)(lVar3 + 0x48);
    if (iVar5 < *(int *)((long)param_1 + 0x314)) goto LAB_0063176c;
LAB_006316cc:
    iVar5 = *(int *)(lVar3 + 0x44);
    if (iVar5 <= (int)param_1[0x62]) goto LAB_00631780;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x48);
    if (*(int *)((long)param_1 + 0x314) <= iVar5) goto LAB_006316cc;
LAB_0063176c:
    *(int *)((long)param_1 + 0x314) = iVar5;
    iVar5 = *(int *)(lVar3 + 0x44);
    if (iVar5 <= (int)param_1[0x62]) {
LAB_00631780:
      iVar5 = *(int *)(lVar3 + 0x4c);
      if (iVar5 <= (int)param_1[99]) {
        return 1;
      }
      goto LAB_00631790;
    }
  }
  *(int *)(param_1 + 0x62) = iVar5;
  iVar5 = *(int *)(lVar3 + 0x4c);
  if (iVar5 <= (int)param_1[99]) {
    return 1;
  }
LAB_00631790:
  *(int *)(param_1 + 99) = iVar5;
  return 1;
}


