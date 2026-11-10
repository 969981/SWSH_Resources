/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e14a0; name: FUN_005e14a0
 */


undefined8 FUN_005e14a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar3 = FUN_005dca90();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = (**(code **)(*(long *)param_1[0x17] + 0x50))();
  puVar2 = PTR_DAT_02713e78;
  puVar1 = PTR_DAT_02713e78;
  if (*(undefined **)(lVar4 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(lVar4 + 8);
  }
  (**(code **)(*param_1 + 0x48))(param_1,puVar1);
  lVar4 = (**(code **)(*(long *)param_1[0x17] + 0x68))();
  if (*(undefined **)(lVar4 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar4 + 8);
  }
  (**(code **)(*param_1 + 0x60))(param_1,puVar2);
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))();
    param_1[0x18] = 0;
  }
  lVar4 = param_1[0x17];
  if (*(long **)(lVar4 + 0xc0) != (long *)0x0) {
    lVar5 = (**(code **)(**(long **)(lVar4 + 0xc0) + 0x88))();
    lVar4 = param_1[0x17];
    param_1[0x18] = lVar5;
  }
  iVar7 = (int)*(undefined8 *)(lVar4 + 0xd8);
  if (iVar7 < 1) {
    return 1;
  }
  if ((ulong)param_1[0x1c] < (ulong)(long)iVar7) {
    uVar3 = FUN_005e0e00(param_1 + 0x19,(long)iVar7,1);
    if ((uVar3 & 1) == 0) {
      param_1[0x1b] = 0;
    }
    else {
      uVar3 = param_1[0x1c];
      uVar8 = param_1[0x1b];
      if (uVar3 < (ulong)param_1[0x1b]) {
        param_1[0x1b] = uVar3;
        uVar8 = uVar3;
      }
      if (uVar8 != 0) {
        param_1[0x1f] = param_1[0x1e];
        param_1[0x20] = param_1[0x1e] + uVar8 * 8;
        lVar4 = param_1[0x17];
        iVar7 = *(int *)(lVar4 + 0xd8);
        goto joined_r0x005e15dc;
      }
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  lVar4 = param_1[0x17];
  iVar7 = *(int *)(lVar4 + 0xd8);
joined_r0x005e15dc:
  if (0 < iVar7) {
    lVar5 = 0;
    do {
      uVar6 = FUN_005e1020(param_1[6],*(undefined8 *)(*(long *)(lVar4 + 0xf0) + lVar5 * 8));
      uVar3 = param_1[0x1b];
      uVar8 = param_1[0x1c];
      if (uVar3 < uVar8) {
LAB_005e1638:
        *(undefined8 *)(param_1[0x1e] + uVar3 * 8) = uVar6;
        lVar4 = param_1[0x1b];
        param_1[0x1b] = lVar4 + 1;
        param_1[0x1f] = param_1[0x1e];
        param_1[0x20] = param_1[0x1e] + (lVar4 + 1) * 8;
      }
      else {
        lVar4 = uVar8 * 2;
        if (lVar4 == 0) {
          lVar4 = 1;
        }
        if (param_1[0x21] != 0) {
          lVar4 = param_1[0x21] + uVar8;
        }
        uVar3 = FUN_005e0e00(param_1 + 0x19,lVar4,1);
        if ((uVar3 & 1) != 0) {
          uVar3 = param_1[0x1b];
          goto LAB_005e1638;
        }
        param_1[0x1b] = 0;
        param_1[0x1f] = 0;
        param_1[0x20] = 0;
      }
      lVar4 = param_1[0x17];
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar4 + 0xd8));
  }
  return 1;
}


