/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e3c50; name: FUN_003e3c50
 */


void FUN_003e3c50(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  
  iVar6 = *(int *)(*(long *)(param_1 + 0x738) + 0xb4);
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x720) + 0x7b0);
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (((iVar6 == 0) || (*(int *)(*(long *)(param_1 + 0x738) + 0xb8) != 0)) &&
     (uVar7 = *(uint *)(param_1 + 0x830), uVar7 != 0)) {
    if (param_2 == (long *)0x0) {
      iVar6 = 0;
      uVar8 = 0;
      puVar2 = PTR_DAT_02712960 + 0x10;
      do {
        uVar7 = uVar7 + iVar6;
        if (0xff < uVar7) {
          uVar7 = 0x100;
        }
        FUN_003ff570(*puVar5);
                    /* try { // try from 003e3d90 to 003e3da3 has its CatchHandler @ 003e3e14 */
        plVar3 = (long *)FUN_001a6400(puVar5,0x40,0x10);
                    /* try { // try from 003e3da8 to 003e3dab has its CatchHandler @ 003e3e10 */
        FUN_003ff5a0(*puVar5);
        lVar4 = *(long *)(param_1 + 0x828);
        plVar3[1] = *(long *)(param_1 + 0x18);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 4) = 0;
        *(uint *)(plVar3 + 6) = uVar7;
        *plVar3 = (long)puVar2;
        plVar3[5] = lVar4 + uVar8 * 8;
        plVar3[7] = param_1 + 0x740;
        *(undefined4 *)(plVar3 + 4) = 1;
        plVar3[3] = 0;
        FUN_00192470(plVar3);
        uVar7 = *(uint *)(param_1 + 0x830);
        uVar1 = (int)uVar8 + 0x100;
        uVar8 = (ulong)uVar1;
        iVar6 = iVar6 + -0x100;
      } while (uVar1 < uVar7);
    }
    else {
      iVar6 = 0;
      uVar8 = 0;
      puVar2 = PTR_DAT_02712960 + 0x10;
      do {
        uVar7 = uVar7 + iVar6;
        if (0xff < uVar7) {
          uVar7 = 0x100;
        }
        FUN_003ff570(*puVar5);
                    /* try { // try from 003e3cd0 to 003e3ce3 has its CatchHandler @ 003e3e1c */
        plVar3 = (long *)FUN_001a6400(puVar5,0x40,0x10);
                    /* try { // try from 003e3ce8 to 003e3ceb has its CatchHandler @ 003e3e18 */
        FUN_003ff5a0(*puVar5);
        lVar4 = *(long *)(param_1 + 0x828);
        plVar3[1] = *(long *)(param_1 + 0x18);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 4) = 0;
        *plVar3 = (long)puVar2;
        plVar3[5] = lVar4 + uVar8 * 8;
        *(uint *)(plVar3 + 6) = uVar7;
        plVar3[7] = param_1 + 0x740;
        *(undefined4 *)(plVar3 + 4) = 1;
        plVar3[3] = (long)param_2;
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar3[2] = *(long *)(plVar3[3] + 0x10);
        (**(code **)(*plVar3 + 0x28))(plVar3);
        uVar7 = *(uint *)(param_1 + 0x830);
        uVar1 = (int)uVar8 + 0x100;
        uVar8 = (ulong)uVar1;
        iVar6 = iVar6 + -0x100;
      } while (uVar1 < uVar7);
    }
  }
  return;
}


