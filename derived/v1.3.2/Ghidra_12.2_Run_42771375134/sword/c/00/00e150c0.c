/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e150c0; name: FUN_00e150c0
 */


void FUN_00e150c0(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_0271ee58;
  puVar3 = PTR_DAT_0271ee50;
  if (*(long *)(param_1 + 0xf0) == 0x674edc539f9f74a6 ||
      *(long *)(param_1 + 0xf0) == 0x5ea5c3539ab81c81) {
    plVar2 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
    for (plVar1 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0); plVar1 != plVar2;
        plVar1 = plVar1 + 1) {
      lVar9 = *plVar1;
      plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar6 = FUN_00a89c30();
        *(undefined8 *)puVar4 = uVar6;
        __cxa_guard_release(puVar3);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar4) {
          uVar8 = (**(code **)(*(long *)*plVar1 + 0x88))();
          if ((uVar8 & 1) == 0) {
            if (*(char *)(lVar9 + 0x610) != '\0') {
              return;
            }
            if ((param_2 & 1) == 0) {
              FUN_00e3d790(lVar9);
              return;
            }
            FUN_00e3d850();
            return;
          }
          break;
        }
      }
    }
  }
  return;
}


