/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f35920; name: FUN_00f35920
 */


void FUN_00f35920(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar2 = *(long **)(param_1 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    uVar3 = (**(code **)(*(long *)*plVar1 + 0x88))();
    if ((uVar3 & 1) == 0) {
      lVar7 = *plVar1;
      puVar8 = (undefined8 *)(lVar7 + 0x50);
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar5 = FUN_01590f40();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          lVar5 = *(long *)(lVar7 + 0x290);
          if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x80), lVar5 != 0)) {
            plVar4 = (long *)(lVar5 + 0x48);
            (**(code **)(*plVar4 + 0x10))(plVar4);
            if (*(int *)(lVar5 + 0x54) != 0) {
              puVar8 = *(undefined8 **)(lVar5 + 0x60);
              plVar6 = (long *)(**(code **)*puVar8)(puVar8);
              lVar5 = FUN_006cb2c0();
              for (; plVar6 != (long *)lVar5; plVar6 = (long *)*plVar6) {
              }
              *(undefined1 *)(puVar8 + 2) = *(undefined1 *)*param_2;
            }
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          break;
        }
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


