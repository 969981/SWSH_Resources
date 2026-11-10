/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6de0; name: FUN_00fc6de0
 */


uint FUN_00fc6de0(uint param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 2000);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 0x80);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00fa7950(lVar7);
  if (((uVar2 & 1) != 0) && (FUN_00fa7e40(&local_38,lVar7,param_1), local_38 != 0)) {
    lVar3 = FUN_00fa74a0(lVar7,param_1);
    if ((lVar3 == 0) || (piVar4 = (int *)FUN_00fa70a0(local_38,lVar3,0), piVar4 == (int *)0x0)) {
      bVar1 = false;
    }
    else if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
            (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar2 == 0)) {
      param_1 = 0;
      bVar1 = true;
    }
    else {
      param_1 = (uint)(*(int *)((long)piVar4 + uVar2) != 0);
      bVar1 = true;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (bVar1) goto LAB_00fc6ef0;
  }
  param_1 = 0;
LAB_00fc6ef0:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return param_1 & 1;
}


