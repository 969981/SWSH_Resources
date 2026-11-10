/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f7af0; name: FUN_012f7af0
 */


long FUN_012f7af0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
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
  long local_58;
  long local_50;
  
  puVar1 = PTR_DAT_027185f8;
  if (*(long *)(param_1 + 0x78) != 0) {
    return *(long *)(param_1 + 0x78);
  }
  FUN_0120e660(local_110,*(undefined8 *)PTR_DAT_027185f8);
  FUN_007a2d60(local_a0,local_100);
  if (local_110[0] == '\0') goto LAB_012f7b98;
  if (local_b0 != 0) {
    (**(code **)(*local_100[0] + 0x18))(local_100[0],local_c0,local_b0 << 3,8);
  }
  if (alStack_f0 == local_d0) {
    pcVar3 = *(code **)(*local_d0 + 0x20);
LAB_012f7b90:
    (*pcVar3)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar3 = *(code **)(*local_d0 + 0x28);
    goto LAB_012f7b90;
  }
  local_110[0] = '\0';
LAB_012f7b98:
  if (local_58 != 0) {
    lVar6 = local_58 << 3;
    plVar5 = local_60;
    do {
      lVar4 = *plVar5;
      cVar2 = FUN_0120e630(*(undefined8 *)puVar1,lVar4);
      if (cVar2 == '\0') {
        *(long *)(param_1 + 0x78) = lVar4;
        goto joined_r0x012f7c44;
      }
      lVar6 = lVar6 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar6 != 0);
  }
  lVar4 = 0;
joined_r0x012f7c44:
  if (local_50 != 0) {
    (**(code **)(*local_a0[0] + 0x18))(local_a0[0],local_60,local_50 << 3,8);
  }
  if (alStack_90 == local_70) {
    pcVar3 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) {
      return lVar4;
    }
    pcVar3 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar3)();
  return lVar4;
}


