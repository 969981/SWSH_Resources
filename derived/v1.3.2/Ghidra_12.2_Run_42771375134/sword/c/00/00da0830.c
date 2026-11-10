/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da0830; name: FUN_00da0830
 */


long FUN_00da0830(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_40;
  long local_38;
  
  uVar6 = *(ulong *)(param_1 + 0x470);
  if (uVar6 != 0) {
    uVar4 = *param_2;
    uVar7 = uVar6 - 1;
    if ((uVar7 & uVar6) == 0) {
      uVar5 = uVar7 & uVar4;
      plVar8 = *(long **)(*(long *)(param_1 + 0x468) + uVar5 * 8);
    }
    else {
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar4 / uVar6;
        }
        uVar5 = uVar4 - uVar5 * uVar6;
      }
      plVar8 = *(long **)(*(long *)(param_1 + 0x468) + uVar5 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar7 & uVar6) == 0) {
        do {
          uVar6 = plVar8[1];
          if (uVar4 != uVar6 && (uVar6 & uVar7) != uVar5) {
            return 0;
          }
          if ((uVar4 == uVar6) && (plVar8[2] == uVar4)) goto LAB_00da0924;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar4 == uVar7) {
            if (plVar8[2] == uVar4) {
LAB_00da0924:
              lVar9 = plVar8[3];
              uVar6 = FUN_006e2fe0(lVar9 + 0x120);
              if ((((uVar6 & 1) == 0) && (lVar3 = *(long *)(lVar9 + 0x18), lVar3 != 0)) &&
                 (*(char *)(lVar3 + 0x170) != '\0')) {
                FUN_006e2db0(&local_40,lVar3,*(undefined8 *)(lVar3 + 400));
                lVar3 = local_38;
                *(undefined8 *)(lVar9 + 0x120) = local_40;
                if (local_38 != 0) {
                  (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
                }
                lVar2 = *(long *)(lVar9 + 0x128);
                *(long *)(lVar9 + 0x128) = lVar3;
                if (lVar2 != 0) {
                  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
                }
                if (local_38 != 0) {
                  (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
                }
              }
              return plVar8[3];
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar5) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return 0;
}


