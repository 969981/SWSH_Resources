/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbe0b0; name: FUN_00fbe0b0
 */


uint FUN_00fbe0b0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  plVar6 = (long *)*param_2;
  if ((long *)param_2[1] == plVar6) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      while (plVar2 = (long *)FUN_00fba2d0(plVar6), plVar2 == (long *)0x0) {
        plVar4 = (long *)param_2[1];
        plVar2 = plVar6 + 1;
        if (plVar2 == plVar4) {
          plVar7 = plVar6;
LAB_00fbe18c:
          do {
            plVar4 = plVar2 + -1;
            if (*plVar4 != 0) {
              (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
              plVar2[-1] = 0;
            }
            plVar2 = plVar4;
          } while (plVar7 != plVar4);
        }
        else {
          plVar2 = plVar6;
          do {
            if (*plVar2 != 0) {
              (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
              *plVar2 = 0;
            }
            plVar7 = plVar2 + 1;
            lVar5 = *plVar7;
            *plVar7 = 0;
            *plVar2 = lVar5;
            plVar2 = plVar7;
          } while (plVar4 + -1 != plVar7);
          plVar2 = (long *)param_2[1];
          if (plVar2 != plVar7) goto LAB_00fbe18c;
        }
        param_2[1] = plVar7;
        if (plVar7 == plVar6) goto LAB_00fbe1c8;
      }
      uVar3 = (**(code **)(*plVar2 + 0x88))();
      if ((uVar3 & 1) == 0) {
        uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2);
        uVar1 = uVar1 ^ 1;
      }
      else {
        uVar1 = 1;
      }
      uVar8 = uVar8 | uVar1;
      plVar6 = plVar6 + 1;
    } while ((long *)param_2[1] != plVar6);
  }
LAB_00fbe1c8:
  return ~uVar8 & 1;
}


