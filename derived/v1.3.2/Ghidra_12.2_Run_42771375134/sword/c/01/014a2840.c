/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a2840; name: FUN_014a2840
 */


undefined8 FUN_014a2840(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_014a9f30(param_2);
  iVar2 = *(int *)(param_2 + 0x14);
  lVar5 = *(long *)PTR_DAT_02710848;
  if (iVar2 == 2) {
    lVar4 = *(long *)(lVar5 + 0x70);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar4 + 0x290);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    lVar4 = FUN_00c8bba0(lVar3,auVar6._0_8_,auVar6._8_8_);
    if (lVar4 == 0) {
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      iVar2 = *(int *)(param_2 + 0x14);
      goto LAB_014a28f4;
    }
LAB_014a294c:
    *param_3 = *(undefined8 *)(lVar4 + 0x40);
    param_3[1] = *(undefined8 *)(lVar4 + 0x48);
    param_3[2] = *(undefined8 *)(lVar4 + 0x50);
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = param_3[3];
    param_3[3] = lVar5;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    uVar1 = 1;
  }
  else {
LAB_014a28f4:
    if (iVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x70);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar3 = *(long *)(lVar5 + 0x170);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      lVar4 = FUN_00c8bba0(lVar3,auVar6._0_8_,auVar6._8_8_);
      if (lVar4 != 0) goto LAB_014a294c;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


