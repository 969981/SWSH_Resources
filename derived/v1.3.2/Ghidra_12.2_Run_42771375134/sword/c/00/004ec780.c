/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ec780; name: FUN_004ec780
 */


undefined8 FUN_004ec780(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    uVar1 = (uint)param_2 - uVar2 * uVar1;
    plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8);
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)0x0;
      do {
        plVar4 = plVar3;
        if (*plVar4 == param_2) {
          if ((int)plVar4[1] != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              FUN_004ebc30(param_1,plVar4[2] + lVar6);
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x70;
            } while (uVar7 < *(uint *)(plVar4 + 1));
          }
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8);
          }
          else {
            plVar5 = plVar5 + 3;
          }
          *plVar5 = plVar4[3];
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          FUN_004ebaf0(param_1 + 0x80,plVar4);
          return 1;
        }
        plVar3 = (long *)plVar4[3];
        plVar5 = plVar4;
      } while ((long *)plVar4[3] != (long *)0x0);
    }
  }
  return 0xf;
}


