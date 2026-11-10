/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e1560; name: FUN_012e1560
 */


void FUN_012e1560(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = *param_2;
  param_1[2] = 0xcbf29ce484222645;
  param_1[3] = &DAT_01d38550;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  lVar5 = param_2[5];
  if (lVar5 == 0) {
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    lVar5 = param_2[4];
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar1 = param_1[5];
    param_1[5] = lVar5;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    lVar5 = param_2[4];
  }
  if (lVar5 == 0) {
    param_1[1] = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar1 = param_1[1];
    param_1[1] = lVar5;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  param_1[8] = PTR_DAT_02710a48 + 0x10;
  lVar5 = param_2[9];
  param_1[9] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if ((code *)param_2[0xc] != (code *)0x0) {
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0xe);
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    uVar4 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar4;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_2[0x1c] != (code *)0x0) {
    (*(code *)param_2[0x1c])(param_2 + 0x1e,param_1 + 0x1e);
    uVar2 = param_2[0x1a];
    uVar3 = param_2[0x1b];
    uVar4 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar4;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
  }
  param_1[8] = PTR_DAT_027194a8 + 0x10;
  param_1[0x2a] = PTR_DAT_027164e0 + 0x10;
  lVar5 = param_2[0x2b];
  param_1[0x2b] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if ((code *)param_2[0x2e] != (code *)0x0) {
    (*(code *)param_2[0x2e])(param_2 + 0x30,param_1 + 0x30);
    uVar2 = param_2[0x2c];
    uVar3 = param_2[0x2d];
    uVar4 = param_2[0x2f];
    param_1[0x2e] = param_2[0x2e];
    param_1[0x2f] = uVar4;
    param_1[0x2c] = uVar2;
    param_1[0x2d] = uVar3;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if ((code *)param_2[0x3e] != (code *)0x0) {
    (*(code *)param_2[0x3e])(param_2 + 0x40,param_1 + 0x40);
    uVar2 = param_2[0x3c];
    uVar3 = param_2[0x3d];
    uVar4 = param_2[0x3f];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3f] = uVar4;
    param_1[0x3c] = uVar2;
    param_1[0x3d] = uVar3;
  }
  param_1[0x2a] = PTR_DAT_027164d8 + 0x10;
  param_1[0x4c] = param_2[0x4c];
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  if ((code *)param_2[0x50] != (code *)0x0) {
    (*(code *)param_2[0x50])(param_2 + 0x52,param_1 + 0x52);
    uVar2 = param_2[0x4e];
    uVar3 = param_2[0x4f];
    uVar4 = param_2[0x51];
    param_1[0x50] = param_2[0x50];
    param_1[0x51] = uVar4;
    param_1[0x4e] = uVar2;
    param_1[0x4f] = uVar3;
  }
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
  return;
}


