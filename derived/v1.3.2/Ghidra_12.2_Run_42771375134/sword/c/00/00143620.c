/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00143620; name: FUN_00143620
 */


void FUN_00143620(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = 0;
  puVar2 = PTR_DAT_02710da8 + 0x80;
  *param_1 = (long)(PTR_DAT_02710da8 + 0x10);
  param_1[1] = (long)puVar2;
  lVar5 = param_1[3];
  uVar3 = *(uint *)(lVar5 + 0x20);
  lVar6 = *(long *)(lVar5 + 0x18);
  if (uVar3 != 0) {
    do {
      if (*(long **)(lVar6 + uVar7 * 8) == param_1) break;
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while (uVar1 < uVar3);
  }
  *(uint *)(lVar5 + 0x20) = uVar3 - 1;
  *(undefined8 *)(lVar6 + uVar7 * 8) = *(undefined8 *)(lVar6 + (ulong)(uVar3 - 1) * 8);
  if (((-1 < (int)*(uint *)((long)param_1 + 0x8c)) &&
      ((*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x10], lVar5 != 0))
  {
                    /* try { // try from 0014369c to 001436af has its CatchHandler @ 001437c4 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x74)) &&
      ((*(uint *)((long)param_1 + 0x74) & 0x7fffffff) != 0)) && (lVar5 = param_1[0xd], lVar5 != 0))
  {
                    /* try { // try from 001436c8 to 001436db has its CatchHandler @ 001437c0 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 100)) &&
      ((*(uint *)((long)param_1 + 100) & 0x7fffffff) != 0)) && (lVar5 = param_1[0xb], lVar5 != 0)) {
                    /* try { // try from 001436f4 to 00143707 has its CatchHandler @ 001437bc */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x54)) &&
      ((*(uint *)((long)param_1 + 0x54) & 0x7fffffff) != 0)) && (lVar5 = param_1[9], lVar5 != 0)) {
    lVar6 = *(long *)(lVar5 + -8);
                    /* try { // try from 00143724 to 00143737 has its CatchHandler @ 001437b8 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5 - lVar6);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x44)) &&
      ((*(uint *)((long)param_1 + 0x44) & 0x7fffffff) != 0)) && (lVar5 = param_1[7], lVar5 != 0)) {
                    /* try { // try from 00143750 to 00143763 has its CatchHandler @ 001437b4 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x34)) &&
      ((*(uint *)((long)param_1 + 0x34) & 0x7fffffff) != 0)) && (lVar5 = param_1[5], lVar5 != 0)) {
                    /* try { // try from 0014377c to 0014378f has its CatchHandler @ 001437b0 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
  }
  param_1[1] = (long)(PTR_DAT_02710db0 + 0x10);
  return;
}


