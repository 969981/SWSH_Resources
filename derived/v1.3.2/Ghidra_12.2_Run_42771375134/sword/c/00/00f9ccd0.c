/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9ccd0; name: FUN_00f9ccd0
 */


long FUN_00f9ccd0(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if (((*PTR_DAT_02722cf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02722cf0), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_02722d00 = 0xba0;
    __cxa_guard_release(PTR_DAT_02722cf0);
    bVar1 = *PTR_DAT_02722cf8;
  }
  else {
    bVar1 = *PTR_DAT_02722cf8;
  }
  if (((bVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02722cf8), iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_02722d08 = 0xba7;
    __cxa_guard_release(PTR_DAT_02722cf8);
  }
  uVar6 = *(ulong *)PTR_DAT_02722d00;
  lVar3 = FUN_017623b0(param_1,uVar6);
  lVar4 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
  if (uVar6 < ((ulong)(uint)-(int)lVar3 & 7 | 0xba0) || lVar4 == 0) {
    FUN_0175ef30(param_1,0xfffffffe);
    uVar6 = *(ulong *)PTR_DAT_02722d08;
    lVar3 = FUN_017623b0(param_1,uVar6);
    lVar4 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
    if (uVar6 < ((ulong)(uint)-(int)lVar3 & 7 | 0xba0) || lVar4 == 0) {
      FUN_0175ef30(param_1,0xfffffffe);
      if (((*PTR_DAT_02722d10 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02722d10), puVar5 = PTR_DAT_02722d18, iVar2 != 0)) {
        FUN_00f9ced0(PTR_DAT_02722d18);
        FUN_001001c0(PTR__string_02715f58,puVar5,&PTR_LOOP_025db000);
        __cxa_guard_release(PTR_DAT_02722d10);
      }
      puVar5 = *(undefined **)(PTR_DAT_02722d18 + 0x10);
      if ((*PTR_DAT_02722d18 & 1) == 0) {
        puVar5 = PTR_DAT_02722d18 + 1;
      }
      FUN_0175cc80(param_1,"cannot properly align memory for \'%s\'",puVar5);
      lVar4 = 0;
    }
  }
  return lVar4;
}


