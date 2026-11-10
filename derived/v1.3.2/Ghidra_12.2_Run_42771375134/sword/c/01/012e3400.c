/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e3400; name: FUN_012e3400
 */


void FUN_012e3400(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long local_48;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x710) != 0) {
    FUN_012b65a0();
    uVar1 = FUN_0087ec90();
    if (((*(long *)(param_1 + 0x4f0) == 0) || (uVar4 = FUN_0130e360(), (uVar4 & 1) == 0)) ||
       (FUN_0130e3b0(&local_48,*(undefined8 *)(param_1 + 0x4f0)), local_48 == 0)) {
      uVar7 = 0x4000000;
      uVar9 = 0x60000;
    }
    else {
      uVar5 = FUN_012d5170(local_48,auStack_38);
      iVar2 = FUN_013092d0();
      plVar6 = (long *)FUN_0130a5f0(uVar5);
      lVar8 = *plVar6;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      uVar5 = FUN_012b65a0(*(undefined8 *)(param_1 + 0x710));
      iVar3 = FUN_008847b0(lVar8,uVar5);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      uVar7 = iVar2 * 0x1000000 + 0x1000000;
      uVar9 = iVar3 * 0x10000 + 0x10000U & 0xff0000;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
    *(uint *)(param_1 + 0x368) = uVar9 | uVar1 & 0xffff | uVar7;
  }
  return;
}


