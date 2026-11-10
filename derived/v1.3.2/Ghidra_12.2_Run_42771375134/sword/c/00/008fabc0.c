/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fabc0; name: FUN_008fabc0
 */


void FUN_008fabc0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined2 *)(param_2 + 5) = 0;
  cVar2 = FUN_01524bf0(*param_2);
  *(char *)((long)param_2 + 0x2d) = cVar2;
  *(ushort *)((long)param_2 + 0x2a) = (ushort)(cVar2 != '\0');
  plVar6 = *(long **)(param_1 + 0x60);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_0077d050(lVar5,0xd);
  *(long **)(lVar5 + 8) = plVar6;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (param_2[1] != 0) {
    (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
    param_2[1] = 0;
  }
  param_2[1] = lVar5;
  FUN_01524b90(*param_2,lVar5);
  lVar4 = param_2[3];
  param_2[3] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = param_2[4];
  param_2[4] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(undefined4 *)((long)param_2 + 0x4a) = 0;
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02715198), puVar1 = PTR_DAT_027151a0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar1 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar1,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  puVar1 = PTR_DAT_027151a0;
  param_2[10] = *(undefined8 *)PTR_DAT_027151a0;
  param_2[0xb] = *(undefined8 *)(puVar1 + 8);
  lVar4 = *(long *)(puVar1 + 0x18);
  param_2[0xc] = *(undefined8 *)(puVar1 + 0x10);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = param_2[0xd];
  param_2[0xd] = lVar4;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008fad60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  return;
}


