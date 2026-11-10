/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc7770; name: FUN_00dc7770
 */


bool FUN_00dc7770(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x661) == '\0') {
    return false;
  }
  lVar2 = *(long *)(param_1 + 0x3a0);
  if (lVar2 < -0x1792463e48e88ec8) {
    if (lVar2 < -0x1ef57d3e4cbb5747) {
      if ((lVar2 != -0x1ef57f3e4cbb5aad) && (lVar2 != -0x1ef57e3e4cbb58fa)) {
        return true;
      }
    }
    else if (((lVar2 != -0x1ef57d3e4cbb5747) && (lVar2 != -0x1ef57c3e4cbb5594)) &&
            (lVar2 != -0x1ef57b3e4cbb53e1)) {
      return true;
    }
  }
  else if (lVar2 < -0x1792433e48e889af) {
    if ((lVar2 != -0x1792463e48e88ec8) && (lVar2 != -0x1792443e48e88b62)) {
      return true;
    }
  }
  else if (((lVar2 != -0x1792433e48e889af) && (lVar2 != -0x1792413e48e88649)) &&
          (lVar2 != -0x1792423e48e887fc)) {
    return true;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  uVar1 = FUN_015114c0(lVar3,0xc5bd7dd554ac4b39);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar1 < 0x11d;
}


