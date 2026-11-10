/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d7d60; name: FUN_001d7d60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001d7d60(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 >> 7 & 1) == 0) {
    uVar4 = FUN_003ba9c0(param_1 + 3);
    *(undefined4 *)(param_1 + 8) = uVar4;
    if ((uVar1 & 0x300) == 0) {
LAB_001d7de0:
      bVar2 = FUN_003ba9f0(param_1 + 3);
      if (*(uint *)(param_1 + 1) >> 0x1e < 3) {
        *(byte *)((long)param_1 + 0x44) = bVar2 & 1;
      }
      goto joined_r0x001d7dcc;
    }
  }
  else if ((uVar1 & 0x300) == 0) {
    FUN_003ba9e0(*(undefined4 *)(param_1 + 8),param_1 + 3);
    goto LAB_001d7de0;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    FUN_003baa10(*(undefined4 *)(param_1 + 8));
  }
  else {
    FUN_003baa20(param_1 + 3);
  }
joined_r0x001d7dcc:
  if ((uVar1 & 0xfffc7f) != 0) {
    puVar3 = (undefined4 *)param_1[2];
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = puVar3;
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_003ba970(param_1 + 3,*(undefined4 *)((long)puVar3 + 4));
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 & 1) != 0) {
      FUN_003ba950(param_1 + 3,*puVar3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_003ba990(param_1 + 3,*(undefined4 *)((long)puVar3 + 8));
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_003ba9b0(*(undefined4 *)((long)puVar3 + 0xc),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_003baa40(*(undefined4 *)((long)puVar3 + 0x10),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_003baa80(param_1 + 3,*(undefined2 *)((long)puVar3 + 0x14));
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_003baa60(*(undefined4 *)((long)puVar3 + 0x18),param_1 + 3);
    }
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff000000;
  return;
}


