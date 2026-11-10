/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00132090; name: FUN_00132090
 */


void FUN_00132090(long param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 < param_2) {
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = param_2 / param_3;
    }
  }
  else {
    uVar5 = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  iVar6 = 0;
  puVar1 = PTR_DAT_02710cb0 + 0x10;
  do {
    FUN_003ff570(*param_4);
                    /* try { // try from 001320f0 to 00132103 has its CatchHandler @ 00132194 */
    plVar3 = (long *)FUN_001a6400(param_4,0x40,0x10);
                    /* try { // try from 00132108 to 0013210b has its CatchHandler @ 00132190 */
    FUN_003ff5a0(*param_4);
    plVar3[1] = *(long *)(param_1 + 0x2d0);
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    *plVar3 = (long)puVar1;
    lVar4 = *(long *)(param_1 + 0x1f8);
    uVar2 = param_2;
    if (uVar5 <= param_2) {
      uVar2 = uVar5;
    }
    plVar3[5] = param_1;
    *(int *)(plVar3 + 6) = iVar6;
    *(uint *)((long)plVar3 + 0x34) = uVar2;
    iVar6 = uVar2 + iVar6;
    plVar3[7] = lVar4;
    *(undefined4 *)(plVar3 + 4) = 1;
    plVar3[3] = param_1 + 8;
    param_2 = param_2 - uVar2;
    (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1 + 8);
    plVar3[2] = *(long *)(plVar3[3] + 0x10);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  } while (param_2 != 0);
  return;
}


