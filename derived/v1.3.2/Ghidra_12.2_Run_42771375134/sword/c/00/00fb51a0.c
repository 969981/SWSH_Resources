/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb51a0; name: FUN_00fb51a0
 */


void FUN_00fb51a0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02722eb8 + 0x10;
  param_1[9] = (long)(PTR_DAT_02722eb8 + 0x80);
  *param_1 = (long)puVar1;
  if (param_1[0x4b8] != 0) {
    FUN_00fb5450(param_1,0);
    lVar2 = param_1[0x4b8];
    param_1[0x4b8] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  if (param_1[0x4b9] != 0) {
    FUN_00fb5450(param_1,1);
    lVar2 = param_1[0x4b9];
    param_1[0x4b9] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  if (param_1[0x4ba] != 0) {
    FUN_00fb5450(param_1,2);
    lVar2 = param_1[0x4ba];
    param_1[0x4ba] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  if (param_1[0x4bb] != 0) {
    FUN_00fb5450(param_1,3);
    lVar2 = param_1[0x4bb];
    param_1[0x4bb] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  if (param_1[0x39] == 0) {
LAB_00fb52ac:
    if (param_1[0x3f] == 0) goto LAB_00fb5300;
LAB_00fb52b4:
    if (param_1[0x451] == 0) {
      param_1[0x451] = 0;
      goto LAB_00fb5300;
    }
    FUN_006e2100(param_1[0x451],param_1 + 0x450);
    lVar2 = param_1[0x451];
    param_1[0x451] = 0;
    if (lVar2 == 0) goto LAB_00fb5300;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar2 = param_1[0x45];
  }
  else {
    if (param_1[0x42f] != 0) {
      FUN_006e2100(param_1[0x42f],param_1 + 0x42e);
      lVar2 = param_1[0x42f];
      param_1[0x42f] = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      goto LAB_00fb52ac;
    }
    param_1[0x42f] = 0;
    if (param_1[0x3f] != 0) goto LAB_00fb52b4;
LAB_00fb5300:
    lVar2 = param_1[0x45];
  }
  if (lVar2 != 0) {
    if (param_1[0x473] == 0) {
      param_1[0x473] = 0;
      lVar2 = param_1[0x4b];
      goto joined_r0x00fb5338;
    }
    FUN_006e2100(param_1[0x473],param_1 + 0x472);
    lVar2 = param_1[0x473];
    param_1[0x473] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0x4b];
joined_r0x00fb5338:
  if (lVar2 != 0) {
    if (param_1[0x495] == 0) {
      param_1[0x495] = 0;
    }
    else {
      FUN_006e2100(param_1[0x495],param_1 + 0x494);
      lVar2 = param_1[0x495];
      param_1[0x495] = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
    }
  }
  FUN_00fb5690(param_1 + 0x4c0);
  if (param_1[0x4bf] != 0) {
    (**(code **)(*(long *)(param_1[0x4bf] + 0x48) + 0x18))();
    param_1[0x4bf] = 0;
  }
  if (param_1[0x4be] != 0) {
    (**(code **)(*(long *)(param_1[0x4be] + 0x48) + 0x18))();
    param_1[0x4be] = 0;
  }
  if (param_1[0x4bd] != 0) {
    (**(code **)(*(long *)(param_1[0x4bd] + 0x48) + 0x18))();
    param_1[0x4bd] = 0;
  }
  if (param_1[0x4bb] != 0) {
    (**(code **)(*(long *)(param_1[0x4bb] + 0x48) + 0x18))();
    param_1[0x4bb] = 0;
  }
  if (param_1[0x4ba] != 0) {
    (**(code **)(*(long *)(param_1[0x4ba] + 0x48) + 0x18))();
    param_1[0x4ba] = 0;
  }
  if (param_1[0x4b9] != 0) {
    (**(code **)(*(long *)(param_1[0x4b9] + 0x48) + 0x18))();
    param_1[0x4b9] = 0;
  }
  if (param_1[0x4b8] != 0) {
    (**(code **)(*(long *)(param_1[0x4b8] + 0x48) + 0x18))();
    param_1[0x4b8] = 0;
  }
  FUN_00fb5830(param_1 + 0x42e);
  FUN_00fb3a90(param_1 + 0xe);
  return;
}


