/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eea980; name: FUN_00eea980
 */


long FUN_00eea980(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 local_48;
  
  lVar6 = *(long *)PTR_DAT_02717c48;
  lVar9 = *(long *)(lVar6 + 0x3f8);
  lVar10 = *(long *)(lVar6 + 0x400);
  if ((*(long **)(lVar6 + 0x150) != *(long **)(lVar6 + 0x148)) &&
     (lVar6 = **(long **)(lVar6 + 0x148), lVar6 != 0)) {
    lVar9 = *(long *)(lVar6 + 0x650);
    lVar10 = *(long *)(lVar6 + 0x658);
  }
  lVar6 = lVar9;
  if (lVar10 != -0x340d631b7bddd9bb) {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
    for (plVar8 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar8 != plVar1;
        plVar8 = plVar8 + 1) {
      lVar3 = FUN_00e813b0(*plVar8 + 0x50);
      if ((lVar3 != 0) && (uVar4 = (**(code **)(*(long *)*plVar8 + 0x88))(), (uVar4 & 1) == 0)) {
        FUN_006c5d20(auStack_80,lVar3 + 0x220);
        local_48 = local_60;
        lVar3 = *(long *)(lVar7 + 0x7d8);
        if (lVar3 != 0) {
          plVar8 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          lVar5 = FUN_00e331a0(lVar3,&local_48);
          if (lVar5 != 0) {
            iVar2 = FUN_00e332e0(lVar3,lVar5);
            lVar6 = lVar10;
            if (iVar2 != 2) {
              lVar6 = lVar9;
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        break;
      }
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  lVar9 = -0x32a1b40308fe7048;
  if (lVar6 != -0x340d631b7bddd9bb) {
    lVar9 = lVar6;
  }
  return lVar9;
}


