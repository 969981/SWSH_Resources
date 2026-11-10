/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1a9a0; name: FUN_00e1a9a0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00e1a9a0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_0271ef98;
  puVar3 = PTR_DAT_0271ef90;
  plVar11 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0);
  plVar1 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
  if (plVar11 == plVar1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    do {
      uVar7 = (**(code **)(*(long *)*plVar11 + 0x88))();
      if ((uVar7 & 1) == 0) {
        lVar9 = *plVar11;
        puVar10 = (undefined8 *)(lVar9 + 0x50);
        plVar8 = (long *)(**(code **)*puVar10)(puVar10);
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar6 = FUN_00e1ca40();
          *(undefined8 *)puVar4 = uVar6;
          __cxa_guard_release(puVar3);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar4) {
            uVar7 = FUN_00dc7720(lVar9);
            if ((uVar7 & 1) == 0) {
              uVar2 = 0;
            }
            break;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  return uVar2;
}


