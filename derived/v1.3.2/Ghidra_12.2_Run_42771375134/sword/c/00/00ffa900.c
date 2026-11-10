/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffa900; name: FUN_00ffa900
 */


void FUN_00ffa900(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if ((lVar6 != 0) &&
     ((**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48)),
     *(int *)(lVar6 + 0x54) != 0)) {
    puVar7 = *(undefined8 **)(lVar6 + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar7)(puVar7);
      lVar2 = FUN_00ffb220();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar7 = puVar7 + -10;
          lVar2 = *(long *)(param_1 + 8);
          goto joined_r0x00ffa9e0;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
    lVar2 = *(long *)(param_1 + 8);
joined_r0x00ffa9e0:
    if (lVar2 == 0) {
      FUN_00ffa780(puVar7[0xb4],0);
      lVar2 = *(long *)(param_1 + 0x10);
      goto joined_r0x00ffaa1c;
    }
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    puVar8 = *(undefined8 **)(lVar2 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
LAB_00ffa9cc:
      uVar5 = puVar7[0xb4];
      puVar8 = (undefined8 *)0x0;
    }
    else {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      plVar4 = (long *)FUN_00ffb220();
      if (plVar3 == (long *)0x0) goto LAB_00ffa9cc;
      do {
        if (plVar3 == plVar4) {
          puVar8 = puVar8 + -10;
          goto LAB_00ffaa00;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      puVar8 = (undefined8 *)0x0;
LAB_00ffaa00:
      uVar5 = puVar7[0xb4];
    }
    FUN_00ffa780(uVar5,puVar8);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x10);
joined_r0x00ffaa1c:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ffaa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


