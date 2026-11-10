/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecc490; name: FUN_00ecc490
 */


void FUN_00ecc490(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    plVar1 = (long *)(param_1 + 0x50);
    FUN_00ecd480(param_1,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0x461c4000;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x124) != '\0') {
    plVar1 = (long *)(param_1 + 0xc0);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x124) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0x461c4000;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0x194) != '\0') {
    plVar1 = (long *)(param_1 + 0x130);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x194) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0x461c4000;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(char *)(param_1 + 0x204) != '\0') {
    plVar1 = (long *)(param_1 + 0x1a0);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x204) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0x461c4000;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(char *)(param_1 + 0x274) != '\0') {
    plVar1 = (long *)(param_1 + 0x210);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x260) = 0x461c4000;
    *(undefined1 *)(param_1 + 0x274) = 0;
  }
  if (*(char *)(param_1 + 0x2e4) != '\0') {
    plVar1 = (long *)(param_1 + 0x280);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0x461c4000;
    *(undefined1 *)(param_1 + 0x2e4) = 0;
  }
  if (*(char *)(param_1 + 0x354) != '\0') {
    plVar1 = (long *)(param_1 + 0x2f0);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0x461c4000;
    *(undefined1 *)(param_1 + 0x354) = 0;
  }
  if (*(char *)(param_1 + 0x3c4) != '\0') {
    plVar1 = (long *)(param_1 + 0x360);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0x461c4000;
    *(undefined1 *)(param_1 + 0x3c4) = 0;
  }
  if (*(char *)(param_1 + 0x434) != '\0') {
    plVar1 = (long *)(param_1 + 0x3d0);
    FUN_00ecd480(lVar3,plVar1);
    lVar2 = *plVar1;
    *plVar1 = 0;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    *(undefined4 *)(param_1 + 0x420) = 0x461c4000;
    *(undefined1 *)(param_1 + 0x434) = 0;
  }
  if (*(char *)(param_1 + 0x4a4) != '\0') {
    plVar1 = (long *)(param_1 + 0x440);
    FUN_00ecd480(lVar3,plVar1);
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined4 *)(param_1 + 0x490) = 0x461c4000;
    *(undefined1 *)(param_1 + 0x4a4) = 0;
  }
  return;
}


