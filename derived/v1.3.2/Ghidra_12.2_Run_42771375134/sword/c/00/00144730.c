/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00144730; name: FUN_00144730
 */


void FUN_00144730(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  lVar5 = param_1[0x14];
  puVar1 = PTR_DAT_02710db8 + 0x88;
  *param_1 = (long)(PTR_DAT_02710db8 + 0x10);
  param_1[1] = (long)puVar1;
  if (lVar5 != 0) {
                    /* try { // try from 00144760 to 00144773 has its CatchHandler @ 00144834 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar5);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xbc)) &&
      ((*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x16], lVar5 != 0))
  {
                    /* try { // try from 0014478c to 0014479f has its CatchHandler @ 00144830 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar5);
  }
  puVar1 = PTR_DAT_02710c20;
  param_1[0xc] = 0;
  param_1[10] = (long)(puVar1 + 0x10);
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 != 0) {
    puVar4 = (undefined8 *)param_1[8];
    puVar6 = puVar4;
    do {
      puVar7 = puVar6 + 10;
      (**(code **)*puVar6)(puVar6);
      puVar6 = puVar7;
    } while (puVar7 < puVar4 + (ulong)uVar2 * 10);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x4c)) &&
      ((*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) != 0)) && (lVar5 = param_1[8], lVar5 != 0)) {
                    /* try { // try from 001447fc to 0014480f has its CatchHandler @ 0014482c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar5);
  }
  param_1[2] = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  return;
}


