/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6faf0; name: FUN_00c6faf0
 */


void FUN_00c6faf0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *local_48;
  
  puVar2 = PTR_DAT_02715080;
  puVar1 = PTR_DAT_02715078;
  uVar8 = 0;
  do {
    plVar6 = *(long **)(param_1 + uVar8 * 8 + 0x168);
    if ((plVar6 != (long *)0x0) &&
       ((**(code **)(*plVar6 + 0x98))(&local_48), puVar3 = local_48, local_48 != (undefined8 *)0x0))
    {
      if (*(int *)((long)local_48 + 0x54) != 0) {
        puVar7 = (undefined8 *)local_48[0xc];
        if (puVar7 != (undefined8 *)0x0) {
          plVar6 = (long *)(**(code **)*puVar7)(puVar7);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar5 = FUN_00a87090();
            *(undefined8 *)puVar2 = uVar5;
            __cxa_guard_release(puVar1);
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == (long *)puVar2) {
              local_48 = puVar7 + -10;
              plVar6 = *(long **)(param_2 + 0x20);
              goto joined_r0x00c6fb38;
            }
          }
        }
        local_48 = (undefined8 *)0x0;
        plVar6 = *(long **)(param_2 + 0x20);
joined_r0x00c6fb38:
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_48);
      }
      (**(code **)(puVar3[9] + 0x18))(puVar3 + 9);
    }
    uVar8 = uVar8 + 1;
    if (5 < uVar8) {
      return;
    }
  } while( true );
}


