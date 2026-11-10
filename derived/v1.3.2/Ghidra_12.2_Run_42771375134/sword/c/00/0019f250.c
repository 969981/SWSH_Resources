/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019f250; name: FUN_0019f250
 */


void FUN_0019f250(long param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  if (*(int *)(param_1 + 0xd8) != 0) {
    uVar4 = 0;
    puVar1 = PTR_DAT_02710fe8 + 0x10;
    do {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0xb0);
      FUN_003ff570(*puVar3);
                    /* try { // try from 0019f2a4 to 0019f2b7 has its CatchHandler @ 0019f334 */
      plVar2 = (long *)FUN_001a6400(puVar3,0x38,0x10);
                    /* try { // try from 0019f2bc to 0019f2bf has its CatchHandler @ 0019f330 */
      FUN_003ff5a0(*puVar3);
      plVar2[1] = 0;
      plVar2[2] = 0;
      *(undefined4 *)(plVar2 + 4) = 0;
      *plVar2 = (long)puVar1;
      plVar2[5] = param_1;
      *(uint *)(plVar2 + 6) = uVar4;
      *(undefined4 *)(plVar2 + 4) = 1;
      plVar2[3] = (long)param_3;
      (**(code **)(*param_3 + 0x20))(param_3);
      plVar2[2] = *(long *)(plVar2[3] + 0x10);
      (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0xd8));
  }
  return;
}


