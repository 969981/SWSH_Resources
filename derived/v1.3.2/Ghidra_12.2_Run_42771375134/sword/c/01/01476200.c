/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01476200; name: FUN_01476200
 */


void FUN_01476200(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x608) == 0) {
    return;
  }
  FUN_016bbde0(*(long *)(param_1 + 0x608),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),4);
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x5d0);
  iVar1 = *(int *)(lVar4 + 0x60);
  if (iVar1 == 3) {
LAB_014762fc:
    local_38 = -0x66ffb105a84516b3;
    FUN_0077eb10(lVar2,&local_38,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x608);
    local_40 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar5,0,1,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x6a8) + 0x141) = 0;
      iVar1 = *(int *)(param_1 + 0x718);
      goto joined_r0x01476378;
    }
LAB_01476434:
    *(undefined1 *)(*(long *)(param_1 + 0x6a8) + 0x141) = 0;
    iVar1 = *(int *)(param_1 + 0x718);
  }
  else {
    if (iVar1 == 2) {
      if ((*(int *)(lVar4 + 0xe0) != -1) || (*(int *)(lVar4 + 0xe4) != -1)) {
        local_38 = -0x66ffb205a8451866;
        FUN_0077eb10(lVar2,&local_38,lVar3);
        uVar5 = *(undefined8 *)(param_1 + 0x608);
        local_48 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar5,0,1,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x6a8) + 0x141) = 0;
          iVar1 = *(int *)(param_1 + 0x718);
          goto joined_r0x01476378;
        }
        goto LAB_01476434;
      }
    }
    else if (iVar1 == 0) goto LAB_014762fc;
    *(undefined1 *)(*(long *)(param_1 + 0x6a8) + 0x141) = 1;
    iVar1 = *(int *)(param_1 + 0x718);
  }
joined_r0x01476378:
  if (iVar1 == 0) {
    local_38 = -0x66ffb305a8451a19;
    FUN_0077eb10(lVar2,&local_38,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x608);
    local_50 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar5,1,0,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x608),0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


