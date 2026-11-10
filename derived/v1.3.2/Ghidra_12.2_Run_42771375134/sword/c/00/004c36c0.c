/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c36c0; name: FUN_004c36c0
 */


void FUN_004c36c0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_4c;
  undefined4 local_48 [2];
  
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar5 = plVar3;
  if (uVar2 == 0) {
LAB_004c3720:
    if (plVar5 != plVar3 + (ulong)uVar2 * 4) {
      local_48[0] = 0x4000b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4001b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4002b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4003b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4004b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4005b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4006b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4007b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4008b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x4009b0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x400ab0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x400bb0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x400cb0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x400db0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x400eb0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      local_48[0] = 0x400fb0;
      FUN_004c30d0(param_1,param_2,local_48,0,0,0);
      *(undefined2 *)(plVar5 + 3) = 0;
      for (plVar5 = (long *)plVar5[2]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if ((((plVar5[3] == param_2) &&
             (*(undefined4 *)((long)plVar5 + 0x2c) = 0, *(char *)(plVar5 + 5) == -0x70)) &&
            (*(char *)((long)plVar5 + 0x2b) != '\0')) && ((*(byte *)(plVar5 + 6) >> 2 & 1) == 0)) {
          local_4c = CONCAT31((int3)((uint)*(undefined4 *)(plVar5 + 5) >> 8),0x80);
          FUN_004c30d0(param_1,param_2,&local_4c,0,1,0);
        }
      }
      FUN_004c34a0(param_1,0);
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 != (long *)0x0) {
        plVar3 = (long *)0x0;
        do {
          while( true ) {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
            if (plVar6[3] != param_2) break;
            plVar1 = (long *)(param_1 + 0x28);
            if (*(long **)(param_1 + 0x28) != plVar6) {
              plVar1 = plVar3;
            }
            lVar4 = plVar6[2];
            *plVar1 = (long)plVar5;
            if (*(long **)(param_1 + 0x20) == plVar6) {
              *(long **)(param_1 + 0x20) = plVar3;
            }
            *(undefined8 *)(lVar4 + 0x10) = 0;
            FUN_004c5230(plVar6);
            FUN_004c4930(plVar6);
            if (plVar5 == (long *)0x0) {
              return;
            }
          }
          plVar3 = plVar6;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  else {
    lVar4 = (ulong)uVar2 << 5;
    do {
      if (*plVar5 == *(long *)(param_2 + 0x40)) goto LAB_004c3720;
      lVar4 = lVar4 + -0x20;
      plVar5 = plVar5 + 4;
    } while (lVar4 != 0);
  }
  return;
}


