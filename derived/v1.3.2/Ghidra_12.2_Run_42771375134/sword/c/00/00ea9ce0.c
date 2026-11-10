/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea9ce0; name: FUN_00ea9ce0
 */


void FUN_00ea9ce0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_48;
  
  lVar7 = param_1[0xbe];
  if (lVar7 != -0x340d631b7bddd9bb) {
    plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
    for (plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar1 != plVar2;
        plVar1 = plVar1 + 1) {
      lVar6 = *plVar1;
      plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
      lVar4 = FUN_00fd8f80();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          if ((*(long *)(lVar6 + 0x1a0) == lVar7) &&
             (uVar5 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar5 & 1) == 0)) {
            (**(code **)(*param_1 + 0x10))(&local_48,param_1);
            lVar7 = local_48;
            local_48 = 0;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            lVar4 = *(long *)(lVar6 + 0x460);
            *(long *)(lVar6 + 0x460) = lVar7;
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
            }
            *(undefined1 *)(lVar6 + 0x468) = 1;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
            }
            if (local_48 == 0) {
              return;
            }
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            return;
          }
          break;
        }
      }
    }
  }
  return;
}


