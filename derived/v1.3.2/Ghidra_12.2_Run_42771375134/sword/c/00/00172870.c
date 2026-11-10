/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00172870; name: FUN_00172870
 */


void FUN_00172870(undefined4 param_1,long param_2,long param_3,long param_4,long param_5,int param_6
                 ,void *param_7,long param_8,undefined8 param_9,long param_10,long param_11,
                 long *param_12)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int local_a0;
  int iStack_9c;
  
  uVar3 = param_6 + 0xffU >> 8;
  if (uVar3 != 0) {
    local_a0 = 0;
    iStack_9c = 0;
    uVar6 = 0;
    puVar1 = PTR_DAT_02710ee8 + 0x10;
    do {
      puVar9 = *(undefined8 **)(param_2 + 0x2e8);
      uVar5 = uVar3 - uVar6;
      if (0x3f < uVar5) {
        uVar5 = 0x40;
      }
      FUN_003ff570(*puVar9);
                    /* try { // try from 0017291c to 0017292f has its CatchHandler @ 00172ab4 */
      plVar4 = (long *)FUN_001a6400(puVar9,uVar5 * 0x88,0x10);
                    /* try { // try from 00172934 to 00172937 has its CatchHandler @ 00172ab0 */
      FUN_003ff5a0(*puVar9);
      if (uVar5 != 0) {
        uVar10 = 0;
        iVar7 = local_a0;
        iVar8 = iStack_9c;
        do {
          uVar2 = param_6 + iVar7;
          if (0xff < (uint)(param_6 + iVar7)) {
            uVar2 = 0x100;
          }
          plVar4[1] = *(long *)(param_2 + 0x300);
          plVar4[2] = 0;
          *(undefined4 *)(plVar4 + 4) = 0;
          *plVar4 = (long)puVar1;
          *(undefined4 *)(plVar4 + 0xb) = param_1;
          plVar4[5] = param_2;
          plVar4[6] = param_3;
          *(int *)((long)plVar4 + 0x5c) = param_6;
          *(int *)(plVar4 + 0xe) = iVar8;
          *(uint *)((long)plVar4 + 0x74) = uVar2;
          plVar4[7] = param_4;
          plVar4[8] = param_5;
          plVar4[9] = (long)param_7;
          plVar4[10] = param_8;
          plVar4[0xc] = param_10;
          plVar4[0xd] = param_11;
          *(undefined4 *)(plVar4 + 0xf) = *(undefined4 *)(param_2 + 0x68);
          *(undefined4 *)((long)plVar4 + 0x7c) = *(undefined4 *)(param_2 + 0x6c);
          *(undefined4 *)(plVar4 + 0x10) = *(undefined4 *)(param_2 + 0x70);
          *(undefined4 *)(plVar4 + 4) = 1;
          plVar4[3] = (long)param_12;
          (**(code **)(*param_12 + 0x20))(param_12);
          plVar4[2] = *(long *)(plVar4[3] + 0x10);
          (**(code **)(*plVar4 + 0x28))(plVar4);
          uVar10 = uVar10 + 1;
          plVar4 = plVar4 + 0x11;
          iVar7 = iVar7 + -0x100;
          iVar8 = iVar8 + 0x100;
        } while (uVar10 < uVar5);
      }
      local_a0 = local_a0 + -0x4000;
      uVar6 = uVar6 + 0x40;
      iStack_9c = iStack_9c + 0x4000;
    } while (uVar6 < uVar3);
  }
                    /* WARNING: Subroutine does not return */
  memset(param_7,0,(ulong)(uint)(param_6 << 5));
}


