/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaff20; name: FUN_00eaff20
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00eaff20(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 1) {
    return true;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar6 + 0x7d8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar6 = FUN_00e331a0(lVar5,param_3);
  if (lVar6 == 0) {
LAB_00eb0030:
    bVar1 = false;
  }
  else {
    uVar2 = FUN_00e332e0(lVar5,lVar6);
    iVar3 = FUN_00e332a0(lVar5,lVar6);
    if (param_2 == 3) {
      if ((uVar2 | 1) == 3) goto LAB_00eaffe0;
    }
    else if ((param_2 != 0) || (iVar4 = FUN_00e7e5c0(), (uVar2 | 1) == 3 || iVar4 != 2)) {
LAB_00eaffe0:
      if (iVar3 == 1) {
        bVar1 = param_2 == 0;
        goto joined_r0x00eb0034;
      }
      if ((uVar2 == 3) || (uVar2 == 2)) {
        bVar1 = param_2 == 2;
        goto joined_r0x00eb0034;
      }
      goto LAB_00eb0030;
    }
    bVar1 = true;
  }
joined_r0x00eb0034:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return bVar1;
}


