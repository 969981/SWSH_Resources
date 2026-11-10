/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a56700; name: FUN_00a56700
 */


void FUN_00a56700(long param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar6 + 0x1b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_00a56910;
  local_58 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  local_60 = *(undefined8 *)(param_1 + 0x48);
  FUN_00ffd430(uVar8,&local_60);
  FUN_00ffd010(uVar8,&local_58);
  if ((*(long *)(param_1 + 0x80) != 0) && (*param_2 != 0)) {
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_68 = *(long *)(param_1 + 0x50);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar6,&local_58,&local_68,param_2,10);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
  }
  local_58 = *(undefined8 *)(param_1 + 0x28);
  local_60 = *(undefined8 *)(param_1 + 0x30);
  if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x70) == 0;
  }
  iVar1 = *(int *)((long)param_2 + 0x14);
  lVar6 = *(long *)(param_1 + 0x98);
  if (iVar1 - 2U < 2) {
    if (bVar2 || (*(long *)(param_1 + 0x88) == 0 || *(long *)(param_1 + 0x90) == 0)) {
joined_r0x00a569d4:
      bVar7 = 1;
    }
    else {
      bVar7 = 1;
      FUN_014ca220(lVar5,0,(int)param_2[3],1,0,1);
      local_70 = *(undefined8 *)(param_1 + (ulong)(iVar1 != 2) * 8 + 0x60);
      FUN_0077eb10(*(undefined8 *)(param_1 + 0x58),&local_70,lVar4);
      FUN_0167cce0(lVar3,&local_58,10);
    }
  }
  else {
    if (iVar1 == 4) {
      if (!bVar2 && (*(long *)(param_1 + 0x88) != 0 && *(long *)(param_1 + 0x90) != 0)) {
        FUN_014ca220(lVar5,0,(int)param_2[3],1,0,1);
        FUN_014ca220(lVar5,1,*(undefined4 *)((long)param_2 + 0x1c),1,0,1);
        local_70 = *(undefined8 *)(param_1 + 0x70);
        FUN_0077eb10(*(undefined8 *)(param_1 + 0x58),&local_70,lVar4);
        FUN_0167cce0(lVar3,&local_60,10);
      }
      goto joined_r0x00a569d4;
    }
    bVar7 = 0;
  }
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | bVar7;
  }
LAB_00a56910:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


