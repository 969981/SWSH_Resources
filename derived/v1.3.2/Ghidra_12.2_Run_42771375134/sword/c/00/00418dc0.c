/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418dc0; name: FUN_00418dc0
 */


/* WARNING: Removing unreachable block (ram,0x00418e04) */

void FUN_00418dc0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x108) == 0) {
    uVar3 = 0;
    lVar4 = 0x7fffffffffffffff;
    goto LAB_00418e78;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    lVar5 = 0;
  }
  else {
    if (uVar2 == 1) {
      lVar4 = 0;
      lVar5 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      do {
        plVar1 = (long *)(param_1 + lVar4 * 8);
        lVar4 = lVar4 + 2;
        lVar5 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar5;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar4);
      if ((uVar2 & 1) == 0) goto LAB_00418e68;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + lVar4 * 8) + 8) + 0x68) + lVar5;
  }
LAB_00418e68:
  lVar4 = FUN_004191e0(param_1 + 0x108);
  lVar4 = lVar4 + lVar5;
  uVar3 = *(undefined8 *)(param_1 + 0x108);
LAB_00418e78:
  FUN_0040b9f0(uVar3,param_2,param_3 - lVar4);
  return;
}


