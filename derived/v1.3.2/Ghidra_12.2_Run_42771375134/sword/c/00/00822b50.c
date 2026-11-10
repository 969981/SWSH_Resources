/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00822b50; name: FUN_00822b50
 */


void FUN_00822b50(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = FUN_00822c50();
  uVar5 = *(long *)(param_2 + 8) - 1U & *(long *)(param_2 + 0x10) + lVar1;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(lVar1 + uVar5 * 8);
  if (lVar3 != 0) {
    if (lVar3 == *(long *)(lVar1 + (uVar5 ^ 1) * 8)) {
      uVar5 = uVar5 & 0xfffffffffffffffe;
      plVar6 = (long *)(*(long *)(lVar1 + uVar5 * 8) + 8);
      plVar7 = (long *)*plVar6;
      if (plVar7 != (long *)0x0) {
        plVar4 = plVar6;
        do {
          uVar2 = FUN_00822e30(plVar7[4],param_3);
          lVar1 = 8;
          if ((uVar2 & 1) == 0) {
            lVar1 = 0;
            plVar4 = plVar7;
          }
          plVar7 = *(long **)((long)plVar7 + lVar1);
        } while (plVar7 != (long *)0x0);
        if ((plVar4 != plVar6) && (uVar2 = FUN_00822e30(param_3,plVar4[4]), (uVar2 & 1) == 0)) {
          *param_1 = plVar4[4];
          param_1[1] = param_2;
          param_1[2] = uVar5;
          param_1[3] = (long)plVar4;
          goto LAB_00822c34;
        }
      }
    }
    else {
      do {
        uVar2 = FUN_00822350(lVar3,param_3);
        if ((uVar2 & 1) != 0) {
          *param_1 = lVar3;
          param_1[1] = param_2;
          param_1[2] = uVar5;
          param_1[3] = 0;
          goto LAB_00822c34;
        }
        lVar3 = *(long *)(lVar3 + 0x18);
      } while (lVar3 != 0);
    }
  }
  *param_1 = 0;
  param_1[3] = 0;
LAB_00822c34:
  param_1[4] = uVar5;
  return;
}


