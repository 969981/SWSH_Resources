/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7bb40; name: FUN_00c7bb40
 */


void FUN_00c7bb40(long param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_38;
  
  *(undefined4 *)(param_2 + 0x20) = *param_3;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 2);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_2 + 0x18);
  *(long *)(param_2 + 0x18) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  *(long *)(param_2 + 0x28) = param_1;
  uVar1 = *(undefined8 *)(param_3 + 4);
  uVar2 = *(undefined8 *)(param_3 + 6);
  uVar3 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = uVar2;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0xc);
  if (param_3[0xe] == 1) {
    lVar8 = *(long *)(param_3 + 0x10);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(param_2 + 0x58);
    *(long *)(param_2 + 0x58) = lVar8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    uVar1 = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x12);
    *(undefined8 *)(param_2 + 0x68) = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x12);
    *(undefined8 *)(param_2 + 0x68) = uVar1;
    lVar8 = *(long *)(param_3 + 0x10);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(param_2 + 0x70);
    *(long *)(param_2 + 0x70) = lVar8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x22);
  uVar3 = *(undefined8 *)(param_3 + 0x26);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_2 + 200) = uVar3;
  *(undefined8 *)(param_2 + 0xb0) = uVar1;
  *(undefined8 *)(param_2 + 0xb8) = uVar2;
  *(undefined4 *)(param_2 + 0xd0) = param_3[0x50];
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x2a);
  uVar3 = *(undefined8 *)(param_3 + 0x2e);
  *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_3 + 0x2c);
  *(undefined8 *)(param_2 + 0x128) = uVar3;
  *(undefined8 *)(param_2 + 0x110) = uVar1;
  *(undefined8 *)(param_2 + 0x118) = uVar2;
  *(undefined4 *)(param_2 + 0x130) = param_3[0x51];
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x32);
  uVar3 = *(undefined8 *)(param_3 + 0x36);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_3 + 0x34);
  *(undefined8 *)(param_2 + 0x188) = uVar3;
  *(undefined8 *)(param_2 + 0x170) = uVar1;
  *(undefined8 *)(param_2 + 0x178) = uVar2;
  *(undefined4 *)(param_2 + 400) = param_3[0x52];
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = *(undefined8 *)(param_3 + 0x3a);
  uVar3 = *(undefined8 *)(param_3 + 0x3e);
  *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_3 + 0x3c);
  *(undefined8 *)(param_2 + 0x1e8) = uVar3;
  *(undefined8 *)(param_2 + 0x1d0) = uVar1;
  *(undefined8 *)(param_2 + 0x1d8) = uVar2;
  *(undefined4 *)(param_2 + 0x1f0) = param_3[0x53];
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar3 = *(undefined8 *)(param_3 + 0x42);
  uVar2 = *(undefined8 *)(param_3 + 0x44);
  *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_3 + 0x46);
  *(undefined8 *)(param_2 + 0x240) = uVar2;
  *(undefined8 *)(param_2 + 0x238) = uVar3;
  *(undefined8 *)(param_2 + 0x230) = uVar1;
  *(undefined4 *)(param_2 + 0x250) = param_3[0x54];
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x4a);
  uVar2 = *(undefined8 *)(param_3 + 0x4c);
  *(undefined8 *)(param_2 + 0x2a8) = *(undefined8 *)(param_3 + 0x4e);
  *(undefined8 *)(param_2 + 0x2a0) = uVar2;
  *(undefined8 *)(param_2 + 0x298) = uVar3;
  *(undefined8 *)(param_2 + 0x290) = uVar1;
  *(undefined4 *)(param_2 + 0x2b0) = param_3[0x55];
  if (*(char *)((long)param_3 + 0x7a) != '\0') {
    lVar8 = *(long *)(param_3 + 6);
    if (*(long *)(param_1 + 0x18) == 0) {
      local_38 = 0;
    }
    else {
      FUN_00c80dd0(&local_38);
    }
    puVar6 = (undefined8 *)FUN_00cbe970(local_38,0xc);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if ((lVar8 != 0x7524df48aa4980f8) && (lVar8 != -0x1522cca8bd8b7e8)) {
      if (*(long *)(param_1 + 0x18) == 0) {
        local_38 = 0;
      }
      else {
        FUN_00c80dd0(&local_38);
      }
      puVar7 = (undefined8 *)FUN_00cbe970(local_38,0x38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      *(undefined4 *)(param_2 + 0xd0) = 0;
      *(undefined8 *)(param_2 + 0xb0) = *puVar6;
      *(undefined8 *)(param_2 + 0xb8) = *puVar7;
      cVar4 = *(char *)((long)param_3 + 0x7b);
      goto joined_r0x00c7bd78;
    }
    *(undefined4 *)(param_2 + 0xd0) = 0;
    *(undefined8 *)(param_2 + 0xb0) = *puVar6;
    *(undefined8 *)(param_2 + 0xb8) = 0xc498df2726bfbc7c;
  }
  cVar4 = *(char *)((long)param_3 + 0x7b);
joined_r0x00c7bd78:
  if (cVar4 != '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
      local_38 = 0;
    }
    else {
      FUN_00c80dd0(&local_38);
    }
    puVar6 = (undefined8 *)FUN_00cbe970(local_38,0xc);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      local_38 = 0;
    }
    else {
      FUN_00c80dd0(&local_38);
    }
    puVar7 = (undefined8 *)FUN_00cbe970(local_38,0x39);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_2 + 0x130) = 1;
    *(undefined8 *)(param_2 + 0x110) = *puVar6;
    *(undefined8 *)(param_2 + 0x118) = *puVar7;
  }
  *(undefined1 *)(param_2 + 0x2c0) = *(undefined1 *)(param_3 + 0x56);
  *(undefined1 *)(param_2 + 0x2c1) = *(undefined1 *)((long)param_3 + 0x159);
  *(undefined1 *)(param_2 + 0x2c2) = *(undefined1 *)((long)param_3 + 0x15a);
  *(undefined1 *)(param_2 + 0x2c3) = *(undefined1 *)((long)param_3 + 0x15b);
  *(undefined1 *)(param_2 + 0x2c4) = *(undefined1 *)(param_3 + 0x57);
  *(undefined1 *)(param_2 + 0x2c5) = *(undefined1 *)((long)param_3 + 0x15d);
  return;
}


