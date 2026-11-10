/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003994e0; name: FUN_003994e0
 */


void FUN_003994e0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  
  uVar2 = *(uint *)(param_1 + 0x10);
  plVar1 = (long *)(param_1 + 8);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(lVar6 + lVar4);
      if (lVar7 != 0) {
                    /* try { // try from 00399520 to 00399533 has its CatchHandler @ 00399584 */
        plVar3 = (long *)FUN_00400d30();
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar7 + -8);
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(lVar6 + lVar4) = 0;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < uVar2);
  }
  FUN_00399b70(plVar1,0,auStack_60);
  FUN_00399cb0(plVar1,*(undefined4 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


