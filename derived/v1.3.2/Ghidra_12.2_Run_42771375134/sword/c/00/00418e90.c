/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418e90; name: FUN_00418e90
 */


/* WARNING: Removing unreachable block (ram,0x00418ee8) */

void FUN_00418e90(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x108);
  if (*(long *)(lVar6 + 0x18) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x100);
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar2 == 1) {
      lVar5 = 0;
      lVar4 = 0;
    }
    else {
      lVar5 = 0;
      lVar4 = 0;
      do {
        plVar1 = (long *)(param_2 + lVar5 * 8);
        lVar5 = lVar5 + 2;
        lVar4 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar4;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar5);
      if ((uVar2 & 1) == 0) goto LAB_00418f54;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + lVar5 * 8) + 8) + 0x68) + lVar4;
  }
LAB_00418f54:
  uVar3 = FUN_00419200(param_2 + 0x108,param_3 - lVar4);
  FUN_0040bb10(param_1,lVar6,uVar3,param_4,param_5,param_6);
  return;
}


