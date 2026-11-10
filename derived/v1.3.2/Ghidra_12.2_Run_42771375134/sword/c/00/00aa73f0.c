/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa73f0; name: FUN_00aa73f0
 */


void FUN_00aa73f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  
  switch(param_3) {
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    *param_1 = 0x8fbd39028bf54cfb;
    param_1[1] = "Play_Ba_sys_status_p_up";
    param_1[2] = 0x17;
    param_1[3] = 0;
    return;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x2c:
    *param_1 = 0x524cfde33b4404ce;
    param_1[1] = "Play_Ba_sys_status_p_down";
    param_1[2] = 0x19;
    param_1[3] = 0;
    return;
  case 0x16:
  case 0x18:
  case 0x19:
    *param_1 = 0x2549657cf2c37493;
    param_1[1] = "Play_Ba_sys_status_poison";
    param_1[2] = 0x19;
    param_1[3] = 0;
    return;
  case 0x17:
    *param_1 = 0x9620f51e4faaec87;
    param_1[1] = "Play_Ba_sys_status_paralysis";
    param_1[2] = 0x1c;
    param_1[3] = 0;
    return;
  case 0x1a:
    *param_1 = 0xe9266adec35fbd25;
    param_1[1] = "Play_Ba_sys_status_confusion";
    param_1[2] = 0x1c;
    param_1[3] = 0;
    return;
  case 0x1b:
    *param_1 = 0xb5fa93251fcffc3;
    param_1[1] = "Play_Ba_sys_status_melomelo";
    param_1[2] = 0x1b;
    param_1[3] = 0;
    return;
  case 0x2d:
  case 0x2e:
    *param_1 = 0x87492b4779445af5;
    param_1[1] = "Play_Ba_sys_status_recover";
    param_1[2] = 0x1a;
    param_1[3] = 0;
    return;
  }
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_02715198), puVar3 = PTR_DAT_027151a0, iVar4 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar3 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar3,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  puVar3 = PTR_DAT_027151a0;
  uVar1 = *(undefined8 *)(PTR_DAT_027151a0 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_027151a0;
  param_1[1] = uVar1;
  lVar2 = *(long *)(puVar3 + 0x18);
  param_1[2] = *(undefined8 *)(puVar3 + 0x10);
  param_1[3] = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa7574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


