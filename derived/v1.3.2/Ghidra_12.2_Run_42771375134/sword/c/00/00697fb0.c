/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00697fb0; name: FUN_00697fb0
 */


long * FUN_00697fb0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  piVar2 = (int *)*param_1;
  if (((((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 5)) ||
       (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 == 0)) ||
      ((*(char *)((long)piVar2 + uVar4) == '\0' || (param_1[10] == 0)))) ||
     (uVar4 = param_1[2], uVar4 == 0)) goto LAB_006980b4;
  uVar3 = *param_2;
  uVar7 = uVar4 - 1;
  if ((uVar7 & uVar4) == 0) {
    uVar5 = uVar7 & uVar3;
LAB_0069802c:
    plVar6 = *(long **)(param_1[1] + uVar5 * 8);
  }
  else {
    uVar5 = uVar3;
    if (uVar3 < uVar4) goto LAB_0069802c;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar3 / uVar4;
    }
    uVar5 = uVar3 - uVar5 * uVar4;
    plVar6 = *(long **)(param_1[1] + uVar5 * 8);
  }
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if ((uVar7 & uVar4) == 0) {
      do {
        uVar4 = plVar6[1];
        if (uVar3 != uVar4 && (uVar4 & uVar7) != uVar5) break;
        if ((uVar3 == uVar4) && (plVar6[2] == uVar3)) goto LAB_006980c0;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[2] == uVar3) {
LAB_006980c0:
            return plVar6 + 6;
          }
        }
        else {
          if (uVar4 <= uVar7) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar7 / uVar4;
            }
            uVar7 = uVar7 - uVar1 * uVar4;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_006980b4:
  plVar6 = (long *)FUN_00697a10();
  return plVar6;
}


