/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418cd0; name: FUN_00418cd0
 */


/* WARNING: Removing unreachable block (ram,0x00418d10) */

bool FUN_00418cd0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(*(long *)(param_1 + 0x108) + 0x18) == 0) {
    return false;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    lVar6 = 0;
  }
  else {
    if (uVar2 == 1) {
      lVar7 = 0;
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      lVar6 = 0;
      do {
        plVar1 = (long *)(param_1 + lVar7 * 8);
        lVar7 = lVar7 + 2;
        lVar6 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar6;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar7);
      if ((uVar2 & 1) == 0) goto LAB_00418d78;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + lVar7 * 8) + 8) + 0x68) + lVar6;
  }
LAB_00418d78:
  iVar3 = FUN_00419200(param_1 + 0x108,param_2 - lVar6);
  lVar6 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
  }
  iVar4 = FUN_0040ead0(uVar5);
  return iVar4 == iVar3;
}


