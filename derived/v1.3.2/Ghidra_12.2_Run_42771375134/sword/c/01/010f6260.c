/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f6260; name: FUN_010f6260
 */


void FUN_010f6260(long param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6e;
  long local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  long local_48;
  
  if (*(long *)(param_2 + 4) == 0) {
    uVar1 = 0;
  }
  else if (*(long *)(param_2 + 6) == 0) {
    uVar1 = 1;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    uVar1 = 2;
  }
  else if (*(long *)(param_2 + 10) == 0) {
    uVar1 = 3;
  }
  else if (*(long *)(param_2 + 0xc) == 0) {
    uVar1 = 4;
  }
  else if (*(long *)(param_2 + 0xe) == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 6;
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar1 = 7;
    }
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x101;
  local_56 = 0;
  lVar2 = *(long *)(param_1 + 0x6f8);
  if ((lVar2 != 0) && (*(long *)(param_2 + 2) != 0)) {
    lVar3 = *(long *)(param_1 + 0x700);
    if (lVar3 == 0) {
      FUN_0077eb10(lVar2,param_2 + 2,0);
      lVar2 = *(long *)(param_1 + 0x700);
      goto joined_r0x010f6358;
    }
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(lVar2,param_2 + 2,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar2 = *(long *)(param_1 + 0x700);
joined_r0x010f6358:
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_56 = *param_2 == 1;
  local_60 = CONCAT44(local_60._4_4_,param_2[1]);
  local_58 = CONCAT11(local_58._1_1_,!(bool)local_56);
  if (param_2[1] == 2) {
    local_60 = CONCAT44(param_2[0x12],2);
  }
  local_68 = lVar2;
  if (uVar1 == 0) {
    FUN_01038170(param_1,&local_68);
  }
  else {
    local_70 = 1;
    local_80 = 0;
    local_78 = 0;
    local_6e = 0xffff;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_48 = *(long *)(param_2 + 4);
    local_a8 = *(undefined8 *)(param_1 + 0x708);
    if ((local_48 != 0) && (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    local_48 = *(long *)(param_2 + 6);
    if (((1 < uVar1) && (local_a0 = *(undefined8 *)(param_1 + 0x710), local_48 != 0)) &&
       (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    local_48 = *(long *)(param_2 + 8);
    if (((2 < uVar1) && (local_98 = *(undefined8 *)(param_1 + 0x718), local_48 != 0)) &&
       (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    local_48 = *(long *)(param_2 + 10);
    if (((3 < uVar1) && (local_90 = *(undefined8 *)(param_1 + 0x720), local_48 != 0)) &&
       (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    local_48 = *(long *)(param_2 + 0xc);
    if (((4 < uVar1) && (local_88 = *(undefined8 *)(param_1 + 0x728), local_48 != 0)) &&
       (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    local_48 = *(long *)(param_2 + 0xe);
    if (((5 < uVar1) && (local_80 = *(undefined8 *)(param_1 + 0x730), local_48 != 0)) &&
       (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    local_48 = *(long *)(param_2 + 0x10);
    if (((uVar1 == 7) && (local_78 = *(undefined8 *)(param_1 + 0x738), local_48 != 0)) &&
       (*(long *)(param_1 + 0x6f8) != 0)) {
      FUN_0077eb10(*(long *)(param_1 + 0x6f8),&local_48);
    }
    FUN_01037730(param_1,&local_68,&local_a8);
  }
  return;
}


