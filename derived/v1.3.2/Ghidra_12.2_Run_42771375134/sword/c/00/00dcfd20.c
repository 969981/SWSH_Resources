/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcfd20; name: FUN_00dcfd20
 */


void FUN_00dcfd20(ulong *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  char *__s;
  ulong uVar6;
  ulong uVar7;
  
  bVar1 = *(byte *)(param_2 + 0x1b0);
  if (bVar1 == 0) {
    bVar1 = *(byte *)(param_2 + 0x3d0);
    if (bVar1 == 0) {
      if (((*PTR_DAT_02715198 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02715198), puVar2 = PTR_DAT_027151a0, iVar3 != 0)) {
        *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
        *(undefined1 **)(puVar2 + 8) = &DAT_01d38550;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
        __cxa_guard_release(PTR_DAT_02715198);
      }
      puVar2 = PTR_DAT_027151a0;
      uVar7 = *(ulong *)(PTR_DAT_027151a0 + 8);
      *param_1 = *(ulong *)PTR_DAT_027151a0;
      param_1[1] = uVar7;
      uVar7 = *(ulong *)(puVar2 + 0x18);
      param_1[2] = *(ulong *)(puVar2 + 0x10);
      param_1[3] = uVar7;
      if (uVar7 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00dcfe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(uVar7 + 0x48) + 0x10))();
      return;
    }
    __s = (char *)(param_2 + 0x3d0);
    uVar7 = 0xcbf29ce484222645;
    sVar4 = strlen(__s);
    pbVar5 = (byte *)(param_2 + 0x3d1);
    do {
      uVar6 = (ulong)bVar1;
      bVar1 = *pbVar5;
      uVar7 = (uVar7 ^ uVar6) * 0x100000001b3;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  else {
    __s = (char *)(param_2 + 0x1b0);
    uVar7 = 0xcbf29ce484222645;
    sVar4 = strlen(__s);
    pbVar5 = (byte *)(param_2 + 0x1b1);
    do {
      uVar6 = (ulong)bVar1;
      bVar1 = *pbVar5;
      uVar7 = (uVar7 ^ uVar6) * 0x100000001b3;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = uVar7;
  param_1[1] = (ulong)__s;
  param_1[2] = sVar4;
  param_1[3] = 0;
  return;
}


