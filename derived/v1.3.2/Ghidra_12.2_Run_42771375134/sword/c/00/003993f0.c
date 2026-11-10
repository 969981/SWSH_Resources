/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003993f0; name: FUN_003993f0
 */


void FUN_003993f0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar3 = (long *)(param_1 + 8);
  if (uVar1 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar6 = *plVar3;
      lVar7 = *(long *)(lVar6 + lVar4);
      if (lVar7 != 0) {
                    /* try { // try from 00399430 to 00399443 has its CatchHandler @ 003994d8 */
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7 + -8);
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(lVar6 + lVar4) = 0;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < uVar1);
  }
                    /* try { // try from 00399458 to 00399473 has its CatchHandler @ 003994c4 */
  FUN_00399b70(plVar3,0,auStack_60);
  FUN_00399cb0(plVar3,*(undefined4 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((-1 < (int)*(uint *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0)) &&
     (lVar4 = *plVar3, lVar4 != 0)) {
                    /* try { // try from 00399490 to 003994a3 has its CatchHandler @ 003994c0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
  }
  return;
}


