/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e774b0; name: FUN_00e774b0
 */


undefined8 FUN_00e774b0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar1 == puVar2) {
      lVar5 = FUN_00e76460(param_1);
      if (lVar5 != -0x340d631b7bddd9bb) {
        FUN_01511030(lVar4,lVar5);
      }
      uVar7 = 0;
joined_r0x00e77674:
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      return uVar7;
    }
    plVar6 = (long *)*puVar1;
    if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_1) &&
       (uVar3 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar3 & 1) == 0)) {
      plVar8 = plVar6 + 9;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar6 + 0x80))(plVar6);
      FUN_00db5db0(plVar6,0);
      if (plVar6[0x53] != 0) {
        FUN_00dc73b0(plVar6[0x53],0);
      }
      if (plVar6[0x52] != 0) {
        FUN_00e84520(plVar6[0x52],0);
      }
      if (plVar6[0x6d] != 0) {
        FUN_00dc73b0(plVar6[0x6d],0);
      }
      if (plVar6[0x6c] != 0) {
        FUN_00e84520(plVar6[0x6c],0);
      }
      if (plVar6[0x35] != -0x340d631b7bddd9bb) {
        FUN_01511030(lVar4);
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
      uVar7 = 1;
      goto joined_r0x00e77674;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


