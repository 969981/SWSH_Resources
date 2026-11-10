/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8450; name: FUN_008f8450
 */


void FUN_008f8450(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (((*(long *)(param_1 + 0x188) != 0) &&
      (uVar3 = FUN_008f0c80(*(undefined4 *)(param_1 + 0x150)), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_0090e390(*(undefined8 *)(param_1 + 0x188)), (uVar3 & 1) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9);
    if (((*(long *)(param_1 + 0x198) == 0) &&
        (uVar3 = FUN_008efa90(uVar1,uVar2,0), (uVar3 & 1) != 0)) &&
       ((uVar3 = FUN_009b1e90(*(undefined8 *)(param_1 + 0x750),0), (uVar3 & 1) == 0 &&
        (*(long *)(param_1 + 0x198) == 0)))) {
      lVar5 = *(long *)(param_1 + 0x1c0);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        lVar4 = *(long *)(param_1 + 0x198);
        *(long *)(param_1 + 0x198) = lVar5;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          lVar5 = *(long *)(param_1 + 0x198);
        }
      }
      FUN_008fe4f0(lVar5);
      FUN_009c4ef0();
      lVar5 = *(long *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if ((*(byte *)(param_1 + 0x183) & 1) != 0) {
        FUN_008fe420(*(undefined8 *)(param_1 + 0x198));
      }
    }
    if (((*(long *)(param_1 + 0x1a0) == 0) &&
        (uVar3 = FUN_008efa90(uVar1,uVar2,1), (uVar3 & 1) != 0)) &&
       ((uVar3 = FUN_009b1e90(*(undefined8 *)(param_1 + 0x750),1), (uVar3 & 1) == 0 &&
        (*(long *)(param_1 + 0x1a0) == 0)))) {
      lVar5 = *(long *)(param_1 + 0x1c8);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x1a0) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        lVar4 = *(long *)(param_1 + 0x1a0);
        *(long *)(param_1 + 0x1a0) = lVar5;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          lVar5 = *(long *)(param_1 + 0x1a0);
        }
      }
      FUN_008fe4f0(lVar5);
      FUN_009c4ef0();
      lVar5 = *(long *)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if ((*(byte *)(param_1 + 0x183) & 1) != 0) {
        FUN_008fe420(*(undefined8 *)(param_1 + 0x1a0));
      }
    }
    if ((((*(long *)(param_1 + 0x1a8) == 0) &&
         (uVar3 = FUN_008efa90(uVar1,uVar2,2), (uVar3 & 1) != 0)) &&
        (uVar3 = FUN_009b1e90(*(undefined8 *)(param_1 + 0x750),2), (uVar3 & 1) == 0)) &&
       (*(long *)(param_1 + 0x1a8) == 0)) {
      lVar5 = *(long *)(param_1 + 0x1d0);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x1a8) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        lVar4 = *(long *)(param_1 + 0x1a8);
        *(long *)(param_1 + 0x1a8) = lVar5;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          lVar5 = *(long *)(param_1 + 0x1a8);
        }
      }
      FUN_008fe4f0(lVar5);
      FUN_009c4ef0();
      lVar5 = *(long *)(param_1 + 0x1d0);
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if ((*(byte *)(param_1 + 0x183) & 1) != 0) {
        FUN_008fe420(*(undefined8 *)(param_1 + 0x1a8));
      }
    }
    if (((*(long *)(param_1 + 0x1b0) == 0) &&
        (uVar3 = FUN_008efa90(uVar1,uVar2,3), (uVar3 & 1) != 0)) &&
       ((uVar3 = FUN_009b1e90(*(undefined8 *)(param_1 + 0x750),3), (uVar3 & 1) == 0 &&
        (*(long *)(param_1 + 0x1b0) == 0)))) {
      lVar5 = *(long *)(param_1 + 0x1d8);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x1b0) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        lVar4 = *(long *)(param_1 + 0x1b0);
        *(long *)(param_1 + 0x1b0) = lVar5;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          lVar5 = *(long *)(param_1 + 0x1b0);
        }
      }
      FUN_008fe4f0(lVar5);
      FUN_009c4ef0();
      lVar5 = *(long *)(param_1 + 0x1d8);
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if ((*(byte *)(param_1 + 0x183) & 1) != 0) {
        FUN_008fe420(*(undefined8 *)(param_1 + 0x1b0));
      }
    }
    if (((*(long *)(param_1 + 0x1b8) == 0) &&
        (uVar3 = FUN_008efa90(uVar1,uVar2,4), (uVar3 & 1) != 0)) &&
       ((uVar3 = FUN_009b1e90(*(undefined8 *)(param_1 + 0x750),4), (uVar3 & 1) == 0 &&
        (*(long *)(param_1 + 0x1b8) == 0)))) {
      lVar5 = *(long *)(param_1 + 0x1e0);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x1b8) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        lVar4 = *(long *)(param_1 + 0x1b8);
        *(long *)(param_1 + 0x1b8) = lVar5;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          lVar5 = *(long *)(param_1 + 0x1b8);
        }
      }
      FUN_008fe4f0(lVar5);
      FUN_009c4ef0();
      lVar5 = *(long *)(param_1 + 0x1e0);
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if ((*(byte *)(param_1 + 0x183) & 1) != 0) {
        FUN_008fe420(*(undefined8 *)(param_1 + 0x1b8));
        return;
      }
    }
  }
  return;
}


