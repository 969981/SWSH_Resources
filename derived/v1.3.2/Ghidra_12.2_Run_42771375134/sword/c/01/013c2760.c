/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2760; name: FUN_013c2760
 */


long FUN_013c2760(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  char local_110 [16];
  long *local_100 [2];
  long alStack_f0 [4];
  long *local_d0;
  undefined8 local_c0;
  long local_b0;
  long *local_a0 [2];
  long alStack_90 [4];
  long *local_70;
  long *local_60;
  long lStack_58;
  long local_50;
  
  puVar3 = PTR_DAT_027185f8;
  if (*(long *)(param_1 + 0x138) != 0) {
    return *(long *)(param_1 + 0x138);
  }
  FUN_0120e660(local_110,*(undefined8 *)PTR_DAT_027185f8);
  FUN_007a2d60(local_a0,local_100);
  if (local_110[0] == '\0') goto LAB_013c2804;
  if (local_b0 != 0) {
    (**(code **)(*local_100[0] + 0x18))(local_100[0],local_c0,local_b0 << 3,8);
  }
  if (alStack_f0 == local_d0) {
    pcVar5 = *(code **)(*local_d0 + 0x20);
LAB_013c27fc:
    (*pcVar5)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar5 = *(code **)(*local_d0 + 0x28);
    goto LAB_013c27fc;
  }
  local_110[0] = '\0';
LAB_013c2804:
  lVar6 = lStack_58;
  plVar2 = local_60;
  plVar7 = plVar2;
  if ((lStack_58 != 0) && (cVar4 = FUN_0120e630(*(undefined8 *)puVar3,*local_60), cVar4 != '\0')) {
    plVar7 = plVar2 + lVar6;
    lVar6 = lVar6 * 8;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
        if (plVar7 != local_60 + lStack_58) goto LAB_013c2864;
        goto LAB_013c28ec;
      }
      plVar1 = plVar2 + 1;
      plVar2 = plVar2 + 1;
      cVar4 = FUN_0120e630(*(undefined8 *)puVar3,*plVar1);
    } while (cVar4 != '\0');
    plVar7 = plVar2;
  }
  if (plVar7 == local_60 + lStack_58) {
LAB_013c28ec:
    lVar6 = 0;
  }
  else {
LAB_013c2864:
    lVar6 = *plVar7;
  }
  if (local_50 != 0) {
    (**(code **)(*local_a0[0] + 0x18))(local_a0[0],local_60,local_50 << 3,8);
  }
  if (alStack_90 == local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) {
      return lVar6;
    }
    pcVar5 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar5)();
  return lVar6;
}


