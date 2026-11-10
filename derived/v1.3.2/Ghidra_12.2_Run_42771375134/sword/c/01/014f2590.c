/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f2590; name: FUN_014f2590
 */


void FUN_014f2590(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  
  uVar3 = param_1[1];
  if (0x107 < uVar3) {
    uVar8 = 0;
    puVar1 = PTR_DAT_0272a688 + 0x10;
    puVar2 = PTR_DAT_0272a680 + 0x10;
    do {
      plVar5 = (long *)(param_2 + uVar8 * 0x108);
      lVar7 = plVar5[0x1d];
      *plVar5 = (long)puVar1;
      plVar5[0x1d] = 0;
      if (lVar7 != 0) {
        puVar10 = (ulong *)(param_2 + uVar8 * 0x108 + 0xf8);
        uVar4 = *puVar10;
        if (0xa7 < uVar4) {
          uVar9 = 0;
          plVar5 = (long *)(lVar7 + 0x88);
          do {
            plVar5[-0x11] = (long)puVar2;
            if (*plVar5 != 0) {
              (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
              *plVar5 = 0;
            }
            uVar9 = uVar9 + 1;
            plVar5 = plVar5 + 0x15;
          } while (uVar9 < uVar4 / 0xa8);
          uVar4 = *puVar10;
        }
        lVar6 = param_2 + uVar8 * 0x108;
        plVar5 = *(long **)(lVar6 + 0xf0);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,uVar4,*(undefined8 *)(lVar6 + 0x100));
      }
      plVar5 = (long *)(param_2 + uVar8 * 0x108 + 0x98);
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3 / 0x108);
    uVar3 = param_1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x014f26f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,uVar3,param_1[2]);
  return;
}


