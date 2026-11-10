/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa4540; name: FUN_00fa4540
 */


undefined8 FUN_00fa4540(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_027194d8;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  plVar1 = *(long **)(lVar8 + 0xb0);
  plVar2 = *(long **)(lVar8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      uVar7 = 0;
joined_r0x00fa4640:
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      return uVar7;
    }
    lVar8 = *plVar1;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))((undefined8 *)(lVar8 + 0x50));
    lVar6 = FUN_01590c90();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar6) {
        uVar4 = FUN_00dc5950(lVar8 + 0x3b0);
        if ((((uVar4 & 1) != 0) &&
            (uVar4 = FUN_01510f00(lVar5,*(undefined8 *)(lVar8 + 0x1a8)), (uVar4 & 1) == 0)) &&
           (uVar4 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar4 & 1) == 0)) {
          uVar7 = 1;
          goto joined_r0x00fa4640;
        }
        break;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


