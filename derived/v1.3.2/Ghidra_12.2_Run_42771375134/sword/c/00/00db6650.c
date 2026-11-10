/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db6650; name: FUN_00db6650
 */


void FUN_00db6650(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if ((*(long *)(param_1 + 0x298) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x298) + 0x80), lVar7 != 0)) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    puVar9 = *(undefined8 **)(lVar7 + 0x60);
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*PTR_DAT_02715280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02715280), iVar3 != 0)) {
        uVar5 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715288 = uVar5;
        __cxa_guard_release(PTR_DAT_02715280);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)PTR_DAT_02715288) {
          puVar9 = puVar9 + -10;
          goto LAB_00db66dc;
        }
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_00db66dc:
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if ((puVar9 != (undefined8 *)0x0) && (puVar9[0x2c] != 0)) {
      uVar10 = puVar9[0xf];
      uVar5 = puVar9[0xe];
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(undefined8 *)(param_1 + 0xb8) = uVar10;
      *(undefined8 *)(param_1 + 0xb0) = uVar5;
    }
  }
  puVar2 = PTR_DAT_02715288;
  puVar1 = PTR_DAT_02715280;
  plVar8 = *(long **)(param_1 + 0x2d8);
  plVar4 = *(long **)(param_1 + 0x2e0);
  do {
    if (plVar8 == plVar4) {
      return;
    }
    if ((*(long *)(*plVar8 + 0x80) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(*plVar8 + 0x80) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar6 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_01590a70();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)puVar2) {
          if (((*(char *)(puVar9 + 2) != '\0') && (*(char *)(puVar9 + 0x2c) != '\0')) &&
             (puVar9[0x22] != 0)) {
            *(undefined1 *)(param_1 + 0x351) = 1;
            return;
          }
          break;
        }
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


