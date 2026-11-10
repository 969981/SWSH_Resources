/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3340; name: FUN_009e3340
 */


void FUN_009e3340(undefined8 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  iVar3 = FUN_009e2170(param_2,param_3);
  if (-1 < iVar3) {
    iVar4 = FUN_009e31b0(param_2);
    puVar2 = PTR_DAT_02718ad8;
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),param_2);
      uVar6 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar2 + 0x10),0,uVar6);
    }
    if (*(long *)puVar2 != 0) {
      uVar5 = FUN_008f94e0(param_2);
      FUN_009e1420(10,uVar5);
    }
    uVar1 = iVar4 + iVar3 * 4;
    lVar7 = *(long *)(*(long *)(puVar2 + 0x40) + 0x60);
    if (lVar7 == 0) {
      FUN_0077e740(0,uVar1 & 0xffff,*(undefined8 *)(puVar2 + 0x18));
    }
    else {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077e740(lVar7,uVar1 & 0xffff,*(undefined8 *)(puVar2 + 0x18));
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_014c62d0(*(undefined8 *)(puVar2 + 0x10),param_1,*(undefined8 *)(puVar2 + 0x18));
    return;
  }
  iVar3 = FUN_009e31b0(param_2);
  puVar2 = PTR_DAT_02718ad8;
  if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
    FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),param_2);
    uVar6 = FUN_008e1680();
    FUN_014c7bf0(*(undefined8 *)(puVar2 + 0x10),0,uVar6);
  }
  if (*(long *)puVar2 != 0) {
    uVar5 = FUN_008f94e0(param_2);
    FUN_009e1420(10,uVar5);
  }
  uVar1 = iVar3 + param_3 * 4;
  lVar7 = *(long *)(*(long *)(puVar2 + 0x38) + 0x60);
  if (lVar7 == 0) {
    FUN_0077e740(0,uVar1 & 0xffff,*(undefined8 *)(puVar2 + 0x18));
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077e740(lVar7,uVar1 & 0xffff,*(undefined8 *)(puVar2 + 0x18));
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_014c62d0(*(undefined8 *)(puVar2 + 0x10),param_1,*(undefined8 *)(puVar2 + 0x18));
  return;
}


