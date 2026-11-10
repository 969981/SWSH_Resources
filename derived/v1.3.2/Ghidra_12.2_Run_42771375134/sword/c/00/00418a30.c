/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418a30; name: FUN_00418a30
 */


/* WARNING: Removing unreachable block (ram,0x00418b4c) */
/* WARNING: Removing unreachable block (ram,0x00418a98) */
/* WARNING: Removing unreachable block (ram,0x00418c1c) */

ulong FUN_00418a30(long param_1,long param_2,int param_3,undefined4 *param_4,uint param_5,
                  ulong param_6,long *param_7)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint local_64;
  
  if (*(long *)(param_1 + 0x108) == 0) {
    lVar4 = 0x7fffffffffffffff;
    uVar3 = *(uint *)(param_1 + 0x100);
    lVar7 = 0x7fffffffffffffff;
    if (0x7ffffffffffffffe < param_2) {
      lVar7 = param_2;
    }
    if (uVar3 == 0) goto LAB_00418ab8;
LAB_00418b34:
    if (uVar3 == 1) {
      lVar6 = 0;
      lVar5 = 0;
    }
    else {
      lVar6 = 0;
      lVar5 = 0;
      do {
        plVar1 = (long *)(param_1 + lVar6 * 8);
        lVar6 = lVar6 + 2;
        lVar5 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar5;
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar6);
      if ((uVar3 & 1) == 0) goto LAB_00418b9c;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + lVar6 * 8) + 8) + 0x68) + lVar5;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x100);
    if (uVar3 == 0) {
      lVar7 = 0;
    }
    else {
      if (uVar3 == 1) {
        lVar4 = 0;
        lVar7 = 0;
      }
      else {
        lVar4 = 0;
        lVar7 = 0;
        do {
          plVar1 = (long *)(param_1 + lVar4 * 8);
          lVar4 = lVar4 + 2;
          lVar7 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                  *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar7;
        } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar4);
        if ((uVar3 & 1) == 0) goto LAB_00418b14;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + lVar4 * 8) + 8) + 0x68) + lVar7;
    }
LAB_00418b14:
    lVar4 = FUN_004191e0(param_1 + 0x108);
    lVar4 = lVar4 + lVar7;
    uVar3 = *(uint *)(param_1 + 0x100);
    lVar7 = lVar4;
    if (lVar4 <= param_2) {
      lVar7 = param_2;
    }
    if (uVar3 != 0) goto LAB_00418b34;
LAB_00418ab8:
    lVar5 = 0;
  }
LAB_00418b9c:
  uVar2 = FUN_00419200(param_1 + 0x108,lVar7 - lVar5);
  lVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
  if ((lVar7 == 0) || (*(char *)(param_1 + 0x129) != '\0')) {
    *param_4 = 0;
    if ((param_3 != 0) && ((param_6 & 1) == 0)) {
      return 2;
    }
  }
  else {
    uVar2 = FUN_0040e550(*(undefined8 *)(lVar7 + 0x78),uVar2 & 0xffffffff,param_3,param_4,
                         param_5 & 1,&local_64);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    uVar2 = (ulong)local_64;
  }
  uVar3 = *(uint *)(param_1 + 0x100);
  if (uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    if (uVar3 == 1) {
      lVar5 = 0;
      lVar7 = 0;
    }
    else {
      lVar5 = 0;
      lVar7 = 0;
      do {
        plVar1 = (long *)(param_1 + lVar5 * 8);
        lVar5 = lVar5 + 2;
        lVar7 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar7;
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar5);
      if ((uVar3 & 1) == 0) goto LAB_00418c74;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + lVar5 * 8) + 8) + 0x68) + lVar7;
  }
LAB_00418c74:
  lVar5 = FUN_00419220(param_1 + 0x108,uVar2);
  *param_7 = lVar5 + lVar7;
  if (*(char *)(param_1 + 0x128) == '\0') {
    uVar3 = 3;
    if (lVar5 + lVar7 <= *(long *)(param_1 + 0x120) + lVar4) {
      uVar3 = 1;
    }
    uVar2 = (ulong)uVar3;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


