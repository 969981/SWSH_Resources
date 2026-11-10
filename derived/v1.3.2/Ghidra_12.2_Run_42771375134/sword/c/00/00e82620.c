/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e82620; name: FUN_00e82620
 */


void FUN_00e82620(byte param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_58 [8];
  
  puVar3 = PTR_DAT_027194d8;
  plVar8 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar8 != plVar1) {
LAB_00e82658:
    do {
      uVar4 = (**(code **)(*(long *)*plVar8 + 0x88))();
      if ((uVar4 & 1) == 0) {
        puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb0);
        puVar2 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        if (puVar6 != puVar2) {
          lVar9 = *(long *)(*plVar8 + 0x1a0);
          do {
            plVar5 = (long *)*puVar6;
            if ((plVar5 != (long *)0x0 && plVar5[0x34] == lVar9) &&
               (uVar4 = (**(code **)(*plVar5 + 0x88))(plVar5), (uVar4 & 1) == 0)) {
              plVar7 = plVar5 + 9;
              (**(code **)(*plVar7 + 0x10))(plVar7);
              lVar9 = FUN_00d78f10(plVar5,auStack_58);
              if (lVar9 != 0) {
                *(byte *)(lVar9 + 0x363) = param_1 & 1;
              }
              (**(code **)(*plVar7 + 0x18))(plVar7);
              plVar8 = plVar8 + 1;
              if (plVar8 == plVar1) {
                return;
              }
              goto LAB_00e82658;
            }
            puVar6 = puVar6 + 1;
          } while (puVar2 != puVar6);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
}


