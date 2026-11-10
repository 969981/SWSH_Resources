/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f697e0; name: FUN_00f697e0
 */


long FUN_00f697e0(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (((*PTR_DAT_02721820 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02721820), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_02721830 = 0x14;
    __cxa_guard_release(PTR_DAT_02721820);
    bVar1 = *PTR_DAT_02721828;
  }
  else {
    bVar1 = *PTR_DAT_02721828;
  }
  if (((bVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02721828), iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_02721838 = 0x1b;
    __cxa_guard_release(PTR_DAT_02721828);
  }
  uVar11 = *(ulong *)PTR_DAT_02721830;
  lVar4 = FUN_017623b0(param_1,uVar11);
  uVar7 = (ulong)(uint)-(int)lVar4 & 7;
  plVar6 = (long *)(lVar4 + uVar7);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar11 && plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    uVar10 = (ulong)(uint)-(int)plVar8;
    if ((uVar10 & 3 | 0xc) <= (uVar11 - 8) - uVar7) goto LAB_00f699a8;
  }
  FUN_0175ef30(param_1,0xfffffffe);
  uVar11 = *(ulong *)PTR_DAT_02721838;
  lVar4 = FUN_017623b0(param_1,uVar11);
  uVar7 = (ulong)(uint)-(int)lVar4 & 7;
  plVar6 = (long *)(lVar4 + uVar7);
  if (uVar11 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || plVar6 == (long *)0x0) {
    FUN_0175ef30(param_1,0xfffffffe);
    bVar2 = true;
    bVar1 = *PTR_DAT_027217b8;
  }
  else {
    plVar8 = plVar6 + 1;
    uVar10 = (ulong)(uint)-(int)plVar8;
    if ((uVar10 & 3 | 0xc) <= (uVar11 - 8) - uVar7) {
LAB_00f699a8:
      lVar4 = (long)plVar8 + (uVar10 & 3);
      *plVar6 = lVar4;
      return lVar4;
    }
    FUN_0175ef30(param_1,0xfffffffe);
    bVar2 = false;
    bVar1 = *PTR_DAT_027217b8;
  }
  if (((bVar1 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_027217b8), puVar9 = PTR_DAT_027217c0, iVar3 != 0)) {
    FUN_00f68da0(PTR_DAT_027217c0);
    FUN_001001c0(PTR__string_02715f58,puVar9,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_027217b8);
  }
  puVar9 = *(undefined **)(PTR_DAT_027217c0 + 0x10);
  if ((*PTR_DAT_027217c0 & 1) == 0) {
    puVar9 = PTR_DAT_027217c0 + 1;
  }
  if (bVar2) {
    pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_0175cc80(param_1,pcVar5,puVar9);
  return 0;
}


