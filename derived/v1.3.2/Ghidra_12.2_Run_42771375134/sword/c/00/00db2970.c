/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db2970; name: FUN_00db2970
 */


void FUN_00db2970(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_38;
  undefined1 local_24 [4];
  
  if ((*(long *)(param_1 + 0x188) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x188) + 0x60), puVar8 == (undefined8 *)0x0)) {
    lVar6 = *(long *)(param_1 + 0x198);
  }
  else {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715b80 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02715b80), iVar3 != 0)) {
      uVar9 = FUN_00727dd0();
      *(undefined8 *)PTR_DAT_02715b88 = uVar9;
      __cxa_guard_release(PTR_DAT_02715b80);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_02715b88) {
        puVar8 = puVar8 + -10;
        lVar6 = *(long *)(param_1 + 0x198);
        goto joined_r0x00db2a7c;
      }
    }
    lVar6 = *(long *)(param_1 + 0x198);
  }
  puVar8 = (undefined8 *)0x0;
joined_r0x00db2a7c:
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x60), lVar6 != 0)) {
    uVar5 = FUN_0156b540(lVar6);
    lVar6 = lVar6 + -0x50;
    if ((uVar5 & 1) == 0) {
      lVar6 = 0;
    }
    if ((puVar8 != (undefined8 *)0x0) && ((uVar5 & 1) != 0)) {
      uVar9 = puVar8[0x99];
      if ((*(char *)(lVar6 + 0x21a) == '\0') &&
         ((*(char *)(lVar6 + 0x219) == '\0' && (*(char *)(lVar6 + 0x218) != '\0')))) {
        bVar1 = *(char *)(param_1 + 0x1a0) != '\0';
        uVar2 = (uint)bVar1;
        pcVar7 = *(code **)(param_1 + 0x1b0);
      }
      else {
        uVar2 = 0;
        bVar1 = false;
        pcVar7 = *(code **)(param_1 + 0x1b0);
      }
      if (pcVar7 != (code *)0x0) {
        local_24[0] = bVar1;
        uVar2 = (*pcVar7)(param_1 + 0x1d0,local_24);
      }
      if ((((uint)uVar9 ^ uVar2) & 1) != 0) {
        local_38 = 0;
        FUN_007273c0(puVar8,uVar2 & 1,&local_38);
      }
    }
  }
  return;
}


