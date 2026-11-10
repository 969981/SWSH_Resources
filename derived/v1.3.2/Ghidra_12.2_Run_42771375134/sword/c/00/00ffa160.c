/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffa160; name: FUN_00ffa160
 */


void FUN_00ffa160(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  FUN_00ffcad0(param_1 + 0x100,param_2 & 1);
  if ((param_3 & 1) != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x5a0) + 0x10))();
    plVar1 = (long *)plVar2[1];
    for (plVar2 = (long *)*plVar2; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      while (lVar5 = *plVar2, lVar5 == 0) {
        FUN_00ffa160(0,param_2 & 1,1);
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          return;
        }
      }
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      puVar7 = *(undefined8 **)(lVar5 + 0x60);
      if (puVar7 == (undefined8 *)0x0) {
LAB_00ffa224:
        puVar7 = (undefined8 *)0x0;
      }
      else {
        plVar3 = (long *)(**(code **)*puVar7)(puVar7);
        plVar4 = (long *)FUN_00ffb220();
        if (plVar3 == (long *)0x0) goto LAB_00ffa224;
        do {
          if (plVar3 == plVar4) {
            puVar7 = puVar7 + -10;
            goto LAB_00ffa1b0;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        puVar7 = (undefined8 *)0x0;
      }
LAB_00ffa1b0:
      FUN_00ffa160(puVar7,param_2 & 1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  return;
}


