/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f75810; name: FUN_00f75810
 */


long FUN_00f75810(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  if (((*PTR_DAT_02721c50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02721c50), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_02721c60 = 9;
    __cxa_guard_release(PTR_DAT_02721c50);
    bVar1 = *PTR_DAT_02721c58;
  }
  else {
    bVar1 = *PTR_DAT_02721c58;
  }
  if (((bVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02721c58), iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_02721c68 = 0x10;
    __cxa_guard_release(PTR_DAT_02721c58);
  }
  uVar9 = *(ulong *)PTR_DAT_02721c60;
  lVar4 = FUN_017623b0(param_1,uVar9);
  uVar7 = (ulong)(uint)-(int)lVar4 & 7;
  plVar6 = (long *)(lVar4 + uVar7);
  if ((((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar9 && plVar6 != (long *)0x0) && (uVar9 - uVar7 != 8)
     ) {
LAB_00f759b0:
    *plVar6 = (long)(plVar6 + 1);
    return (long)(plVar6 + 1);
  }
  FUN_0175ef30(param_1,0xfffffffe);
  uVar9 = *(ulong *)PTR_DAT_02721c68;
  lVar4 = FUN_017623b0(param_1,uVar9);
  uVar7 = (ulong)(uint)-(int)lVar4 & 7;
  plVar6 = (long *)(lVar4 + uVar7);
  if (uVar9 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || plVar6 == (long *)0x0) {
    FUN_0175ef30(param_1,0xfffffffe);
    bVar2 = true;
    bVar1 = *PTR_DAT_02721c00;
  }
  else {
    if (uVar9 - uVar7 != 8) goto LAB_00f759b0;
    FUN_0175ef30(param_1,0xfffffffe);
    bVar2 = false;
    bVar1 = *PTR_DAT_02721c00;
  }
  if (((bVar1 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02721c00), puVar8 = PTR_DAT_02721c08, iVar3 != 0)) {
    FUN_00f74020(PTR_DAT_02721c08);
    FUN_001001c0(PTR__string_02715f58,puVar8,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02721c00);
  }
  puVar8 = *(undefined **)(PTR_DAT_02721c08 + 0x10);
  if ((*PTR_DAT_02721c08 & 1) == 0) {
    puVar8 = PTR_DAT_02721c08 + 1;
  }
  if (bVar2) {
    pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_0175cc80(param_1,pcVar5,puVar8);
  return 0;
}


