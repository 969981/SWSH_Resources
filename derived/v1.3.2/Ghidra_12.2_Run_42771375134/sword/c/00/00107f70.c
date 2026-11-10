/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00107f70; name: FUN_00107f70
 */


void FUN_00107f70(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  puVar1 = PTR_DAT_02710a48 + 0x10;
  *param_1 = (long)(PTR_DAT_02710a40 + 0x10);
  do {
    *(undefined **)((long)param_1 + lVar4 + 0x4340) = puVar1;
    lVar2 = *(long *)((long)param_1 + lVar4 + 0x4348);
    if (lVar2 == 0) {
      *(undefined8 *)((long)param_1 + lVar4 + 0x4348) = 0;
      pcVar3 = *(code **)((long)param_1 + lVar4 + 0x43d8);
    }
    else {
      FUN_006e2100(lVar2,(long)param_1 + lVar4 + 0x4340);
      lVar2 = *(long *)((long)param_1 + lVar4 + 0x4348);
      *(undefined8 *)((long)param_1 + lVar4 + 0x4348) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      pcVar3 = *(code **)((long)param_1 + lVar4 + 0x43d8);
    }
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)((long)param_1 + lVar4 + 0x43e8) = 0;
      *(undefined8 *)((long)param_1 + lVar4 + 0x43e0) = 0;
      *(undefined8 *)((long)param_1 + lVar4 + 0x43d8) = 0;
      *(undefined8 *)((long)param_1 + lVar4 + 0x43d0) = 0;
      (*pcVar3)((long)param_1 + lVar4 + 0x43f0);
    }
    pcVar3 = *(code **)((long)param_1 + lVar4 + 0x4358);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)((long)param_1 + lVar4 + 0x4368) = 0;
      *(undefined8 *)((long)param_1 + lVar4 + 0x4360) = 0;
      *(undefined8 *)((long)param_1 + lVar4 + 0x4358) = 0;
      *(undefined8 *)((long)param_1 + lVar4 + 0x4350) = 0;
      (*pcVar3)((long)param_1 + lVar4 + 0x4370);
    }
    lVar2 = *(long *)((long)param_1 + lVar4 + 0x4348);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar4 + 0x4348) = 0;
    }
    lVar4 = lVar4 + -0x110;
  } while (lVar4 != -0x4400);
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar2 = param_1[5];
    if (lVar2 == lVar4) {
      lVar2 = lVar4;
    }
    else {
      do {
        if ((*(long *)(lVar2 + -0x20) != 0) && (*(long *)(lVar2 + -0x38) != 0)) {
          (**(code **)(*(long *)(*(long *)(lVar2 + -0x38) + 0x48) + 0x18))();
          *(undefined8 *)(lVar2 + -0x38) = 0;
        }
        lVar5 = lVar2 + -0x40;
        *(undefined8 *)(lVar2 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x30) = 0xcbf29ce484222645;
        *(undefined1 **)(lVar2 + -0x28) = &DAT_01d38550;
        *(undefined8 *)(lVar2 + -0x20) = 0;
        if (*(long *)(lVar2 + -0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar2 + -0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar2 + -0x18) = 0;
        }
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined4 *)(lVar2 + -0x10) = 0;
        lVar2 = lVar5;
      } while (lVar4 != lVar5);
      lVar2 = param_1[4];
    }
    param_1[5] = lVar4;
    (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],lVar2,param_1[6] - lVar2,8);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


