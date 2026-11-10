/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120ca50; name: FUN_0120ca50
 */


void FUN_0120ca50(long *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  char local_a0 [16];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long *local_50;
  long local_48;
  long local_40;
  
  lVar5 = *(long *)PTR_DAT_027185f8;
  if (lVar5 == 0) goto LAB_0120cb88;
  lVar3 = FUN_0120e640(lVar5);
  FUN_0120e660(local_a0,lVar5);
  if (local_a0[0] == '\0') goto LAB_0120cb88;
  if ((local_48 == 2) &&
     ((lVar5 = *local_50, lVar3 != lVar5 || (lVar5 = local_50[1], lVar3 != lVar5)))) {
    if (((lVar5 == 0) || (bVar2 = FUN_007b5850(), 7 < bVar2)) ||
       (*(long *)(param_2 + (ulong)bVar2 * 0x30 + 0xa0) == 0)) {
      *param_1 = 0;
      bVar1 = true;
    }
    else {
      *param_1 = param_2 + (ulong)bVar2 * 0x30 + 0x78;
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (local_a0[0] != '\0') {
    if (local_40 != 0) {
      (**(code **)(*local_90 + 0x18))(local_90,local_50,local_40 << 3,8);
    }
    if (alStack_80 == local_60) {
      pcVar4 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_0120cb84;
      pcVar4 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar4)();
  }
LAB_0120cb84:
  if (bVar1) {
    return;
  }
LAB_0120cb88:
  *param_1 = 0;
  return;
}


