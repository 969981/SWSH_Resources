/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45710; name: FUN_00e45710
 */


void FUN_00e45710(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  if ((((long *)param_3[0x83] != (long *)param_3[0x84]) &&
      (lVar5 = *(long *)param_3[0x83], lVar5 != 0)) &&
     (puVar6 = *(undefined8 **)(lVar5 + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar2 != 0)) {
      uVar4 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar4;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_027150b0) {
        local_70 = 0x2b3f1c238029affa;
        local_68 = "eye_move_u";
        local_60 = 10;
        local_58 = 0;
        cVar1 = FUN_0069d160(puVar6 + -10,&local_70);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        if (cVar1 != '\0') {
          *(undefined1 *)(param_3 + 0xb3) = 1;
          *(undefined4 *)(param_3 + 0xb4) = 0;
          *(float *)((long)param_3 + 0x59c) = 1.0 / (float)param_4;
          local_70 = 0x2b3f1c238029affa;
          local_68 = "eye_move_u";
          local_60 = 10;
          local_58 = 0;
          uVar7 = (**(code **)(*param_3 + 0x178))(0,param_3,&local_70);
          *(undefined4 *)((long)param_3 + 0x5a4) = uVar7;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
          *(undefined4 *)(param_3 + 0xb5) = param_1;
          local_70 = 0x2b3f1b238029ae47;
          local_68 = "eye_move_v";
          local_60 = 10;
          local_58 = 0;
          uVar7 = (**(code **)(*param_3 + 0x178))(0,param_3,&local_70);
          *(undefined4 *)((long)param_3 + 0x5ac) = uVar7;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
          *(undefined4 *)(param_3 + 0xb6) = param_2;
          *(undefined4 *)((long)param_3 + 0x5b4) = param_5;
          return;
        }
        break;
      }
    }
  }
  *(undefined1 *)(param_3 + 0xb3) = 0;
  return;
}


