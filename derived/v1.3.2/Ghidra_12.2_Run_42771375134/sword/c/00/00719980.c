/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00719980; name: FUN_00719980
 */


void FUN_00719980(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02710800;
  *(undefined **)(param_1 + 0x390) = PTR_DAT_02710800 + 0x10;
  if (*(long *)(param_1 + 0x398) == 0) {
    *(undefined8 *)(param_1 + 0x398) = 0;
    pcVar4 = *(code **)(param_1 + 0x428);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x398),param_1 + 0x390);
    lVar2 = *(long *)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x398) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar4 = *(code **)(param_1 + 0x428);
  }
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined8 *)(param_1 + 0x430) = 0;
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    (*pcVar4)(param_1 + 0x440);
  }
  pcVar4 = *(code **)(param_1 + 0x3a8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    (*pcVar4)(param_1 + 0x3c0);
  }
  if (*(long *)(param_1 + 0x398) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x398) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  *(undefined **)(param_1 + 0x280) = puVar1 + 0x10;
  if (*(long *)(param_1 + 0x288) == 0) {
    *(undefined8 *)(param_1 + 0x288) = 0;
    pcVar4 = *(code **)(param_1 + 0x318);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x288),param_1 + 0x280);
    lVar2 = *(long *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x288) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar4 = *(code **)(param_1 + 0x318);
  }
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    (*pcVar4)(param_1 + 0x330);
  }
  pcVar4 = *(code **)(param_1 + 0x298);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    (*pcVar4)(param_1 + 0x2b0);
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x288) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  *(undefined **)(param_1 + 0x170) = puVar1 + 0x10;
  if (*(long *)(param_1 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0x178) = 0;
    pcVar4 = *(code **)(param_1 + 0x208);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x178),param_1 + 0x170);
    lVar2 = *(long *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar4 = *(code **)(param_1 + 0x208);
  }
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    (*pcVar4)(param_1 + 0x220);
  }
  pcVar4 = *(code **)(param_1 + 0x188);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    (*pcVar4)(param_1 + 0x1a0);
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x138);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x140);
    if (*(long *)(param_1 + 0x140) == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        if (*(long *)(lVar3 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -8) = 0;
        }
        lVar3 = lVar5;
      } while (lVar2 != lVar5);
      lVar3 = *(long *)(param_1 + 0x138);
    }
    *(long *)(param_1 + 0x140) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x150) + 0x18))
              (*(long **)(param_1 + 0x150),lVar3,*(long *)(param_1 + 0x148) - lVar3,8);
  }
  lVar2 = *(long *)(param_1 + 0x108);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x110);
    if (*(long *)(param_1 + 0x110) == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        if (*(long *)(lVar3 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -8) = 0;
        }
        lVar3 = lVar5;
      } while (lVar2 != lVar5);
      lVar3 = *(long *)(param_1 + 0x108);
    }
    *(long *)(param_1 + 0x110) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
              (*(long **)(param_1 + 0x120),lVar3,*(long *)(param_1 + 0x118) - lVar3,8);
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xe0);
    if (*(long *)(param_1 + 0xe0) == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        if (*(long *)(lVar3 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -8) = 0;
        }
        lVar3 = lVar5;
      } while (lVar2 != lVar5);
      lVar3 = *(long *)(param_1 + 0xd8);
    }
    *(long *)(param_1 + 0xe0) = lVar2;
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
              (*(long **)(param_1 + 0xf0),lVar3,*(long *)(param_1 + 0xe8) - lVar3,8);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xb0);
    if (*(long *)(param_1 + 0xb0) == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        if (*(long *)(lVar3 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -8) = 0;
        }
        lVar3 = lVar5;
      } while (lVar2 != lVar5);
      lVar3 = *(long *)(param_1 + 0xa8);
    }
    *(long *)(param_1 + 0xb0) = lVar2;
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))
              (*(long **)(param_1 + 0xc0),lVar3,*(long *)(param_1 + 0xb8) - lVar3,8);
  }
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(long *)(param_1 + 0x80) == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        if (*(long *)(lVar3 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -8) = 0;
        }
        lVar3 = lVar5;
      } while (lVar2 != lVar5);
      lVar3 = *(long *)(param_1 + 0x78);
    }
    *(long *)(param_1 + 0x80) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),lVar3,*(long *)(param_1 + 0x88) - lVar3,8);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x50) == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        FUN_00784490(lVar3 + -0x200);
        lVar5 = *(long *)(lVar3 + -0x208);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          *(long *)(lVar3 + -0x208) = 0;
        }
        lVar6 = lVar3 + -0x240;
        lVar5 = *(long *)(lVar3 + -0x228);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          *(long *)(lVar3 + -0x228) = 0;
        }
        lVar3 = lVar6;
      } while (lVar2 != lVar6);
      lVar3 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x50) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),lVar3,*(long *)(param_1 + 0x58) - lVar3,0x10);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


