/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00171430; name: FUN_00171430
 */


long * FUN_00171430(long param_1,void *param_2,undefined8 *param_3,undefined4 param_4,long param_5,
                   long param_6,long param_7,long *param_8,long param_9,byte param_10)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(param_1 + 0x2e8);
  FUN_003ff570(*puVar10);
  FUN_003ff570(*puVar10);
                    /* try { // try from 00171484 to 00171497 has its CatchHandler @ 001717cc */
  puVar3 = (undefined8 *)FUN_001a6400(puVar10,0x18,0x10);
                    /* try { // try from 001714ac to 001714af has its CatchHandler @ 001717c8 */
  FUN_003ff5a0(*puVar10);
  *puVar3 = 0;
  puVar3[2] = param_3[1];
  puVar3[1] = *param_3;
  plVar4 = (long *)FUN_001a6400(puVar10,0xd8,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x2a8);
  lVar9 = *(long *)(param_1 + 0x300);
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 4) = 0;
  param_10 = param_10 & 1;
  puVar1 = PTR_DAT_02710eb8 + 0x10;
  plVar4[5] = param_1;
  plVar4[6] = (long)puVar3;
  *plVar4 = (long)puVar1;
  plVar4[1] = lVar9;
  memcpy(plVar4 + 7,param_2,0x70);
  *(undefined4 *)(plVar4 + 0x15) = param_4;
  *(undefined4 *)((long)plVar4 + 0xac) = uVar2;
  plVar4[0x16] = param_5;
  plVar4[0x17] = param_6;
  *(byte *)(plVar4 + 0x1a) = param_10;
  plVar4[0x18] = param_7;
  plVar4[0x19] = param_9;
  plVar5 = (long *)FUN_001a6400(puVar10,0xb8,0x10);
  lVar9 = *(long *)(param_1 + 0x300);
  plVar5[2] = 0;
  plVar5[3] = 0;
  puVar1 = PTR_DAT_02710ec0;
  *(undefined4 *)(plVar5 + 4) = 0;
  plVar5[5] = param_1;
  plVar5[6] = (long)puVar3;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[1] = lVar9;
  memcpy(plVar5 + 7,param_2,0x70);
  *(undefined4 *)(plVar5 + 0x15) = param_4;
  plVar5[0x16] = param_9;
  plVar6 = (long *)FUN_001a6400(puVar10,0x50,0x10);
  lVar9 = *(long *)(param_1 + 0x300);
  plVar6[2] = 0;
  plVar6[3] = 0;
  puVar1 = PTR_DAT_02710ec8;
  *(undefined4 *)(plVar6 + 4) = 0;
  plVar6[5] = param_1;
  plVar6[6] = (long)puVar3;
  *(undefined4 *)(plVar6 + 7) = param_4;
  plVar6[8] = param_9;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[1] = lVar9;
  *(byte *)(plVar6 + 9) = param_10;
  plVar7 = (long *)FUN_001a6400(puVar10,0xb8,0x10);
  lVar9 = *(long *)(param_1 + 0x300);
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar1 = PTR_DAT_02710ed0;
  *(undefined4 *)(plVar7 + 4) = 0;
  plVar7[5] = param_1;
  plVar7[6] = (long)puVar3;
  *plVar7 = (long)(puVar1 + 0x10);
  plVar7[1] = lVar9;
  memcpy(plVar7 + 7,param_2,0x70);
  *(undefined4 *)(plVar7 + 0x15) = param_4;
  plVar7[0x16] = param_5 + 0xb0;
  plVar8 = (long *)FUN_001a6400(puVar10,0xb0,0x10);
  lVar9 = *(long *)(param_1 + 0x300);
  plVar8[2] = 0;
  plVar8[3] = 0;
  puVar1 = PTR_DAT_02710ed8;
  *(undefined4 *)(plVar8 + 4) = 0;
  plVar8[5] = param_1;
  plVar8[6] = (long)puVar3;
  *plVar8 = (long)(puVar1 + 0x10);
  plVar8[1] = lVar9;
  memcpy(plVar8 + 7,param_2,0x70);
  *(undefined4 *)(plVar8 + 0x15) = param_4;
  *(byte *)((long)plVar8 + 0xac) = param_10;
  *(undefined4 *)(plVar5 + 4) = 1;
  plVar5[3] = (long)param_8;
  if (param_8 == (long *)0x0) {
    *(undefined4 *)(plVar7 + 4) = 1;
    plVar7[3] = (long)plVar5;
    if (plVar5 == (long *)0x0) goto LAB_001716e0;
  }
  else {
    (**(code **)(*param_8 + 0x20))();
    plVar5[2] = *(long *)(plVar5[3] + 0x10);
    *(undefined4 *)(plVar7 + 4) = 1;
    plVar7[3] = (long)plVar5;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  plVar7[2] = *(long *)(plVar7[3] + 0x10);
LAB_001716e0:
  (**(code **)(*plVar5 + 0x28))(plVar5);
  *(undefined4 *)(plVar6 + 4) = 1;
  plVar6[3] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
    plVar6[2] = *(long *)(plVar6[3] + 0x10);
  }
  (**(code **)(*plVar7 + 0x28))(plVar7);
  *(undefined4 *)(plVar8 + 4) = 1;
  plVar8[3] = (long)plVar6;
  (**(code **)(*plVar6 + 0x20))(plVar6);
  plVar8[2] = *(long *)(plVar8[3] + 0x10);
  (**(code **)(*plVar6 + 0x28))(plVar6);
  *(undefined4 *)(plVar4 + 4) = 1;
  plVar4[3] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
    plVar4[2] = *(long *)(plVar4[3] + 0x10);
  }
  (**(code **)(*plVar8 + 0x28))(plVar8);
  FUN_003ff5a0(*puVar10);
  return plVar4;
}


