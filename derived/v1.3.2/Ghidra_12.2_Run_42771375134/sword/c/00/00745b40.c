/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00745b40; name: FUN_00745b40
 */


void FUN_00745b40(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x30;
  plVar4 = *(long **)(param_1 + 0x210);
  plVar5 = *(long **)(param_1 + 0x218);
  if (plVar4 != plVar5) {
LAB_00745b70:
    do {
      if ((*plVar4 != 0) && (puVar3 = *(undefined8 **)(*plVar4 + 0x60), puVar3 != (undefined8 *)0x0)
         ) {
        plVar1 = (long *)(**(code **)*puVar3)(puVar3);
        lVar2 = FUN_00702ff0();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            (**(code **)(puVar3[-10] + 0x70))(puVar3 + -10,param_3 & 1,3);
            plVar4 = plVar4 + 1;
            if (plVar4 == plVar5) {
              return;
            }
            goto LAB_00745b70;
          }
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
  }
  return;
}


