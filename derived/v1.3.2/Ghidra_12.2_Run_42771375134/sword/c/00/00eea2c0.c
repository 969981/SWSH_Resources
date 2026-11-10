/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eea2c0; name: FUN_00eea2c0
 */


void FUN_00eea2c0(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  plVar5 = *(long **)(lVar4 + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  lVar7 = *(long *)PTR_DAT_027108d0;
  *(undefined4 *)(lVar4 + 0x7f0) = *(undefined4 *)(lVar7 + 0xb38);
  *(undefined1 *)(lVar4 + 0x7f4) = *(undefined1 *)(lVar7 + 0xb3c);
  *(undefined1 *)(lVar4 + 0x7f5) = *(undefined1 *)(lVar7 + 0xb3d);
  *(undefined4 *)(lVar4 + 0x7f8) = *(undefined4 *)(lVar7 + 0xb74);
  uVar2 = FUN_00884820(plVar5);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar6);
      if (*(short *)(lVar7 + uVar6 * 8 + 0xba4) == 0) {
        FUN_00878ce0(uVar3,*(undefined2 *)(lVar7 + uVar6 * 8 + 0xba2));
      }
      else {
        FUN_00878c70(uVar3,0);
      }
      FUN_014ae840(lVar4,uVar3);
      uVar1 = (int)uVar6 + 1U & 0xff;
      uVar6 = (ulong)uVar1;
    } while (uVar1 < uVar2);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00eea3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


