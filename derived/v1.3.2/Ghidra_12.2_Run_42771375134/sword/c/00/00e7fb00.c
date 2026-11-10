/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7fb00; name: FUN_00e7fb00
 */


void FUN_00e7fb00(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  if (*param_1 == 0) {
    return;
  }
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
  if ((*(byte *)(lVar4 + 0x38c) >> 3 & 1) != 0) {
    uVar3 = FUN_01593610(lVar4 + 0x50);
    if ((uVar3 & 1) == 0) {
      local_70 = *(undefined8 *)(*param_2 + 0xb0);
      puStack_68 = *(undefined **)(*param_2 + 0xb8);
      local_48 = *param_1;
      goto joined_r0x00e7fc94;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x410) + 0x60);
    uVar3 = FUN_00a8cbe0(lVar4);
    lVar4 = lVar4 + -0x50;
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
    }
    lVar4 = *(long *)(lVar4 + 0x350);
    local_70 = 0x525829bbe8d0ab43;
    puStack_68 = &DAT_01d47e2c;
    local_60 = 4;
    local_58 = 0;
    iVar2 = FUN_00722fb0(lVar4,&local_70);
    if (iVar2 < 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x1b8) + (long)iVar2 * 0x130;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_70 = *(undefined8 *)(*param_2 + 0xb0);
    puStack_68 = *(undefined **)(*param_2 + 0xb8);
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar4 + 0x120);
      iVar2 = *(int *)(*(long *)(lVar4 + 0x128) + 0x40);
      FUN_00723030(lVar1,iVar2);
      lVar4 = *(long *)(lVar1 + 0x1b8) + (long)iVar2 * 0x130;
      local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0xd0) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 0x20) * 0.0 +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0xb0) >> 0x20) * 0.0 +
                          (float)((ulong)*(undefined8 *)(lVar4 + 0xc0) >> 0x20) * 0.0,
                          (float)local_70 +
                          (float)*(undefined8 *)(lVar4 + 0xd0) +
                          (float)*(undefined8 *)(lVar4 + 0xa0) * 0.0 +
                          (float)*(undefined8 *)(lVar4 + 0xb0) * 0.0 +
                          (float)*(undefined8 *)(lVar4 + 0xc0) * 0.0);
      puStack_68 = (undefined *)
                   CONCAT44((float)((ulong)puStack_68 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0xd8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x20) * 0.0 +
                            (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20) * 0.0 +
                            (float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20) * 0.0,
                            SUB84(puStack_68,0) +
                            (float)*(undefined8 *)(lVar4 + 0xd8) +
                            (float)*(undefined8 *)(lVar4 + 0xa8) * 0.0 +
                            (float)*(undefined8 *)(lVar4 + 0xb8) * 0.0 +
                            (float)*(undefined8 *)(lVar4 + 200) * 0.0);
    }
  }
  local_48 = *param_1;
joined_r0x00e7fc94:
  if (local_48 == 0) {
    FUN_00e7fce0(&local_48,&local_70,param_3,param_4,param_5 & 1,param_6 & 1);
  }
  else {
    plVar5 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00e7fce0(&local_48,&local_70,param_3,param_4,param_5 & 1,param_6 & 1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


