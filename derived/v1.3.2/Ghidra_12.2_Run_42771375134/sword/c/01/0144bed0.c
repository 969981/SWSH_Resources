/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144bed0; name: FUN_0144bed0
 */


int FUN_0144bed0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_02710798;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  iVar6 = 0;
  iVar7 = 1;
  do {
    lVar4 = *(long *)puVar1;
    lVar8 = *(long *)(lVar4 + 0x268);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0x1b8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar3 = FUN_014527e0(param_1,iVar7);
    uVar2 = FUN_01510f00(lVar4,uVar3);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + (uVar2 & 1);
  } while (iVar7 != 10);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return iVar6;
}


