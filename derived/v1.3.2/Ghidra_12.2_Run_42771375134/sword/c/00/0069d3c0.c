/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069d3c0; name: FUN_0069d3c0
 */


void FUN_0069d3c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = param_1[0x8c];
  puVar1 = PTR_DAT_02715068 + 0x90;
  puVar2 = PTR_DAT_02715068 + 0x100;
  *param_1 = (long)(PTR_DAT_02715068 + 0x10);
  param_1[0x8c] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar8 != 0) {
    FUN_0069da10(lVar8);
    (**(code **)(*(long *)param_1[0x8d] + 0x18))
              ((long *)param_1[0x8d],lVar8,param_1[0x8e],param_1[0x8f]);
  }
  lVar8 = param_1[0x88];
  param_1[0x88] = 0;
  if (lVar8 != 0) {
    FUN_006e0110(lVar8);
    (**(code **)(*(long *)param_1[0x89] + 0x18))
              ((long *)param_1[0x89],lVar8,param_1[0x8a],param_1[0x8b]);
  }
  pcVar7 = (code *)param_1[0x71];
  if (pcVar7 != (code *)0x0) {
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    (*pcVar7)(param_1 + 0x74);
  }
  pcVar7 = (code *)param_1[0x61];
  if (pcVar7 != (code *)0x0) {
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    (*pcVar7)(param_1 + 100);
  }
  pcVar7 = (code *)param_1[0x51];
  if (pcVar7 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar7)(param_1 + 0x54);
  }
  if ((long *)param_1[0x4e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x18))();
    param_1[0x4e] = 0;
  }
  lVar8 = param_1[0x4a];
  param_1[0x4a] = 0;
  if (lVar8 != 0) {
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 != 0) {
      *(long *)(lVar8 + 0x18) = lVar5;
      (**(code **)(**(long **)(lVar8 + 0x28) + 0x18))
                (*(long **)(lVar8 + 0x28),lVar5,*(long *)(lVar8 + 0x20) - lVar5,0x10);
    }
    (**(code **)(*(long *)param_1[0x4b] + 0x18))
              ((long *)param_1[0x4b],lVar8,param_1[0x4c],param_1[0x4d]);
  }
  lVar8 = param_1[0x46];
  param_1[0x46] = 0;
  if (lVar8 != 0) {
    lVar5 = *(long *)(lVar8 + 0x10);
    if (lVar5 != 0) {
      *(long *)(lVar8 + 0x18) = lVar5;
      (**(code **)(**(long **)(lVar8 + 0x28) + 0x18))
                (*(long **)(lVar8 + 0x28),lVar5,*(long *)(lVar8 + 0x20) - lVar5,0x10);
    }
    (**(code **)(*(long *)param_1[0x47] + 0x18))
              ((long *)param_1[0x47],lVar8,param_1[0x48],param_1[0x49]);
  }
  lVar8 = param_1[0x40];
  if (lVar8 != 0) {
    lVar5 = param_1[0x41];
    if (lVar5 == lVar8) {
      lVar5 = lVar8;
    }
    else {
      lVar11 = 0;
      do {
        lVar3 = lVar5 + lVar11;
        pcVar7 = *(code **)(lVar3 + -0x78);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar7)(lVar3 + -0x60);
        }
        pcVar7 = *(code **)(lVar3 + -0xf8);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0xf0) = 0;
          *(undefined8 *)(lVar3 + -0xe8) = 0;
          *(undefined8 *)(lVar3 + -0x100) = 0;
          *(undefined8 *)(lVar3 + -0xf8) = 0;
          (*pcVar7)(lVar3 + -0xe0);
        }
        lVar4 = *(long *)(lVar3 + -0x108);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          *(long *)(lVar3 + -0x108) = 0;
        }
        lVar11 = lVar11 + -0x120;
      } while (lVar8 - lVar5 != lVar11);
      lVar5 = param_1[0x40];
    }
    param_1[0x41] = lVar8;
    (**(code **)(*(long *)param_1[0x43] + 0x18))
              ((long *)param_1[0x43],lVar5,param_1[0x42] - lVar5,0x10);
  }
  plVar9 = (long *)param_1[0x3a];
  if (plVar9 != (long *)0x0) {
    if ((long *)param_1[0x3b] == plVar9) {
      plVar6 = plVar9;
    }
    else {
      plVar6 = (long *)param_1[0x3b];
      do {
        plVar10 = plVar6 + -1;
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          plVar6[-1] = 0;
        }
        plVar6 = plVar10;
      } while (plVar9 != plVar10);
      plVar6 = (long *)param_1[0x3a];
    }
    param_1[0x3b] = (long)plVar9;
    (**(code **)(*(long *)param_1[0x3d] + 0x18))
              ((long *)param_1[0x3d],plVar6,param_1[0x3c] - (long)plVar6,8);
  }
  lVar8 = param_1[0x36];
  param_1[0x36] = 0;
  if (lVar8 != 0) {
    FUN_0069e2b0(lVar8 + 0x10);
    (**(code **)(*(long *)param_1[0x37] + 0x18))
              ((long *)param_1[0x37],lVar8,param_1[0x38],param_1[0x39]);
  }
  lVar8 = param_1[0x32];
  param_1[0x32] = 0;
  if (lVar8 != 0) {
    lVar5 = *(long *)(lVar8 + 0x60);
    if (lVar5 != 0) {
      *(long *)(lVar8 + 0x68) = lVar5;
      (**(code **)(**(long **)(lVar8 + 0x78) + 0x18))
                (*(long **)(lVar8 + 0x78),lVar5,*(long *)(lVar8 + 0x70) - lVar5,8);
    }
    lVar5 = *(long *)(lVar8 + 0x30);
    if (lVar5 != 0) {
      *(long *)(lVar8 + 0x38) = lVar5;
      (**(code **)(**(long **)(lVar8 + 0x48) + 0x18))
                (*(long **)(lVar8 + 0x48),lVar5,*(long *)(lVar8 + 0x40) - lVar5,8);
    }
    FUN_0069e020(lVar8);
    (**(code **)(*(long *)param_1[0x33] + 0x18))
              ((long *)param_1[0x33],lVar8,param_1[0x34],param_1[0x35]);
  }
  param_1[0x10] = (long)(PTR_DAT_02715090 + 0x10);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 0;
    pcVar7 = (code *)param_1[0x23];
  }
  else {
    FUN_006e2100();
    lVar8 = param_1[0x11];
    param_1[0x11] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar7 = (code *)param_1[0x23];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar7)(param_1 + 0x26);
  }
  pcVar7 = (code *)param_1[0x13];
  if (pcVar7 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar7)(param_1 + 0x16);
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


