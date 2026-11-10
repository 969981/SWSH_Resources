/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6c50; name: FUN_00fc6c50
 */


uint FUN_00fc6c50(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long local_38;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 2000);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x80);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00fa7950(lVar8);
  if ((uVar3 & 1) != 0) {
    uVar1 = *param_1;
    uVar9 = (uint)uVar1;
    FUN_00fa7e90(&local_38,lVar8);
    if (local_38 != 0) {
      lVar4 = FUN_00fa74e0(lVar8);
      if ((lVar4 == 0) ||
         (piVar5 = (int *)FUN_00fa6950(local_38,lVar4,uVar1 - 0x4ff), piVar5 == (int *)0x0)) {
        bVar2 = false;
      }
      else if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
              (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar3 == 0)) {
        uVar9 = 0;
        bVar2 = true;
      }
      else {
        uVar9 = *(uint *)((long)piVar5 + uVar3);
        bVar2 = true;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (bVar2) goto LAB_00fc6d54;
    }
  }
  uVar9 = 0;
LAB_00fc6d54:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return uVar9;
}


