/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fafad0; name: FUN_00fafad0
 */


void FUN_00fafad0(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_02722e78 + 0x10);
  if (param_1[399] != 0) {
    (**(code **)(*(long *)(param_1[399] + 0x48) + 0x18))();
    param_1[399] = 0;
  }
  if (param_1[0x18e] != 0) {
    (**(code **)(*(long *)(param_1[0x18e] + 0x48) + 0x18))();
    param_1[0x18e] = 0;
  }
  if (param_1[0x18d] != 0) {
    (**(code **)(*(long *)(param_1[0x18d] + 0x48) + 0x18))();
    param_1[0x18d] = 0;
  }
  if (param_1[0x18c] != 0) {
    (**(code **)(*(long *)(param_1[0x18c] + 0x48) + 0x18))();
    param_1[0x18c] = 0;
  }
  if (param_1[0x18b] != 0) {
    (**(code **)(*(long *)(param_1[0x18b] + 0x48) + 0x18))();
    param_1[0x18b] = 0;
  }
  if (param_1[0x18a] != 0) {
    (**(code **)(*(long *)(param_1[0x18a] + 0x48) + 0x18))();
    param_1[0x18a] = 0;
  }
  if (param_1[0x189] != 0) {
    (**(code **)(*(long *)(param_1[0x189] + 0x48) + 0x18))();
    param_1[0x189] = 0;
  }
  if (param_1[0x188] != 0) {
    (**(code **)(*(long *)(param_1[0x188] + 0x48) + 0x18))();
    param_1[0x188] = 0;
  }
  if (param_1[0x187] != 0) {
    (**(code **)(*(long *)(param_1[0x187] + 0x48) + 0x18))();
    param_1[0x187] = 0;
  }
  if (param_1[0x186] != 0) {
    (**(code **)(*(long *)(param_1[0x186] + 0x48) + 0x18))();
    param_1[0x186] = 0;
  }
  if (param_1[0x185] != 0) {
    (**(code **)(*(long *)(param_1[0x185] + 0x48) + 0x18))();
    param_1[0x185] = 0;
  }
  if (param_1[0x184] != 0) {
    (**(code **)(*(long *)(param_1[0x184] + 0x48) + 0x18))();
    param_1[0x184] = 0;
  }
  if (param_1[0x183] != 0) {
    (**(code **)(*(long *)(param_1[0x183] + 0x48) + 0x18))();
    param_1[0x183] = 0;
  }
  if (param_1[0x182] != 0) {
    (**(code **)(*(long *)(param_1[0x182] + 0x48) + 0x18))();
    param_1[0x182] = 0;
  }
  if (param_1[0x181] != 0) {
    (**(code **)(*(long *)(param_1[0x181] + 0x48) + 0x18))();
    param_1[0x181] = 0;
  }
  if (param_1[0x180] != 0) {
    (**(code **)(*(long *)(param_1[0x180] + 0x48) + 0x18))();
    param_1[0x180] = 0;
  }
  puVar1 = PTR_DAT_027164e0 + 0x10;
  lVar5 = 0;
  do {
    lVar3 = *(long *)((long)param_1 + lVar5 + 0xaf8);
    *(undefined **)((long)param_1 + lVar5 + 0xaf0) = puVar1;
    if (lVar3 == 0) {
      *(undefined8 *)((long)param_1 + lVar5 + 0xaf8) = 0;
      pcVar4 = *(code **)((long)param_1 + lVar5 + 0xb88);
    }
    else {
      FUN_006e2100(lVar3,(long)param_1 + lVar5 + 0xaf0);
      lVar3 = *(long *)((long)param_1 + lVar5 + 0xaf8);
      *(undefined8 *)((long)param_1 + lVar5 + 0xaf8) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar4 = *(code **)((long)param_1 + lVar5 + 0xb88);
    }
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)((long)param_1 + lVar5 + 0xb98) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0xb90) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0xb88) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0xb80) = 0;
      (*pcVar4)((long)param_1 + lVar5 + 0xba0);
    }
    pcVar4 = *(code **)((long)param_1 + lVar5 + 0xb08);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)((long)param_1 + lVar5 + 0xb18) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0xb10) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0xb08) = 0;
      *(undefined8 *)((long)param_1 + lVar5 + 0xb00) = 0;
      (*pcVar4)((long)param_1 + lVar5 + 0xb20);
    }
    lVar3 = *(long *)((long)param_1 + lVar5 + 0xaf8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar5 + 0xaf8) = 0;
    }
    bVar2 = lVar5 != -0xaa0;
    lVar5 = lVar5 + -0x110;
  } while (bVar2);
  return;
}


