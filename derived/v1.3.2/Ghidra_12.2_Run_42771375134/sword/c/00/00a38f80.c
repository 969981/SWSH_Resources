/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a38f80; name: FUN_00a38f80
 */


void FUN_00a38f80(long *param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  uint local_64;
  long local_58;
  
  if (*(char *)(*param_1 + 0x100) == '\0') {
    FUN_016b2da0(*(undefined8 *)(param_2 + 0x28),0);
    FUN_016b2d70(*(undefined8 *)(param_2 + 0x28),0);
    return;
  }
  lVar6 = *(long *)(*param_1 + 0x10);
  FUN_016b2da0(*(undefined8 *)(param_2 + 0x28),1);
  iVar3 = *(int *)param_1[1];
  bVar2 = FUN_008809d0(*(undefined4 *)param_1[2]);
  FUN_016b2d70(*(undefined8 *)(param_2 + 0x28),iVar3 != 0 & bVar2);
  local_58 = *(long *)param_1[3];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00a39350(lVar6,param_2,&local_58,&DAT_02154870,0,*(undefined4 *)param_1[4],
               *(undefined4 *)param_1[5]);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar7 = *(long *)param_1[3];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar10 = *(undefined4 *)param_1[1];
  uVar1 = *(undefined4 *)param_1[6];
  lVar8 = *(long *)(*(long *)(lVar6 + 0x1b0) + 0x2e8);
  if (lVar8 == 0) {
    FUN_0077eb10(lVar7,&DAT_02154878,0);
    lVar8 = *(long *)(*(long *)(lVar6 + 0x1b0) + 0x2e0);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0077eb10(lVar7,&DAT_02154878,lVar8);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = *(long *)(*(long *)(lVar6 + 0x1b0) + 0x2e0);
  }
  if (lVar8 == 0) {
    FUN_014ca220(0,0,uVar10,2,0,1);
    FUN_014ca220(0,1,uVar1,2,0,1);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_014ca220(lVar8,0,uVar10,2,0,1);
    FUN_014ca220(lVar8,1,uVar1,2,0,1);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  FUN_0167cce0(*(undefined8 *)(lVar6 + 0x1b0),param_2 + 8,10);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  iVar3 = FUN_016ac4c0(*(undefined4 *)param_1[1],*(undefined4 *)param_1[6]);
  if (iVar3 - 1U < 3) {
    uVar10 = *(undefined4 *)(&DAT_02154880 + (long)(int)(iVar3 - 1U) * 4);
  }
  else {
    uVar10 = 0;
  }
  FUN_00ffd510(uVar10,lVar6,param_2 + 0x20);
  local_64 = 1;
  local_78 = *(undefined8 *)param_1[7];
  _local_70 = CONCAT44(*(undefined4 *)param_1[4],*(undefined4 *)param_1[8]);
  local_68 = 1;
  uVar5 = FUN_00a39640(&local_78);
  if ((uVar5 & 1) == 0) {
    uVar10 = 0x40800000;
  }
  else if (local_64 < 4) {
    uVar10 = *(undefined4 *)(&DAT_01d49e00 + (long)(int)local_64 * 4);
  }
  else {
    uVar10 = 0;
  }
  FUN_00ffd510(uVar10,lVar6,param_2 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x438);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = (**(code **)(**(long **)param_1[7] + 0x758))
                    (*(long **)param_1[7],*(undefined4 *)param_1[4],*(undefined8 *)param_1[9]);
  FUN_016a7910(lVar7,uVar4,0,*(undefined8 *)(param_2 + 0x30),0,0);
  FUN_00ffd510((float)(uVar4 & 0xff),lVar6,param_2 + 0x18);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


